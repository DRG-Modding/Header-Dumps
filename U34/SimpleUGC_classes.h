// Class SimpleUGC.MakeReplaceableActorComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UMakeReplaceableActorComponent : UActorComponent {
	struct AActor* CompatibleReplacement; // 0xb0(0x08)
};

// Class SimpleUGC.ReplacementActorComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UReplacementActorComponent : UActorComponent {
	struct TArray<struct AActor*> ActorClassesToReplace; // 0xb0(0x10)
};

// Class SimpleUGC.UGCBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UUGCBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UUGCRegistry* GetUGCRegistry(struct UObject* WorldContextObject); // Function SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry
};

// Class SimpleUGC.UGCPackage
// Size: 0xa8 (Inherited: 0x28)
struct UUGCPackage : UObject {
	struct FString PackageName; // 0x28(0x10)
	struct FString PackageVersion; // 0x38(0x10)
	enum class EUGCCategory Category; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString PakFilePath; // 0x50(0x10)
	struct FString PackagePath; // 0x60(0x10)
	struct FString Author; // 0x70(0x10)
	struct FString AuthorURL; // 0x80(0x10)
	struct FString Description; // 0x90(0x10)
	char UnknownData_A0[0x4]; // 0xa0(0x04)
	bool IsMounted; // 0xa4(0x01)
	bool MountingToBeApplied; // 0xa5(0x01)
	char UnknownData_A6[0x2]; // 0xa6(0x02)
};

// Class SimpleUGC.UGCRegistry
// Size: 0xa0 (Inherited: 0x28)
struct UUGCRegistry : UObject {
	struct TArray<struct UUGCPackage*> UGCPackages; // 0x28(0x10)
	struct TMap<struct AActor*, struct AActor*> RegisteredOverrides; // 0x38(0x50)
	char UnknownData_88[0x18]; // 0x88(0x18)

	void UnmountUGCPackagesWithWrongMetadata(); // Function SimpleUGC.UGCRegistry.UnmountUGCPackagesWithWrongMetadata
	bool UnmountUGCPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.UnmountUGCPackage
	bool UGCPackagesInstalledInDeprecatedLocation(struct TArray<struct FString> OutNameOfPackages); // Function SimpleUGC.UGCRegistry.UGCPackagesInstalledInDeprecatedLocation
	void RegisterOverrideForClass(struct AActor* ClassToOverride, struct AActor* OverrideClass); // Function SimpleUGC.UGCRegistry.RegisterOverrideForClass
	struct FMods PackRequiredByAllModsInStructForSession(); // Function SimpleUGC.UGCRegistry.PackRequiredByAllModsInStructForSession
	bool MountUGCPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.MountUGCPackage
	bool IsModInstalledImprecise(struct FString ModName, bool IncludeDeprecatedLocation); // Function SimpleUGC.UGCRegistry.IsModInstalledImprecise
	struct AActor* GetOverrideForActorClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.GetOverrideForActorClass
	bool GetMapsInPackage(struct UUGCPackage* Package, struct TArray<struct FName> Maps); // Function SimpleUGC.UGCRegistry.GetMapsInPackage
	bool GetAllClassesInPackage(struct UUGCPackage* Package, struct TArray<struct UObject*> Classes); // Function SimpleUGC.UGCRegistry.GetAllClassesInPackage
	bool GetActorClassesWithReplacementActorComponentsInPackage(struct UUGCPackage* Package, struct TArray<struct AActor*> ActorClasses); // Function SimpleUGC.UGCRegistry.GetActorClassesWithReplacementActorComponentsInPackage
	bool FindUGCPackages(); // Function SimpleUGC.UGCRegistry.FindUGCPackages
	void ClearOverrideForClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.ClearOverrideForClass
	bool AreAnyModsPresent(); // Function SimpleUGC.UGCRegistry.AreAnyModsPresent
	bool AreAnyModsInstalled(bool IncludeDeprecatedLocation, bool ExcludeCosmetic); // Function SimpleUGC.UGCRegistry.AreAnyModsInstalled
	bool ApplyOverridesForActorClass(struct AActor* ActorClass); // Function SimpleUGC.UGCRegistry.ApplyOverridesForActorClass
	bool ApplyAllOverridesInPackage(struct UUGCPackage* Package); // Function SimpleUGC.UGCRegistry.ApplyAllOverridesInPackage
};

// Class SimpleUGC.UGCSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UUGCSubsystem : UGameInstanceSubsystem {
	struct UUGCRegistry* UGCRegistry; // 0x30(0x08)

	void SaveConfig(); // Function SimpleUGC.UGCSubsystem.SaveConfig
};

