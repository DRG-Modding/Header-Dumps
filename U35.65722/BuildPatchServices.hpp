#ifndef UE4SS_SDK_BuildPatchServices_HPP
#define UE4SS_SDK_BuildPatchServices_HPP

struct FSHAHashData
{
    uint8 Hash;
};

struct FChunkPartData
{
    FGuid Guid;
    uint32 Offset;
    uint32 Size;
};

struct FFileManifestData
{
    FString Filename;
    FSHAHashData FileHash;
    TArray<FChunkPartData> FileChunkParts;
    TArray<FString> InstallTags;
    bool bIsUnixExecutable;
    FString SymlinkTarget;
    bool bIsReadOnly;
    bool bIsCompressed;
};

struct FChunkInfoData
{
    FGuid Guid;
    uint64 Hash;
    FSHAHashData ShaHash;
    int64 Filesize;
    uint8 GroupNumber;
};

struct FCustomFieldData
{
    FString Key;
    FString Value;
};

class UBuildPatchManifest : public UObject
{
    uint8 ManifestFileVersion;
    bool bIsFileData;
    uint32 AppID;
    FString AppName;
    FString BuildVersion;
    FString LaunchExe;
    FString LaunchCommand;
    TSet<FString> PrereqIds;
    FString PrereqName;
    FString PrereqPath;
    FString PrereqArgs;
    TArray<FFileManifestData> FileManifestList;
    TArray<FChunkInfoData> ChunkList;
    TArray<FCustomFieldData> CustomFields;
};

#endif
