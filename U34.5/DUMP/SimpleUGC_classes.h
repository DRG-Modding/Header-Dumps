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

// Class SimpleUGC.UGCPackage
// Size: 0xe0 (Inherited: 0x28)
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
};

// Class SimpleUGC.UGCRegistry
// Size: 0xd8 (Inherited: 0x28)
struct UUGCRegistry : UObject {
	FMulticastInlineDelegate OnPackageMounted; // 0x28(0x10)
	TArray<UUGCPackage*> UGCPackages; // 0x38(0x10)
	TMap<AActor*, AActor*> RegisteredOverrides; // 0x48(0x50)
	bool PackageChange; // 0x98(0x01)

	void UnmountUGCPackages(TArray<FString> ExcludingModIds);
	bool UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings);
	void UGCPackageMounted__DelegateSignature(bool Sandbox);
	UUGCPackage* TryGetPackageFromId(FString ModId);
	void SpawnBlueprints(AActor* Owner, enum class EUGCBlueprintSpawning Spawning);
	void RegisterOverrideForClass(AActor* ClassToOverride, AActor* OverrideClass);
	void RegisterAssetFromPackage(UUGCPackage* Package);
	bool MountUGCPackage(UUGCPackage* Package);
	bool IsModInstalledImprecise(FString ModName, bool IncludeDeprecatedLocation);
	bool IsModInstalled(FString ModId);
	AActor* GetOverrideForActorClass(AActor* ActorClass);
	bool GetMapsInPackage(UUGCPackage* Package, TArray<FName> Maps);
	bool GetAllClassesInPackage(UUGCPackage* Package, TArray<UObject*> Classes);
	bool GetActorClassesWithReplacementActorComponentsInPackage(UUGCPackage* Package, TArray<AActor*> ActorClasses);
	void ClearOverrideForClass(AActor* ActorClass);
	bool AreModsInstalled(enum class EUGCApprovalStatus ApprovalStatus);
	bool ApplyOverridesForActorClass(AActor* ActorClass);
	bool ApplyAllOverridesInPackage(UUGCPackage* Package);
};

// Class SimpleUGC.UGCSubsystem
// Size: 0x160 (Inherited: 0x30)
struct UUGCSubsystem : UEngineSubsystem {
	UUGCRegistry* UGCRegistry; // 0x30(0x08)
	bool ModioTermsAndConditionsAccepted; // 0x38(0x01)
	FMulticastInlineDelegate OnErrorInstalling; // 0x40(0x10)
	TMap<FString, enum class EUGCPackageError> ModsFailedInstall; // 0x50(0x50)
	FMulticastInlineDelegate OnModDownloadExtractProgress; // 0xa0(0x10)
	FMulticastInlineDelegate OnModDownloadExtractProgressFinished; // 0xb0(0x10)
	FMulticastInlineDelegate OnModManagementStateChanged; // 0xc0(0x10)
	bool IsModioModManagementEnabled; // 0xd0(0x01)
	FMulticastInlineDelegate OnLocalUserModsInstalled; // 0xd8(0x10)
	bool IsLocalUserModsInstalled; // 0xe8(0x01)
	FMulticastInlineDelegate OnModioUserAuthenticated; // 0xf0(0x10)

	void UGModProgressDone__DelegateSignature(FString ModName, FString ModId);
	void UGInstallError__DelegateSignature(FString ModName, enum class EUGCPackageError ErrorType);
	void UGCOnGetModioTermsOfUseDelegate__DelegateSignature(FModioTermsWrapper Terms);
	void UGCModProgress__DelegateSignature(FString Name, TArray<FString> ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total);
	void UGCModManagementStateChanged__DelegateSignature(bool Enabled);
	void UGCModioModThumbnail__DelegateSignature(UTexture2DDynamic* ModioModThumbnail);
	void UGCModioModHidden__DelegateSignature(bool Hidden);
	void UGCModioModData__DelegateSignature(FString ModioModName, FString ModioModID, FString ModioModURL, enum class EUGCApprovalStatus Status);
	void UGCLocalUserModsInstalled__DelegateSignature();
	void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated);
	bool TrySubscribeToModioMod(FString modioStringId);
	bool TryGetModThumbnailFromPackage(UUGCPackage* Package, FDelegate OnModioModThumbnailFetched);
	bool TryGetModDataFromModioId(FString modioStringId, FDelegate OnModioModDataFetched);
	void TryGetHostHasHiddenModsInstalled(TArray<FString> sHostModIds, TArray<FString> sClientModIds, FDelegate OnModioModHiddenFetched);
	void JoiningSessionSubscriptionPending(TArray<FString> pending);
	bool IsModPendingUninstall(UUGCPackage* InMod);
	TArray<FString> GetNamesOfModsPendingUninstall();
	TArray<FString> GetNamesOfModsPendingInstall();
	void GetModioTermsOfUseAsync(FDelegate TermsOfUseCallback);
	void EnableModioModManagement();
	void DisableModioModManagement();
	void AuthenticateModioUserWithSteam(bool RecordTermsAgreed, bool EnableModManagement);
	void ApplyPendingMods();
};

