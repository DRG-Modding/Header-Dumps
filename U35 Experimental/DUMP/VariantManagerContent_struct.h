// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129
};

// ScriptStruct VariantManagerContent.FunctionCaller
// Size: 0x08 (Inherited: 0x00)
struct FFunctionCaller {
	FName FunctionName; // 0x00(0x08)
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
// Size: 0x28 (Inherited: 0x00)
struct FCapturedPropSegment {
	FString PropertyName; // 0x00(0x10)
	int32_t PropertyIndex; // 0x10(0x04)
	FString ComponentName; // 0x18(0x10)
};

