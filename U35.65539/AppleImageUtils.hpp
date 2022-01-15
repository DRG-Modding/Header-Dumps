#ifndef UE4SS_SDK_AppleImageUtils_HPP
#define UE4SS_SDK_AppleImageUtils_HPP

#include "AppleImageUtils_enums.hpp"

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
{
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure OnFailure;
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsImageConversionResult ConversionResult;

    UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
}

class UAppleImageInterface : UInterface
{
}

struct FAppleImageUtilsImageConversionResult
{
    FString Error;
    TArray<uint8> ImageData;
}

#endif
