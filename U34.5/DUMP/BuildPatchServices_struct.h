// ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68 (Inherited: 0x00)
struct FFileManifestData {
	FString Filename; // 0x00(0x10)
	FSHAHashData FileHash; // 0x10(0x14)
	TArray<FChunkPartData> FileChunkParts; // 0x28(0x10)
	TArray<FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18 (Inherited: 0x00)
struct FChunkPartData {
	FGuid Guid; // 0x00(0x10)
	uint32_t Offset; // 0x10(0x04)
	uint32_t Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14 (Inherited: 0x00)
struct FSHAHashData {
	char Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40 (Inherited: 0x00)
struct FChunkInfoData {
	FGuid Guid; // 0x00(0x10)
	uint64_t Hash; // 0x10(0x08)
	FSHAHashData ShaHash; // 0x18(0x14)
	int64_t Filesize; // 0x30(0x08)
	char GroupNumber; // 0x38(0x01)
};

// ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20 (Inherited: 0x00)
struct FCustomFieldData {
	FString Key; // 0x00(0x10)
	FString Value; // 0x10(0x10)
};

