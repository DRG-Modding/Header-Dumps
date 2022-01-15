#ifndef UE4SS_SDK_BuildPatchServices_HPP
#define UE4SS_SDK_BuildPatchServices_HPP

class UBuildPatchManifest : UObject
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
}

struct UFileManifestData
{
    FString Filename;
    FSHAHashData FileHash;
    TArray<FChunkPartData> FileChunkParts;
    TArray<FString> InstallTags;
    bool bIsUnixExecutable;
    FString SymlinkTarget;
    bool bIsReadOnly;
    bool bIsCompressed;
}

struct UChunkPartData
{
    FGuid Guid;
    uint32 Offset;
    uint32 Size;
}

struct USHAHashData
{
    uint8 Hash;
}

struct UChunkInfoData
{
    FGuid Guid;
    uint64 Hash;
    FSHAHashData ShaHash;
    int64 Filesize;
    uint8 GroupNumber;
}

struct UCustomFieldData
{
    FString Key;
    FString Value;
}

#endif
