// ScriptStruct AssetRegistry.ARFilter
// Size: 0xe8 (Inherited: 0x00)
struct FARFilter {
	TArray<FName> PackageNames; // 0x00(0x10)
	TArray<FName> PackagePaths; // 0x10(0x10)
	TArray<FName> ObjectPaths; // 0x20(0x10)
	TArray<FName> ClassNames; // 0x30(0x10)
	TSet<FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xe0(0x01)
	bool bRecursiveClasses; // 0xe1(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0xe2(0x01)
};

// ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x10 (Inherited: 0x00)
struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x00(0x10)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x28 (Inherited: 0x00)
struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x00(0x10)
	FName BundleName; // 0x10(0x08)
	TArray<FSoftObjectPath> BundleAssets; // 0x18(0x10)
};

// ScriptStruct AssetRegistry.AssetData
// Size: 0x50 (Inherited: 0x00)
struct FAssetData {
	FName ObjectPath; // 0x00(0x08)
	FName PackageName; // 0x08(0x08)
	FName PackagePath; // 0x10(0x08)
	FName AssetName; // 0x18(0x08)
	FName AssetClass; // 0x20(0x08)
};

// ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 (Inherited: 0x00)
struct FTagAndValue {
	FName Tag; // 0x00(0x08)
	FString Value; // 0x08(0x10)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x05 (Inherited: 0x00)
struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x00(0x01)
	bool bIncludeHardPackageReferences; // 0x01(0x01)
	bool bIncludeSearchableNames; // 0x02(0x01)
	bool bIncludeSoftManagementReferences; // 0x03(0x01)
	bool bIncludeHardManagementReferences; // 0x04(0x01)
};

