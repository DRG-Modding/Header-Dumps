// ScriptStruct GoogleAnalytics.CustomMetric
// Size: 0x08 (Inherited: 0x00)
struct FCustomMetric {
	int32_t Index; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct GoogleAnalytics.CustomDimension
// Size: 0x18 (Inherited: 0x00)
struct FCustomDimension {
	int32_t Index; // 0x00(0x04)
	FString Value; // 0x08(0x10)
};

