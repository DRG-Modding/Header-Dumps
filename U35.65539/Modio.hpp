#ifndef UE4SS_SDK_Modio_HPP
#define UE4SS_SDK_Modio_HPP

#include "Modio_enums.hpp"

class UModioCommonTypesLibrary : UBlueprintFunctionLibrary
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
}

class UModioErrorCodeLibrary : UBlueprintFunctionLibrary
{

    bool IsError(const FModioErrorCode& Error);
    int32 GetValue(const FModioErrorCode& Error);
    FString GetMessage(const FModioErrorCode& Error);
}

class UModioErrorConditionLibrary : UBlueprintFunctionLibrary
{

    bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
}

class UModioFilterParamsLibrary : UBlueprintFunctionLibrary
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
}

class UModioImageLibrary : UBlueprintFunctionLibrary
{

    void LoadAsync(const FModioImage& Image, OnLoadImageDelegate__DelegateSignature OnImageLoaded);
    UTexture2DDynamic* GetTexture(const FModioImage& Image);
    EModioImageState GetState(const FModioImage& Image);
    FVector2D GetLogoSize(UTexture* Logo, EModioLogoSize LogoSize);
    FVector2D GetGallerySize(UTexture* GalleryImage, EModioGallerySize GallerySize);
    FVector2D GetAvatarSize(UTexture* avatar, EModioAvatarSize AvatarSize);
}

class UModioModCollectionLibrary : UBlueprintFunctionLibrary
{

    FString GetPath(const FModioModCollectionEntry& Entry);
    EModioModState GetModState(const FModioModCollectionEntry& Entry);
    FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    FModioModID GetID(const FModioModCollectionEntry& Entry);
}

class UModioModDependenciesLibrary : UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
}

class UModioModInfoListLibrary : UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
}

class UModioModTagOptionsLibrary : UBlueprintFunctionLibrary
{

    TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
}

class UModioOptionalLibrary : UBlueprintFunctionLibrary
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
}

class UModioPopupBase : UUserWidget
{
}

class UModioPopupContainer : UUserWidget
{
    TArray<UModioPopupBase*> PopupStack;
    TArray<UModioPopupBase*> PopupCache;

    UModioPopupBase* PushPopup(TSubclassOf<UModioPopupBase> PopupClass);
    UModioPopupBase* PopPopup(TSubclassOf<UModioPopupBase> PopupClass);
}

class UModioReportLibrary : UBlueprintFunctionLibrary
{

    FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
}

class UModioSDKLibrary : UBlueprintFunctionLibrary
{

    float Pct_Int64Int64(int64 Dividend, int64 Divisor);
    bool IsValidSecurityCodeFormat(FString String);
    bool IsValidEmailAddressFormat(FString String);
    FModioInitializeOptions GetProjectInitializeOptions();
    FModioGameID GetProjectGameId();
    EModioEnvironment GetProjectEnvironment();
    FModioApiKey GetProjectApiKey();
    FText Filesize_ToString(int64 Filesize, int32 MaxDecimals, uint8 Unit);
    FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FString Conv_Int64ToString(int64 inInt);
}

class UModioSettings : UObject
{
    int64 GameId;
    FString ApiKey;
    EModioEnvironment Environment;
    EModioLogLevel LogLevel;
    EModioPortal DefaultPortal;
}

