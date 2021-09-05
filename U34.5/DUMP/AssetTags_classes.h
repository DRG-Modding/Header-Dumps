// Class AssetTags.AssetTagsSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAssetTagsSubsystem : UEngineSubsystem {

	TArray<FName> GetCollectionsContainingAssetPtr(UObject* AssetPtr);
	TArray<FName> GetCollectionsContainingAssetData(FAssetData AssetData);
	TArray<FName> GetCollectionsContainingAsset(FName AssetPathName);
	TArray<FName> GetCollections();
	TArray<FAssetData> GetAssetsInCollection(FName Name);
	bool CollectionExists(FName Name);
};

