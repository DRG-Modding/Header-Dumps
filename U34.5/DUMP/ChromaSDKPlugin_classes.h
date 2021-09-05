// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation1DObject : UObject {
	float OverrideFrameTime; // 0x30(0x04)
	FRuntimeFloatCurve Curve; // 0x38(0x88)
	enum class EChromaSDKDevice1DEnum Device; // 0xc0(0x01)
	TArray<FChromaSDKColorFrame1D> Frames; // 0xc8(0x10)

	void Unload();
	void Stop();
	void PlayWithOnComplete(FDelegate OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<FChromaSDKColorFrame1D> GetFrames();
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation2DObject : UObject {
	float OverrideFrameTime; // 0x30(0x04)
	FRuntimeFloatCurve Curve; // 0x38(0x88)
	enum class EChromaSDKDevice2DEnum Device; // 0xc0(0x01)
	TArray<FChromaSDKColorFrame2D> Frames; // 0xc8(0x10)

	void Unload();
	void Stop();
	void PlayWithOnComplete(FDelegate OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<FChromaSDKColorFrame2D> GetFrames();
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChromaSDKPluginBPLibrary : UBlueprintFunctionLibrary {

	TArray<FChromaSDKColors> SetMouseLedColor(enum class EChromaSDKMouseLed led, FLinearColor Color, TArray<FChromaSDKColors> Colors);
	TArray<FChromaSDKColors> SetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, FLinearColor Color, TArray<FChromaSDKColors> Colors);
	bool IsPlatformWindows();
	bool IsInitialized();
	int32_t GetMaxRow(enum class EChromaSDKDevice2DEnum Device);
	int32_t GetMaxLeds(enum class EChromaSDKDevice1DEnum Device);
	int32_t GetMaxColumn(enum class EChromaSDKDevice2DEnum Device);
	FString DebugToString(FChromaSDKGuid EffectId);
	TArray<FChromaSDKColors> CreateRandomColors2D(enum class EChromaSDKDevice2DEnum Device);
	TArray<FLinearColor> CreateRandomColors1D(enum class EChromaSDKDevice1DEnum Device);
	TArray<FChromaSDKColors> CreateColors2D(enum class EChromaSDKDevice2DEnum Device);
	TArray<FLinearColor> CreateColors1D(enum class EChromaSDKDevice1DEnum Device);
	int32_t ChromaSDKUnInit();
	int32_t ChromaSDKSetEffect(FChromaSDKGuid EffectId);
	int32_t ChromaSDKInit();
	int32_t ChromaSDKDeleteEffect(FChromaSDKGuid EffectId);
	FChromaSDKEffectResult ChromaSDKCreateEffectStatic(enum class EChromaSDKDeviceEnum Device, FLinearColor Color);
	FChromaSDKEffectResult ChromaSDKCreateEffectNone(enum class EChromaSDKDeviceEnum Device);
	FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(enum class EChromaSDKDevice2DEnum Device, TArray<FChromaSDKColors> Colors);
	FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(enum class EChromaSDKDevice1DEnum Device, TArray<FLinearColor> Colors);
};

