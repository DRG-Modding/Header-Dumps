#ifndef UE4SS_SDK_ImageWriteQueue_HPP
#define UE4SS_SDK_ImageWriteQueue_HPP

#include "ImageWriteQueue_enums.hpp"

class UImageWriteBlueprintLibrary : UBlueprintFunctionLibrary
{

    void ExportToDisk(UTexture* Texture, FString Filename, const FImageWriteOptions& options);
}

struct UImageWriteOptions
{
    EDesiredImageFormat Format;
    FImageWriteOptionsOnComplete OnComplete;
    void OnImageWriteComplete(bool bSuccess);
    int32 CompressionQuality;
    bool bOverwriteFile;
    bool bAsync;
}

#endif
