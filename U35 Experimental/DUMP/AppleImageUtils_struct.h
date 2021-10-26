// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8 {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8 {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x00)
struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x00(0x10)
	TArray<char> ImageData; // 0x10(0x10)
};

