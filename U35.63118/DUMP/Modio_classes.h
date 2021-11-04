// Class Modio.ModioCommonTypesLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioCommonTypesLibrary : UBlueprintFunctionLibrary {

	FModioInitializeOptions SetPortal(FModioInitializeOptions options, enum class EModioPortal PortalToUse);
	FModioInitializeOptions MakeInitializeOptions(int64_t GameId, FString ApiKey, enum class EModioEnvironment GameEnvironment, enum class EModioPortal PortalInUse);
	FModioGameID MakeGameId(int64_t GameId);
	FModioAuthenticationParams MakeAuthParams(FString AuthToken, FString EmailAddress, bool bHasAcceptedTOS);
	FModioApiKey MakeApiKey(FString ApiKey);
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

// Class Modio.ModioErrorCodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioErrorCodeLibrary : UBlueprintFunctionLibrary {

	bool IsError(FModioErrorCode Error);
	int32_t GetValue(FModioErrorCode Error);
	FString GetMessage(FModioErrorCode Error);
};

// Class Modio.ModioErrorConditionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioErrorConditionLibrary : UBlueprintFunctionLibrary {

	bool ErrorCodeMatches(FModioErrorCode ErrorCode, enum class EModioErrorCondition Condition);
};

// Class Modio.ModioFilterParamsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioFilterParamsLibrary : UBlueprintFunctionLibrary {

	FModioFilterParams WithTags(FModioFilterParams Filter, TArray<FString> NewTags);
	FModioFilterParams WithTag(FModioFilterParams Filter, FString Tag);
	FModioFilterParams WithoutTags(FModioFilterParams Filter, TArray<FString> NewTags);
	FModioFilterParams WithoutTag(FModioFilterParams Filter, FString Tag);
	FModioFilterParams SortBy(FModioFilterParams Filter, enum class EModioSortFieldType ByField, enum class EModioSortDirection ByDirection);
	FModioFilterParams PagedResults(FModioFilterParams Filter, int64_t PageNumber, int64_t PageSize);
	FModioFilterParams NameContainsStrings(FModioFilterParams Filter, FString SearchString);
	FModioFilterParams NameContains(FModioFilterParams Filter, FString SearchString);
	FModioFilterParams MatchingIDs(FModioFilterParams Filter, TArray<FModioModID> IDs);
	FModioFilterParams MarkedLiveBefore(FModioFilterParams Filter, FDateTime LiveBefore);
	FModioFilterParams MarkedLiveAfter(FModioFilterParams Filter, FDateTime LiveAfter);
	FModioFilterParams IndexedResults(FModioFilterParams Filter, int64_t StartIndex, int64_t ResultCount);
	FModioFilterParams ExcludingIDs(FModioFilterParams Filter, TArray<FModioModID> IDs);
};

// Class Modio.ModioImageLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioImageLibrary : UBlueprintFunctionLibrary {

	void LoadAsync(FModioImage Image, FDelegate OnImageLoaded);
	UTexture2DDynamic* GetTexture(FModioImage Image);
	enum class EModioImageState GetState(FModioImage Image);
	FVector2D GetLogoSize(UTexture* Logo, enum class EModioLogoSize LogoSize);
	FVector2D GetGallerySize(UTexture* GalleryImage, enum class EModioGallerySize GallerySize);
	FVector2D GetAvatarSize(UTexture* avatar, enum class EModioAvatarSize AvatarSize);
};

// Class Modio.ModioModCollectionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModCollectionLibrary : UBlueprintFunctionLibrary {

	FString GetPath(FModioModCollectionEntry Entry);
	enum class EModioModState GetModState(FModioModCollectionEntry Entry);
	FModioModInfo GetModProfile(FModioModCollectionEntry Entry);
	FModioModID GetID(FModioModCollectionEntry Entry);
};

// Class Modio.ModioModDependenciesLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModDependenciesLibrary : UBlueprintFunctionLibrary {

	FModioPagedResult GetPagedResult(FModioModDependencyList ModTags);
	TArray<FModioModDependency> GetDependencies(FModioModDependencyList ModTags);
};

// Class Modio.ModioModInfoListLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModInfoListLibrary : UBlueprintFunctionLibrary {

	FModioPagedResult GetPagedResult(FModioModInfoList ModInfoList);
	TArray<FModioModInfo> GetMods(FModioModInfoList ModInfoList);
};

// Class Modio.ModioModTagOptionsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioModTagOptionsLibrary : UBlueprintFunctionLibrary {

	TArray<FModioModTagInfo> GetTags(FModioModTagOptions ModTags);
	FModioPagedResult GetPagedResult(FModioModTagOptions ModTags);
};

// Class Modio.ModioOptionalLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioOptionalLibrary : UBlueprintFunctionLibrary {

	bool IsSet_ModioOptionalUser(FModioOptionalUser OptionalUser);
	bool IsSet_ModioOptionalTerms(FModioOptionalTerms OptionalTerms);
	bool IsSet_ModioOptionalModTagOptions(FModioOptionalModTagOptions OptionalModTagOptions);
	bool IsSet_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo OptionalModProgressInfo);
	bool IsSet_ModioOptionalModInfoList(FModioOptionalModInfoList OptionalModInfoList);
	bool IsSet_ModioOptionalModInfo(FModioOptionalModInfo OptionalModInfo);
	bool IsSet_ModioOptionalModDependencyList(FModioOptionalModDependencyList OptionalDependencyList);
	bool IsSet_ModioOptionalImage(FModioOptionalImage OptionalImage);
	bool GetValue_ModioOptionalUser(FModioOptionalUser OptionalUser, FModioUser User);
	bool GetValue_ModioOptionalTerms(FModioOptionalTerms OptionalTerms, FModioTerms Terms);
	bool GetValue_ModioOptionalModTagOptions(FModioOptionalModTagOptions OptionalModTagOptions, FModioModTagOptions ModTagOptions);
	bool GetValue_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo OptionalModProgressInfo, FModioModProgressInfo ModProgressInfo);
	bool GetValue_ModioOptionalModInfoList(FModioOptionalModInfoList OptionalModInfoList, FModioModInfoList ModInfoList);
	bool GetValue_ModioOptionalModInfo(FModioOptionalModInfo OptionalModInfo, FModioModInfo ModInfo);
	bool GetValue_ModioOptionalModDependencyList(FModioOptionalModDependencyList OptionalDependencyList, FModioModDependencyList DependencyList);
	bool GetValue_ModioOptionalImage(FModioOptionalImage OptionalImage, FModioImage Image);
};

