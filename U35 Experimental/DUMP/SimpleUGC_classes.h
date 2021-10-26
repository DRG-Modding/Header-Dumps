// Class SimpleUGC.MakeReplaceableActorComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UMakeReplaceableActorComponent : UActorComponent {
	AActor* CompatibleReplacement; // 0xb0(0x08)
};

// Class SimpleUGC.ReplacementActorComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UReplacementActorComponent : UActorComponent {
	TArray<AActor*> ActorClassesToReplace; // 0xb0(0x10)
};

// Class SimpleUGC.UGCBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUGCBlueprintLibrary : UBlueprintFunctionLibrary {

	UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
};

// Class SimpleUGC.ModioModInfoWrapper
// Size: 0x90 (Inherited: 0x28)
struct UModioModInfoWrapper : UObject {
	FString ModId; // 0x28(0x10)
	FString ModName; // 0x38(0x10)
	FString ModURL; // 0x48(0x10)
	FString ModAuthor; // 0x58(0x10)
	FString ModVersion; // 0x68(0x10)
	FString ModDescription; // 0x78(0x10)
	enum class EUGCApprovalStatus Status; // 0x88(0x01)

	bool IsModIdInvalid();
};

// Class SimpleUGC.ModioTermsWrapper
// Size: 0x98 (Inherited: 0x28)
struct UModioTermsWrapper : UObject {
	FString AgreeButtonText; // 0x28(0x10)
	FString DisagreeButtonText; // 0x38(0x10)
	FString TermsLink; // 0x48(0x10)
	FString TermsText; // 0x58(0x10)
	FString PrivacyLink; // 0x68(0x10)
	FString PrivacyText; // 0x78(0x10)
	FString TermsOfUseText; // 0x88(0x10)

	bool isEmpty();
};

// Class SimpleUGC.UGCLatentActionManager
// Size: 0x128 (Inherited: 0x28)
struct UUGCLatentActionManager : UObject {
};

// Class SimpleUGC.UGCPackage
// Size: 0x100 (Inherited: 0x28)
struct UUGCPackage : UObject {
	FString Name; // 0x30(0x10)
	FString Version; // 0x40(0x10)
	FString ModURL; // 0x50(0x10)
	FString Categories; // 0x60(0x10)
	enum class EUGCApprovalStatus Status; // 0x70(0x01)
	FString ModPath; // 0x78(0x10)
	FString PakFileLocation; // 0x88(0x10)
	TArray<FString> PakFileAssets; // 0x98(0x10)
	FString Author; // 0xa8(0x10)
	FString AuthorURL; // 0xb8(0x10)
	FString Description; // 0xc8(0x10)
	bool IsMounted; // 0xdc(0x01)
	bool MountingToBeApplied; // 0xdd(0x01)
	bool DeprecatedLocation; // 0xde(0x01)
	bool ShowStatusForAudioCosmetic; // 0xe0(0x01)
	TArray<int64_t> Dependencies; // 0xe8(0x10)
	bool DependencyRemoved; // 0xf8(0x01)
	bool PackagedForLatestVersion; // 0xf9(0x01)
	bool OverridePackedForLatestVersion; // 0xfa(0x01)

	FString GetIdAsString();
	int64_t GetIdAsInt();
};

// Class SimpleUGC.UGCRegistry
// Size: 0x108 (Inherited: 0x28)
struct UUGCRegistry : UObject {
	FMulticastInlineDelegate OnPackageMounted; // 0x28(0x10)
	TArray<UUGCPackage*> UGCPackages; // 0x38(0x10)
	TMap<AActor*, AActor*> RegisteredOverrides; // 0x48(0x50)
	bool PackageChange; // 0x98(0x01)
	TArray<UUGCPackage*> UGCPackagesInstalledDuringJoin; // 0xd0(0x10)
	TArray<UUGCPackage*> UGCPackagesUnmountedDuringJoin; // 0xe0(0x10)

	void UnmountUGCPackages(TArray<FString> ExcludingModIds);
	bool UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings);
	void UnmountSandboxUGCPackages();
	void UnmountAllNonVerifiedUGCPackages();
	void UGCPackageMounted__DelegateSignature(bool Sandbox);
	UUGCPackage* TryGetPackageFromId(FString ModId);
	void ResetUGCPackagesManipulatedDuringJoin();
	void RegisterOverrideForClass(AActor* ClassToOverride, AActor* OverrideClass);
	void RegisterAssetFromPackage(UUGCPackage* Package);
	int32_t NumberOfModsInstalled(enum class EUGCApprovalStatus ApprovalStatus);
	bool MountUGCPackage(UUGCPackage* Package, bool FromJoining);
	bool IsModToBeEnabled(int64_t ModId);
	bool IsModInstalledImprecise(FString ModName, bool IncludeDeprecatedLocation);
	bool IsModInstalledByIdOrName(FString ModIdOrName, bool IncludeDeprecatedLocation);
	bool IsModInstalled(FString ModId);
	bool IsModEnabled(FString ModId);
	TArray<UUGCPackage*> GetPackagesWhichDependsOnPackage(UUGCPackage* Package);
	TArray<UUGCPackage*> GetPackagesSorted(enum class EPackageSortField ByField, bool Ascending);
	AActor* GetOverrideForActorClass(AActor* ActorClass);
	bool GetMapsInPackage(UUGCPackage* Package, TArray<FName> Maps);
	bool GetAllClassesInPackage(UUGCPackage* Package, TArray<UObject*> Classes);
	bool GetActorClassesWithReplacementActorComponentsInPackage(UUGCPackage* Package, TArray<AActor*> ActorClasses);
	void ClearOverrideForClass(AActor* ActorClass);
	bool AreModsInstalled(enum class EUGCApprovalStatus ApprovalStatus);
	bool AreDeprecatedModsInstalled();
	bool ApplyOverridesForActorClass(AActor* ActorClass);
	bool ApplyAllOverridesInPackage(UUGCPackage* Package);
};

