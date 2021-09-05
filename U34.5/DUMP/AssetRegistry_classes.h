// Class AssetRegistry.AssetRegistryImpl
// Size: 0x778 (Inherited: 0x28)
struct UAssetRegistryImpl : UObject {
};

// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistryHelpers : UObject {

	FSoftObjectPath ToSoftObjectPath(FAssetData InAssetData);
	FARFilter SetFilterTagsAndValues(FARFilter InFilter, TArray<FTagAndValue> InTagsAndValues);
	bool IsValid(FAssetData InAssetData);
	bool IsUAsset(FAssetData InAssetData);
	bool IsRedirector(FAssetData InAssetData);
	bool IsAssetLoaded(FAssetData InAssetData);
	bool GetTagValue(FAssetData InAssetData, FName InTagName, FString OutTagValue);
	FString GetFullName(FAssetData InAssetData);
	FString GetExportTextName(FAssetData InAssetData);
	UObject* GetClass(FAssetData InAssetData);
	TScriptInterface<IAssetRegistry> GetAssetRegistry();
	UObject* GetAsset(FAssetData InAssetData);
	FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass);
};

// Class AssetRegistry.AssetRegistry
// Size: 0x28 (Inherited: 0x28)
struct UAssetRegistry : UInterface {

	void UseFilterToExcludeAssets(TArray<FAssetData> AssetDataList, FARFilter Filter);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<FString> InPaths, bool bForceRescan);
	void ScanModifiedAssetFiles(TArray<FString> InFilePaths);
	void ScanFilesSynchronous(TArray<FString> InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(TArray<FAssetData> AssetDataList, FARFilter Filter);
	void PrioritizeSearchPath(FString PathToPrioritize);
	bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions ReferenceOptions, TArray<FName> OutReferencers);
	bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions DependencyOptions, TArray<FName> OutDependencies);
	bool IsLoadingAssets();
	bool HasAssets(FName PackagePath, bool bRecursive);
	void GetSubPaths(FString InBasePath, TArray<FString> OutPathList, bool bInRecurse);
	bool GetAssetsByPath(FName PackagePath, TArray<FAssetData> OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByClass(FName ClassName, TArray<FAssetData> OutAssetData, bool bSearchSubClasses);
	bool GetAssets(FARFilter Filter, TArray<FAssetData> OutAssetData);
	FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<FString> OutPathList);
	bool GetAllAssets(TArray<FAssetData> OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

