// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x88 (Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60(0x20)

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);
	UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate);
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x28 (Inherited: 0x28)
struct UAppleImageInterface : UInterface {
};

