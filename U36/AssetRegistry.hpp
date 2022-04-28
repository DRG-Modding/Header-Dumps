#ifndef UE4SS_SDK_AssetRegistry_HPP
#define UE4SS_SDK_AssetRegistry_HPP

class UAssetRegistryImpl : public UObject
{
};

struct FTagAndValue
{
    FName Tag;
    FString Value;

};

class UAssetRegistryHelpers : public UObject
{

    FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);
    FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);
    bool IsValid(const FAssetData& InAssetData);
    bool IsUAsset(const FAssetData& InAssetData);
    bool IsRedirector(const FAssetData& InAssetData);
    bool IsAssetLoaded(const FAssetData& InAssetData);
    bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);
    FString GetFullName(const FAssetData& InAssetData);
    FString GetExportTextName(const FAssetData& InAssetData);
    UClass* GetClass(const FAssetData& InAssetData);
    TScriptInterface<class IAssetRegistry> GetAssetRegistry();
    class UObject* GetAsset(const FAssetData& InAssetData);
    FAssetData CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass);
};

struct FAssetRegistryDependencyOptions
{
    bool bIncludeSoftPackageReferences;
    bool bIncludeHardPackageReferences;
    bool bIncludeSearchableNames;
    bool bIncludeSoftManagementReferences;
    bool bIncludeHardManagementReferences;

};

class IAssetRegistry : public IInterface
{

    void WaitForCompletion();
    void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void SearchAllAssets(bool bSynchronousSearch);
    void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan);
    void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths);
    void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan);
    void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void PrioritizeSearchPath(FString PathToPrioritize);
    bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers);
    bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies);
    bool IsLoadingAssets();
    bool HasAssets(const FName PackagePath, const bool bRecursive);
    void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);
    bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);
    bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData);
    FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
    void GetAllCachedPaths(TArray<FString>& OutPathList);
    bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

#endif