class UModioSubsystem : UEngineSubsystem
{

    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    void RunPendingHandlers();
    TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, OnErrorOnlyDelegate__DelegateSignature OnUnsubscribeComplete);
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, OnErrorOnlyDelegate__DelegateSignature OnSubscribeComplete);
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, OnErrorOnlyDelegate__DelegateSignature Callback);
    void K2_ShutdownAsync(OnErrorOnlyDelegate__DelegateSignature OnShutdownComplete);
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, OnErrorOnlyDelegate__DelegateSignature Callback);
    void K2_ReportContentAsync(FModioReportParams Report, OnErrorOnlyDelegate__DelegateSignature Callback);
    FModioOptionalUser K2_QueryUserProfile();
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, OnListAllModsDelegate__DelegateSignature Callback);
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, OnErrorOnlyDelegate__DelegateSignature OnInitComplete);
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, OnGetMediaDelegate__DelegateSignature Callback);
    void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, OnGetTermsOfUseDelegate__DelegateSignature Callback);
    void K2_GetModTagOptionsAsync(OnGetModTagOptionsDelegate__DelegateSignature Callback);
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, OnGetMediaDelegate__DelegateSignature Callback);
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, OnGetMediaDelegate__DelegateSignature Callback);
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, OnGetMediaDelegate__DelegateSignature Callback);
    void K2_GetModInfoAsync(FModioModID ModId, OnGetModInfoDelegate__DelegateSignature Callback);
    void K2_GetModDependenciesAsync(FModioModID ModId, OnGetModDependenciesDelegate__DelegateSignature Callback);
    void K2_FetchExternalUpdatesAsync(OnErrorOnlyDelegate__DelegateSignature OnFetchDone);
    void K2_EnableModManagement(OnModManagementDelegate__DelegateSignature Callback);
    void K2_ClearUserDataAsync(OnErrorOnlyDelegate__DelegateSignature Callback);
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, OnErrorOnlyDelegate__DelegateSignature Callback);
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, OnErrorOnlyDelegate__DelegateSignature Callback);
    bool IsModManagementBusy();
    TArray<FModioValidationError> GetLastValidationError();
    void ForceUninstallModAsync(FModioModID ModToRemove, OnErrorOnlyDelegate__DelegateSignature Callback);
    void DisableModManagement();
}

struct FModioYoutubeURLList
{
}

struct FModioSketchfabURLList
{
}

struct FModioModInfoList
{
    FModioPagedResult PagedResult;
    TArray<FModioModInfo> InternalList;
}

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
}

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
}

struct FModioModTag
{
    FString Tag;
}

struct FModioMetadata
{
    FString Key;
    FString Value;
}

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
}

struct FModioModID
{
}

struct FModioFileMetadataID
{
}

struct FModioUser
{
    FModioUserID UserId;
    FString Username;
    FDateTime DateOnline;
    FString ProfileUrl;
}

struct FModioUserID
{
}

struct FModioPagedResult
{
    int32 PageIndex;
    int32 PageSize;
    int32 PageCount;
    int32 TotalResultCount;
    int32 ResultCount;
}

struct FModioModTagOptions
{
    FModioPagedResult PagedResult;
    TArray<FModioModTagInfo> InternalList;
}

struct FModioModTagInfo
{
    FString TagGroupName;
    TArray<FString> TagGroupValues;
    bool bAllowMultipleSelection;
}

struct FModioErrorCode
{
}

struct FModioModManagementEvent
{
    FModioModID ID;
    EModioModManagementEventType Event;
    FModioErrorCode Status;
}

struct FModioOptionalModInfoList
{
}

struct FModioOptionalModInfo
{
}

struct FModioOptionalImage
{
}

struct FModioOptionalModTagOptions
{
}

struct FModioOptionalTerms
{
}

struct FModioOptionalModDependencyList
{
}

struct FModioAuthenticationParams
{
    FString AuthToken;
    FString UserEmail;
    bool bUserHasAcceptedTerms;
}

struct FModioEmailAuthCode
{
}

struct FModioEmailAddress
{
}

struct FModioApiKey
{
}

struct FModioGameID
{
}

struct FModioFilterParams
{
}

struct FModioImage
{
    FString ImagePath;
}

struct FModioInitializeOptions
{
    FModioGameID GameId;
    FModioApiKey ApiKey;
    EModioEnvironment GameEnvironment;
    EModioPortal PortalInUse;
}

struct FModioModCollectionEntry
{
}

struct FModioModDependencyList
{
    FModioPagedResult PagedResult;
    TArray<FModioModDependency> InternalList;
}

struct FModioModDependency
{
    FModioModID ModId;
    FString ModName;
}

struct FModioOptionalModProgressInfo
{
}

struct FModioModProgressInfo
{
    int64 TotalDownloadSize;
    int64 CurrentlyDownloadedBytes;
    int64 TotalExtractedSizeOnDisk;
    int64 CurrentlyExtractedBytes;
    FModioModID ID;
}

struct FModioReportParams
{
}

struct FModioTerms
{
    FString AgreeButtonText;
    FString DisagreeButtonText;
    FModioLink WebsiteLink;
    FModioLink TermsLink;
    FModioLink PrivacyLink;
    FModioLink ManageLink;
}

struct FModioLink
{
    FString Text;
    FString URL;
    bool bRequired;
}

struct FModioOptionalUser
{
}

struct FModioValidationError
{
    FString FieldName;
    FString ValidationFailureDescription;
}

#endif
