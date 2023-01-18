#ifndef UE4SS_SDK_Modio_HPP
#define UE4SS_SDK_Modio_HPP

#include "Modio_enums.hpp"

struct FModioApiKey
{
    FString ApiKey;

};

struct FModioAuthenticationParams
{
    FString AuthToken;
    FString UserEmail;
    bool bUserHasAcceptedTerms;

};

struct FModioCreateModFileParams
{
    FString PathToModRootDirectory;

};

struct FModioCreateModParams
{
    FString PathToLogoFile;
    FString Name;
    FString Summary;

};

struct FModioEditModParams
{
};

struct FModioEmailAddress
{
};

struct FModioEmailAuthCode
{
};

struct FModioErrorCode
{
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

struct FModioFileMetadataID
{
};

struct FModioFilterParams
{
};

struct FModioGameID
{
    int64 GameId;

};

struct FModioImageWrapper
{
    FString ImagePath;

};

struct FModioInitializeOptions
{
    FModioGameID GameId;
    FModioApiKey ApiKey;
    EModioEnvironment GameEnvironment;
    EModioPortal PortalInUse;

};

struct FModioLink
{
    FString Text;
    FString URL;
    bool bRequired;

};

struct FModioMetadata
{
    FString Key;
    FString Value;

};

struct FModioModCollectionEntry
{
};

struct FModioModCreationHandle
{
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

struct FModioModID
{
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
    bool bVisible;
    FString MetadataBlob;
    FModioFileMetadata FileInfo;
    TArray<FModioMetadata> MetadataKvp;
    TArray<FModioModTag> Tags;
    int32 NumGalleryImages;
    FModioYoutubeURLList YoutubeURLs;
    FModioSketchfabURLList SketchfabURLs;
    FModioModStats Stats;

};

struct FModioModInfoList
{
    FModioPagedResult PagedResult;
    TArray<FModioModInfo> InternalList;

};

struct FModioModManagementEvent
{
    FModioModID ID;
    EModioModManagementEventType Event;
    FModioErrorCode Status;

};

struct FModioModProgressInfo
{
    FModioUnsigned64 TotalDownloadSize;
    FModioUnsigned64 CurrentlyDownloadedBytes;
    FModioUnsigned64 TotalExtractedSizeOnDisk;
    FModioUnsigned64 CurrentlyExtractedBytes;
    FModioModID ID;

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

struct FModioModTag
{
    FString Tag;

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

struct FModioOptionalImage
{
};

struct FModioOptionalModDependencyList
{
};

struct FModioOptionalModID
{
};

struct FModioOptionalModInfo
{
};

struct FModioOptionalModInfoList
{
};

struct FModioOptionalModProgressInfo
{
};

struct FModioOptionalModTagOptions
{
};

struct FModioOptionalTerms
{
};

struct FModioOptionalUser
{
};

struct FModioPagedResult
{
    int32 PageIndex;
    int32 PageSize;
    int32 PageCount;
    int32 TotalResultCount;
    int32 ResultCount;

};

struct FModioReportParams
{
};

struct FModioSketchfabURLList
{
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

struct FModioUnsigned64
{
};

struct FModioUser
{
    FModioUserID UserId;
    FString Username;
    FDateTime DateOnline;
    FString ProfileUrl;

};

struct FModioUserID
{
};

struct FModioValidationError
{
    FString FieldName;
    FString ValidationFailureDescription;

};

struct FModioYoutubeURLList
{
};

class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{

