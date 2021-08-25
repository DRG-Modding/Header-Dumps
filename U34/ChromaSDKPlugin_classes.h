// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation1DObject : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float OverrideFrameTime; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FRuntimeFloatCurve Curve; // 0x38(0x88)
	enum class EChromaSDKDevice1DEnum Device; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct FChromaSDKColorFrame1D> Frames; // 0xc8(0x10)
	char UnknownData_D8[0x30]; // 0xd8(0x30)

	void Unload(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
	void Stop(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
	void PlayWithOnComplete(struct FDelegate OnComplete); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
	void Play(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
	void Load(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
	bool IsPlaying(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
	bool IsLoaded(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
	struct TArray<struct FChromaSDKColorFrame1D> GetFrames(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation2DObject : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float OverrideFrameTime; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FRuntimeFloatCurve Curve; // 0x38(0x88)
	enum class EChromaSDKDevice2DEnum Device; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct TArray<struct FChromaSDKColorFrame2D> Frames; // 0xc8(0x10)
	char UnknownData_D8[0x30]; // 0xd8(0x30)

	void Unload(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
	void Stop(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
	void PlayWithOnComplete(struct FDelegate OnComplete); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
	void Play(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
	void Load(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
	bool IsPlaying(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
	bool IsLoaded(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
	struct TArray<struct FChromaSDKColorFrame2D> GetFrames(); // Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChromaSDKPluginBPLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FChromaSDKColors> SetMouseLedColor(enum class EChromaSDKMouseLed led, struct FLinearColor Color, struct TArray<struct FChromaSDKColors> Colors); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
	struct TArray<struct FChromaSDKColors> SetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, struct FLinearColor Color, struct TArray<struct FChromaSDKColors> Colors); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
	bool IsPlatformWindows(); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
	bool IsInitialized(); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
	int32_t GetMaxRow(enum class EChromaSDKDevice2DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
	int32_t GetMaxLeds(enum class EChromaSDKDevice1DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
	int32_t GetMaxColumn(enum class EChromaSDKDevice2DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
	struct FString DebugToString(struct FChromaSDKGuid EffectId); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
	struct TArray<struct FChromaSDKColors> CreateRandomColors2D(enum class EChromaSDKDevice2DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
	struct TArray<struct FLinearColor> CreateRandomColors1D(enum class EChromaSDKDevice1DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
	struct TArray<struct FChromaSDKColors> CreateColors2D(enum class EChromaSDKDevice2DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
	struct TArray<struct FLinearColor> CreateColors1D(enum class EChromaSDKDevice1DEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
	int32_t ChromaSDKUnInit(); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
	int32_t ChromaSDKSetEffect(struct FChromaSDKGuid EffectId); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
	int32_t ChromaSDKInit(); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
	int32_t ChromaSDKDeleteEffect(struct FChromaSDKGuid EffectId); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
	struct FChromaSDKEffectResult ChromaSDKCreateEffectStatic(enum class EChromaSDKDeviceEnum Device, struct FLinearColor Color); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
	struct FChromaSDKEffectResult ChromaSDKCreateEffectNone(enum class EChromaSDKDeviceEnum Device); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
	struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(enum class EChromaSDKDevice2DEnum Device, struct TArray<struct FChromaSDKColors> Colors); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
	struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(enum class EChromaSDKDevice1DEnum Device, struct TArray<struct FLinearColor> Colors); // Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
};

