#ifndef UE4SS_SDK_Modio_HPP
#define UE4SS_SDK_Modio_HPP

#include "Modio_enums.hpp"

struct FModioGameID
{
};

struct FModioApiKey
{
};

struct FModioInitializeOptions
{
    FModioGameID GameId;
    FModioApiKey ApiKey;
    EModioEnvironment GameEnvironment;
    EModioPortal PortalInUse;
};

struct FModioAuthenticationParams
{
    FString AuthToken;
    FString UserEmail;
    bool bUserHasAcceptedTerms;
};

struct FModioUserID
{
};

struct FModioEmailAuthCode
{
};

struct FModioEmailAddress
{
};

struct FModioModID
{
};

struct FModioFileMetadataID
{
};

class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{

    FModioInitializeOptions SetPortal(const FModioInitializeOptions& options, EModioPortal PortalToUse);
    FModioInitializeOptions MakeInitializeOptions(int64 GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    FModioGameID MakeGameId(int64 GameId);
    FModioAuthenticationParams MakeAuthParams(const FString AuthToken, const FString EmailAddress, const bool bHasAcceptedTOS);
    FModioApiKey MakeApiKey(const FString ApiKey);
    FString Conv_UserIDToString(FModioUserID UserId);
    FModioEmailAuthCode Conv_StringToEmailAuthCode(FString AuthCode);
    FModioEmailAddress Conv_StringToEmailAddress(FString Email);
    FString Conv_ModIDToString(FModioModID ModId);
    FString Conv_GameIDToString(FModioGameID GameId);
    FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    FString Conv_ApiKeyToString(FModioApiKey ApiKey);
};

struct FModioErrorCode
{
};

class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{

    bool IsError(const FModioErrorCode& Error);
    int32 GetValue(const FModioErrorCode& Error);
    FString GetMessage(const FModioErrorCode& Error);
};

class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{

    bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
};

struct FModioFilterParams
{
};

class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{

    FModioFilterParams WithTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams WithoutTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithoutTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    FModioFilterParams PagedResults(FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    FModioFilterParams NameContainsStrings(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams NameContains(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams MatchingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    FModioFilterParams MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);
    FModioFilterParams MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);
    FModioFilterParams IndexedResults(FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    FModioFilterParams ExcludingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
};

struct FModioImage
{
    FString ImagePath;
};

class UModioImageLibrary : public UBlueprintFunctionLibrary
{

    void LoadAsync(const FModioImage& Image, FLoadAsyncOnImageLoaded OnImageLoaded);
    class UTexture2DDynamic* GetTexture(const FModioImage& Image);
    EModioImageState GetState(const FModioImage& Image);
    FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
    FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
    FVector2D GetAvatarSize(class UTexture* avatar, EModioAvatarSize AvatarSize);
};

struct FModioModCollectionEntry
{
};

struct FModioUser
{
    FModioUserID UserId;
    FString Username;
    FDateTime DateOnline;
    FString ProfileUrl;
};

struct FModioFileMetadata
{
    FModioFileMetadataID MetadataId;
    FModioModID ModId;
    FDateTime DateAdded;
    EModioVirusScanStatus CurrentVirusScanStatus;
    EModioVirusStatus CurrentVirusStatus;
    int64 Filesize;
    FString Filename;
    FString Version;
    FString Changelog;
    FString MetadataBlob;
};

struct FModioMetadata
{
    FString Key;
    FString Value;
};

struct FModioModTag
{
    FString Tag;
};

struct FModioYoutubeURLList
{
};

struct FModioSketchfabURLList
{
};

struct FModioModStats
{
    int64 PopularityRankPosition;
    int64 PopularityRankTotalMods;
    int64 DownloadsTotal;
    int64 SubscribersTotal;
    int64 RatingTotal;
    int64 RatingPositive;
    int64 RatingNegative;
    int64 RatingPercentagePositive;
    float RatingWeightedAggregate;
    FString RatingDisplayText;
};

struct FModioModInfo
{
    FModioModID ModId;
    FString ProfileName;
    FString ProfileSummary;
    FString ProfileDescription;
    FString ProfileDescriptionPlaintext;
    FString ProfileUrl;
    FModioUser ProfileSubmittedBy;
    FDateTime ProfileDateAdded;
    FDateTime ProfileDateUpdated;
    FDateTime ProfileDateLive;
    EModioMaturityFlags ProfileMaturityOption;
    FString MetadataBlob;
    FModioFileMetadata FileInfo;
    TArray<FModioMetadata> MetadataKvp;
    TArray<FModioModTag> Tags;
    int32 NumGalleryImages;
    FModioYoutubeURLList YoutubeURLs;
    FModioSketchfabURLList SketchfabURLs;
    FModioModStats Stats;
};

class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{

    FString GetPath(const FModioModCollectionEntry& Entry);
    EModioModState GetModState(const FModioModCollectionEntry& Entry);
    FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    FModioModID GetID(const FModioModCollectionEntry& Entry);
};

struct FModioPagedResult
{
    int32 PageIndex;
    int32 PageSize;
    int32 PageCount;
    int32 TotalResultCount;
    int32 ResultCount;
};

struct FModioModDependency
{
    FModioModID ModId;
    FString ModName;
};

struct FModioModDependencyList
{
    FModioPagedResult PagedResult;
    TArray<FModioModDependency> InternalList;
};

class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
};

struct FModioModInfoList
{
    FModioPagedResult PagedResult;
    TArray<FModioModInfo> InternalList;
};

class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
};

struct FModioModTagInfo
{
    FString TagGroupName;
    TArray<FString> TagGroupValues;
    bool bAllowMultipleSelection;
};

struct FModioModTagOptions
{
    FModioPagedResult PagedResult;
    TArray<FModioModTagInfo> InternalList;
};

class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{

    TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
};

struct FModioOptionalUser
{
};

struct FModioOptionalTerms
{
};

struct FModioOptionalModTagOptions
{
};

struct FModioOptionalModProgressInfo
{
};

struct FModioOptionalModInfoList
{
};

struct FModioOptionalModInfo
{
};

struct FModioOptionalModDependencyList
{
};

struct FModioOptionalImage
{
};

struct FModioLink
{
    FString Text;
    FString URL;
    bool bRequired;
};

struct FModioTerms
{
    FString AgreeButtonText;
    FString DisagreeButtonText;
    FModioLink WebsiteLink;
    FModioLink TermsLink;
    FModioLink PrivacyLink;
    FModioLink ManageLink;
};

struct FModioModProgressInfo
{
    int64 TotalDownloadSize;
    int64 CurrentlyDownloadedBytes;
    int64 TotalExtractedSizeOnDisk;
    int64 CurrentlyExtractedBytes;
    FModioModID ID;
};

class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{

    bool IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    bool IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    bool IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    bool IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    bool IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    bool IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    bool IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    bool IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    bool GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    bool GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    bool GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    bool GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    bool GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    bool GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    bool GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    bool GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImage& Image);
};

class UModioPopupBase : public UUserWidget
{
};

class UModioPopupContainer : public UUserWidget
{
    TArray<class UModioPopupBase*> PopupStack;
    TArray<class UModioPopupBase*> PopupCache;

    class UModioPopupBase* PushPopup(TSubclassOf<class UModioPopupBase> PopupClass);
    class UModioPopupBase* PopPopup(TSubclassOf<class UModioPopupBase> PopupClass);
};

struct FModioReportParams
{
};

class UModioReportLibrary : public UBlueprintFunctionLibrary
{

    FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
};

class UModioSDKLibrary : public UBlueprintFunctionLibrary
{

    float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    bool IsValidSecurityCodeFormat(FString String);
    bool IsValidEmailAddressFormat(FString String);
    FModioInitializeOptions GetProjectInitializeOptions();
    FModioGameID GetProjectGameId();
    EModioEnvironment GetProjectEnvironment();
    FModioApiKey GetProjectApiKey();
    FText Filesize_ToString(int64 Filesize, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit);
    FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FString Conv_Int64ToString(int64 inInt);
};

class UModioSettings : public UObject
{
    int64 GameId;
    FString ApiKey;
    EModioEnvironment Environment;
    EModioLogLevel LogLevel;
    EModioPortal DefaultPortal;
};

struct FModioValidationError
{
    FString FieldName;
    FString ValidationFailureDescription;
};

class UModioSubsystem : public UEngineSubsystem
{

    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    void RunPendingHandlers();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserSubscriptions();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    TMap<class FModioModID, class FModioModCollectionEntry> QuerySystemInstallations();
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FK2_UnsubscribeFromModAsyncOnUnsubscribeComplete OnUnsubscribeComplete);
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FK2_SubscribeToModAsyncOnSubscribeComplete OnSubscribeComplete);
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FK2_SubmitModRatingAsyncCallback Callback);
    void K2_ShutdownAsync(FK2_ShutdownAsyncOnShutdownComplete OnShutdownComplete);
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FK2_RequestEmailAuthCodeAsyncCallback Callback);
    void K2_ReportContentAsync(FModioReportParams Report, FK2_ReportContentAsyncCallback Callback);
    FModioOptionalUser K2_QueryUserProfile();
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FK2_ListAllModsAsyncCallback Callback);
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FK2_InitializeAsyncOnInitComplete OnInitComplete);
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FK2_GetUserMediaAvatarAsyncCallback Callback);
    void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FK2_GetTermsOfUseAsyncCallback Callback);
    void K2_GetModTagOptionsAsync(FK2_GetModTagOptionsAsyncCallback Callback);
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FK2_GetModMediaLogoAsyncCallback Callback);
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FK2_GetModMediaGalleryImageAsyncCallback Callback);
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FK2_GetModMediaAvatarAsyncCallback Callback);
    void K2_GetModInfoAsync(FModioModID ModId, FK2_GetModInfoAsyncCallback Callback);
    void K2_GetModDependenciesAsync(FModioModID ModId, FK2_GetModDependenciesAsyncCallback Callback);
    void K2_FetchExternalUpdatesAsync(FK2_FetchExternalUpdatesAsyncOnFetchDone OnFetchDone);
    void K2_EnableModManagement(FK2_EnableModManagementCallback Callback);
    void K2_ClearUserDataAsync(FK2_ClearUserDataAsyncCallback Callback);
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FK2_AuthenticateUserExternalAsyncCallback Callback);
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FK2_AuthenticateUserEmailAsyncCallback Callback);
    bool IsModManagementBusy();
    TArray<FModioValidationError> GetLastValidationError();
    void ForceUninstallModAsync(FModioModID ModToRemove, FForceUninstallModAsyncCallback Callback);
    void DisableModManagement();
};

struct FModioModManagementEvent
{
    FModioModID ID;
    EModioModManagementEventType Event;
    FModioErrorCode Status;
};

#endif
