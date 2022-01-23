#ifndef UE4SS_SDK_AppleImageUtils_HPP
#define UE4SS_SDK_AppleImageUtils_HPP

#include "AppleImageUtils_enums.hpp"

struct FAppleImageUtilsImageConversionResult
{
    FString Error;
    TArray<uint8> ImageData;
};

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure OnFailure;
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsImageConversionResult ConversionResult;

    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
};

class IAppleImageInterface : public IInterface
{
};

#endif