    FModioInitializeOptions SetSessionIdentifier(const FModioInitializeOptions& options, FString SessionIdentifier);
    FModioInitializeOptions SetPortal(const FModioInitializeOptions& options, EModioPortal PortalToUse);
    bool NotEqualTo(const FModioModID& A, const FModioModID& B);
    FModioInitializeOptions MakeInitializeOptions(int64 GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    FModioGameID MakeGameId(int64 GameId);
    FModioAuthenticationParams MakeAuthParams(const FString AuthToken, const FString EmailAddress, const bool bHasAcceptedTOS);
    FModioApiKey MakeApiKey(const FString ApiKey);
    int64 GetRawValueFromModID(const FModioModID& In);
    bool EqualTo(const FModioModID& A, const FModioModID& B);
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

class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{

    void SetVersionString(FModioCreateModFileParams& In, FString Version);
    void SetTags(FModioCreateModParams& In, TArray<FString>& Tags);
    void SetModfilePlatforms(FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);
    void SetModFileMetadataBlob(FModioCreateModFileParams& In, FString MetadataBlob);
    void SetMetadataBlob(FModioCreateModParams& In, FString MetadataBlob);
    void SetMarkAsActiveRelease(FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
    void SetInitialVisibility(FModioCreateModParams& In, bool InitialVisibility);
    void SetHomepageURL(FModioCreateModParams& In, FString HomepageURL);
    void SetDescription(FModioCreateModParams& In, FString Description);
    void SetChangelogString(FModioCreateModFileParams& In, FString Changelog);
};

class UModioEditModLibrary : public UBlueprintFunctionLibrary
{

    void SetVisibility(FModioEditModParams& In, bool Visibility);
    void SetSummary(FModioEditModParams& In, FString Summary);
    void SetNamePath(FModioEditModParams& In, FString NamePath);
    void SetName(FModioEditModParams& In, FString Name);
    void SetMetadataBlob(FModioEditModParams& In, FString MetadataBlob);
    void SetMaturityFlags(FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
    void SetHomepageURL(FModioEditModParams& In, FString HomepageURL);
    void SetDescription(FModioEditModParams& In, FString Description);
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

class UModioExampleLibrary : public UBlueprintFunctionLibrary
{

    void ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FListUserSubscriptionAsyncCallback Callback);
    EModioLogoSize GetLogoThumbnailSize();
    EModioLogoSize GetLogoFullSize();
    EModioAvatarSize GetAvatarThumbnailSize();
};

class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{

    FModioFilterParams WithTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams WithoutTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    FModioFilterParams WithoutTag(FModioFilterParams& Filter, FString Tag);
    FModioFilterParams SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    FModioFilterParams PagedResults(FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    FModioFilterParams NameContainsStrings(FModioFilterParams& Filter, const TArray<FString>& SearchStrings);
    FModioFilterParams NameContains(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams MetadataLike(FModioFilterParams& Filter, FString SearchString);
    FModioFilterParams MatchingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    FModioFilterParams MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);
    FModioFilterParams MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);
    FModioFilterParams IndexedResults(FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    FModioFilterParams ExcludingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
};

class UModioImageLibrary : public UBlueprintFunctionLibrary
{

    void LoadAsync(const FModioImageWrapper& Image, FLoadAsyncOnImageLoaded OnImageLoaded);
    class UTexture2DDynamic* GetTexture(const FModioImageWrapper& Image);
    EModioImageState GetState(const FModioImageWrapper& Image);
    FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
    FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
    FVector2D GetAvatarSize(class UTexture* avatar, EModioAvatarSize AvatarSize);
};

class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{

    FString GetPath(const FModioModCollectionEntry& Entry);
    EModioModState GetModState(const FModioModCollectionEntry& Entry);
    FModioModInfo GetModProfile(const FModioModCollectionEntry& Entry);
    FModioModID GetID(const FModioModCollectionEntry& Entry);
};

class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModDependencyList& ModTags);
    TArray<FModioModDependency> GetDependencies(const FModioModDependencyList& ModTags);
};

class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{

    FModioPagedResult GetPagedResult(const FModioModInfoList& ModInfoList);
    TArray<FModioModInfo> GetMods(const FModioModInfoList& ModInfoList);
};

class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{

    TArray<FModioModTagInfo> GetTags(const FModioModTagOptions& ModTags);
    FModioPagedResult GetPagedResult(const FModioModTagOptions& ModTags);
};

class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{

    bool IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    bool IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    bool IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    bool IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    bool IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    bool IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    bool IsSet_ModioOptionalModID(const FModioOptionalModID& OptionalID);
    bool IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    bool IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    bool GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    bool GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    bool GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    bool GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    bool GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    bool GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    bool GetValue_ModioOptionalModID(const FModioOptionalModID& OptionalID, FModioModID& ID);
    bool GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    bool GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImageWrapper& Image);
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
    FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const FString sessionId);
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

class UModioSubsystem : public UEngineSubsystem
{

    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    void RunPendingHandlers();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserSubscriptions();
    TMap<class FModioModID, class FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    TMap<class FModioModID, class FModioModCollectionEntry> QuerySystemInstallations();
    FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);
    void K2_VerifyUserAuthenticationAsync(FK2_VerifyUserAuthenticationAsyncCallback Callback);
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FK2_UnsubscribeFromModAsyncOnUnsubscribeComplete OnUnsubscribeComplete);
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FK2_SubscribeToModAsyncOnSubscribeComplete OnSubscribeComplete);
    void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);
    void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FK2_SubmitNewModAsyncCallback Callback);
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FK2_SubmitModRatingAsyncCallback Callback);
    void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FK2_SubmitModChangesAsyncCallback Callback);
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
    FModioModCreationHandle K2_GetModCreationHandle();
    void K2_ForceUninstallModAsync(FModioModID ModToRemove, FK2_ForceUninstallModAsyncCallback Callback);
    void K2_FetchExternalUpdatesAsync(FK2_FetchExternalUpdatesAsyncOnFetchDone OnFetchDone);
    FModioErrorCode K2_EnableModManagement(FK2_EnableModManagementCallback Callback);
    void K2_ClearUserDataAsync(FK2_ClearUserDataAsyncCallback Callback);
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FK2_AuthenticateUserExternalAsyncCallback Callback);
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FK2_AuthenticateUserEmailAsyncCallback Callback);
    void K2_ArchiveModAsync(FModioModID Mod, FK2_ArchiveModAsyncCallback Callback);
    bool IsModManagementBusy();
    TArray<FModioValidationError> GetLastValidationError();
    void DisableModManagement();
};

class UModioTestSettings : public UObject
{
};

class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{

    FModioUnsigned64 Subtract(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float Percentage_Unsigned64(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool NotEqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    FModioUnsigned64 MakeFromComponents(const int32& High, const int32& Low);
    bool LessThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool GreaterThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    bool EqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float DivideToFloat(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float DivideFloat(const FModioUnsigned64& LHS, const float RHS);
    FModioUnsigned64 Divide(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    float Conv_FModioUnsigned64ToFloat(const FModioUnsigned64& In);
    void BreakToComponents(const FModioUnsigned64& In, int32& High, int32& Low);
    FModioUnsigned64 Add(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
};

#endif
