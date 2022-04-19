#ifndef UE4SS_SDK_ImageWriteQueue_HPP
#define UE4SS_SDK_ImageWriteQueue_HPP

#include "ImageWriteQueue_enums.hpp"

struct FImageWriteOptions
{
    EDesiredImageFormat Format;
    FImageWriteOptionsOnComplete OnComplete;
    void OnImageWriteComplete(bool bSuccess);
    int32 CompressionQuality;
    bool bOverwriteFile;
    bool bAsync;

};

class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void ExportToDisk(class UTexture* Texture, FString Filename, const FImageWriteOptions& options);
};

#endif
