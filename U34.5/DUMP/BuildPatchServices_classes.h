// Class BuildPatchServices.BuildPatchManifest
// Size: 0x120 (Inherited: 0x28)
struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28(0x01)
	bool bIsFileData; // 0x29(0x01)
	uint32_t AppID; // 0x2c(0x04)
	FString AppName; // 0x30(0x10)
	FString BuildVersion; // 0x40(0x10)
	FString LaunchExe; // 0x50(0x10)
	FString LaunchCommand; // 0x60(0x10)
	TSet<FString> PrereqIds; // 0x70(0x50)
	FString PrereqName; // 0xc0(0x10)
	FString PrereqPath; // 0xd0(0x10)
	FString PrereqArgs; // 0xe0(0x10)
	TArray<FFileManifestData> FileManifestList; // 0xf0(0x10)
	TArray<FChunkInfoData> ChunkList; // 0x100(0x10)
	TArray<FCustomFieldData> CustomFields; // 0x110(0x10)
};