// Class Modio.ModioPopupBase
// Size: 0x230 (Inherited: 0x230)
struct UModioPopupBase : UUserWidget {
};

// Class Modio.ModioPopupContainer
// Size: 0x250 (Inherited: 0x230)
struct UModioPopupContainer : UUserWidget {
	TArray<UModioPopupBase*> PopupStack; // 0x230(0x10)
	TArray<UModioPopupBase*> PopupCache; // 0x240(0x10)

	UModioPopupBase* PushPopup(UModioPopupBase* PopupClass);
	UModioPopupBase* PopPopup(UModioPopupBase* PopupClass);
};

// Class Modio.ModioReportLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioReportLibrary : UBlueprintFunctionLibrary {

	FModioReportParams MakeReportForUser(FModioUserID User, enum class EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
	FModioReportParams MakeReportForMod(FModioModID Mod, enum class EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
	FModioReportParams MakeReportForGame(FModioGameID Game, enum class EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
};

// Class Modio.ModioSDKLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModioSDKLibrary : UBlueprintFunctionLibrary {

	float Pct_Int64Int64(int64_t Dividend, int64_t Divisor);
	bool IsValidSecurityCodeFormat(FString String);
	bool IsValidEmailAddressFormat(FString String);
	FModioInitializeOptions GetProjectInitializeOptions();
	FModioGameID GetProjectGameId();
	enum class EModioEnvironment GetProjectEnvironment();
	FModioApiKey GetProjectApiKey();
	FText Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, enum class EFileSizeUnit Unit);
	FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
	FString Conv_Int64ToString(int64_t inInt);
};

// Class Modio.ModioSettings
// Size: 0x48 (Inherited: 0x28)
struct UModioSettings : UObject {
	int64_t GameId; // 0x28(0x08)
	FString ApiKey; // 0x30(0x10)
	enum class EModioEnvironment Environment; // 0x40(0x01)
	enum class EModioLogLevel LogLevel; // 0x41(0x01)
	enum class EModioPortal DefaultPortal; // 0x42(0x01)
};

// Class Modio.ModioSubsystem
// Size: 0x170 (Inherited: 0x30)
struct UModioSubsystem : UEngineSubsystem {

	void SetLogLevel(enum class EModioLogLevel UnrealLogLevel);
	void RunPendingHandlers();
	TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();
	TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
	TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();
	void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FDelegate OnUnsubscribeComplete);
	void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FDelegate OnSubscribeComplete);
	void K2_SubmitModRatingAsync(FModioModID Mod, enum class EModioRating Rating, FDelegate Callback);
	void K2_ShutdownAsync(FDelegate OnShutdownComplete);
	void K2_RequestEmailAuthCodeAsync(FModioEmailAddress EmailAddress, FDelegate Callback);
	void K2_ReportContentAsync(FModioReportParams Report, FDelegate Callback);
	FModioOptionalUser K2_QueryUserProfile();
	FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
	void K2_ListAllModsAsync(FModioFilterParams Filter, FDelegate Callback);
	void K2_InitializeAsync(FModioInitializeOptions InitializeOptions, FDelegate OnInitComplete);
	void K2_GetUserMediaAvatarAsync(enum class EModioAvatarSize AvatarSize, FDelegate Callback);
	void K2_GetTermsOfUseAsync(enum class EModioAuthenticationProvider Provider, enum class EModioLanguage Locale, FDelegate Callback);
	void K2_GetModTagOptionsAsync(FDelegate Callback);
	void K2_GetModMediaLogoAsync(FModioModID ModId, enum class EModioLogoSize LogoSize, FDelegate Callback);
	void K2_GetModMediaGalleryImageAsync(FModioModID ModId, enum class EModioGallerySize GallerySize, int32_t Index, FDelegate Callback);
	void K2_GetModMediaAvatarAsync(FModioModID ModId, enum class EModioAvatarSize AvatarSize, FDelegate Callback);
	void K2_GetModInfoAsync(FModioModID ModId, FDelegate Callback);
	void K2_GetModDependenciesAsync(FModioModID ModId, FDelegate Callback);
	void K2_FetchExternalUpdatesAsync(FDelegate OnFetchDone);
	void K2_EnableModManagement(FDelegate Callback);
	void K2_ClearUserDataAsync(FDelegate Callback);
	void K2_AuthenticateUserExternalAsync(FModioAuthenticationParams User, enum class EModioAuthenticationProvider Provider, FDelegate Callback);
	void K2_AuthenticateUserEmailAsync(FModioEmailAuthCode AuthenticationCode, FDelegate Callback);
	bool IsModManagementBusy();
	TArray<FModioValidationError> GetLastValidationError();
	void ForceUninstallModAsync(FModioModID ModToRemove, FDelegate Callback);
	void DisableModManagement();
};