// Class SimpleUGC.UGCSubsystem
// Size: 0x260 (Inherited: 0x30)
struct UUGCSubsystem : UEngineSubsystem {
	bool forceNoMods; // 0x30(0x01)
	UUGCRegistry* UGCRegistry; // 0x38(0x08)
	bool ModioTermsAndConditionsAccepted; // 0x40(0x01)
	FMulticastInlineDelegate OnModioUserAuthenticated; // 0x48(0x10)
	FMulticastInlineDelegate OnErrorInstalling; // 0x58(0x10)
	TMap<FString, enum class EUGCPackageError> ModsFailedInstall; // 0x68(0x50)
	FMulticastInlineDelegate OnModDownloadExtractProgress; // 0xb8(0x10)
	FMulticastInlineDelegate OnModDownloadExtractProgressFinished; // 0xc8(0x10)
	FMulticastInlineDelegate OnModUninstallProgressFinished; // 0xd8(0x10)
	FMulticastInlineDelegate OnModManagementStateChanged; // 0xe8(0x10)
	bool IsModioModManagementEnabled; // 0xf8(0x01)
	FMulticastInlineDelegate OnLocalUserModsInstalled; // 0x100(0x10)
	bool IsLocalUserModsInstalled; // 0x110(0x01)
	TArray<FString> CrashingDisabledMods; // 0x118(0x10)
	UUGCLatentActionManager* UGCLatentActionManager; // 0x128(0x08)
	TArray<UUGCPackage*> ModsPendingUninstall; // 0x1a0(0x10)
	TMap<int64_t, UTexture2DDynamic*> CachedThumbnails; // 0x1c8(0x50)
	TArray<enum class EModioRequestType> ModioRequests; // 0x218(0x10)
	TArray<int64_t> ModioSubscribeRequestsIds; // 0x228(0x10)
	TArray<int64_t> ModioSubscribeDependecyRequestsIds; // 0x238(0x10)
	TArray<int64_t> ModioAddDependecyRequestsIds; // 0x248(0x10)

	void UGModProgressDone__DelegateSignature(FString ModName, FString ModId);
	void UGInstallError__DelegateSignature(FString ModName, enum class EUGCPackageError ErrorType);
	void UGCModProgress__DelegateSignature(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void UGCModManagementStateChanged__DelegateSignature(bool Enabled);
	void UGCLocalUserModsInstalled__DelegateSignature();
	void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated);
	void SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods);
	void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);
	void SetCheckGameVersion(bool ShouldCheck);
	void RemoveRequestOfType(enum class EModioRequestType requestType);
	void MarkRecentlyInstalledModsSuccesful();
	void K2_RequestTermsOfUse(UObject* WorldContext, FLatentActionInfo LatentInfo, UModioTermsWrapper* outTerms);
	bool K2_RequestSubscribe(FString ModId);
	void K2_RequestModThumbnailById(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, UTexture2DDynamic* outThumbnail);
	void K2_RequestModThumbnail(UObject* WorldContext, FLatentActionInfo LatentInfo, UUGCPackage* Package, UTexture2DDynamic* outThumbnail);
	void K2_RequestModMetaData(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModioStringID, UModioModInfoWrapper* outModInfo);
	void K2_RequestModDependencyList(UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, FString outParentId, TArray<FString> outModIds);
	void K2_RequestHasHostHiddenMods(UObject* WorldContext, FLatentActionInfo LatentInfo, TArray<FString> sHostModIds, TArray<FString> sClientModIds, bool outHidden);
	void K2_RequestFetchModUpdates();
	void K2_RequestAuthentication();
	bool IsModPendingUninstall(UUGCPackage* InMod);
	bool HasOutstadingRequestOfType(enum class EModioRequestType requestType);
	TArray<FString> GetNamesOfModsPendingUninstall();
	TArray<FString> GetNamesOfModsPendingInstall();
	bool GetCheckGameVersion();
	void EnableModioModManagement();
	void DisableModioModManagement();
	void ApplyPendingMods(bool FromJoining);
};

