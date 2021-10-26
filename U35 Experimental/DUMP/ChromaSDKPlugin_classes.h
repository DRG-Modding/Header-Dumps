// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation1DObject : UObject {
	UPROPERTY(BlueprintReadWrite) float OverrideFrameTime; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve Curve; 
	UPROPERTY(BlueprintReadWrite) enum class EChromaSDKDevice1DEnum Device; 
	UPROPERTY(BlueprintReadWrite) TArray<FChromaSDKColorFrame1D> Frames; 

	UFUNCTION(BlueprintCallable) void Unload();
	UFUNCTION(BlueprintCallable) void Stop();
	UFUNCTION(BlueprintCallable) void PlayWithOnComplete(FDelegate OnComplete);
	UFUNCTION(BlueprintCallable) void Play();
	UFUNCTION(BlueprintCallable) void Load();
	UFUNCTION(BlueprintCallable) bool IsPlaying();
	UFUNCTION(BlueprintCallable) bool IsLoaded();
	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColorFrame1D> GetFrames();
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// Size: 0x108 (Inherited: 0x28)
struct UChromaSDKPluginAnimation2DObject : UObject {
	UPROPERTY(BlueprintReadWrite) float OverrideFrameTime; 
	UPROPERTY(BlueprintReadWrite) FRuntimeFloatCurve Curve; 
	UPROPERTY(BlueprintReadWrite) enum class EChromaSDKDevice2DEnum Device; 
	UPROPERTY(BlueprintReadWrite) TArray<FChromaSDKColorFrame2D> Frames; 

	UFUNCTION(BlueprintCallable) void Unload();
	UFUNCTION(BlueprintCallable) void Stop();
	UFUNCTION(BlueprintCallable) void PlayWithOnComplete(FDelegate OnComplete);
	UFUNCTION(BlueprintCallable) void Play();
	UFUNCTION(BlueprintCallable) void Load();
	UFUNCTION(BlueprintCallable) bool IsPlaying();
	UFUNCTION(BlueprintCallable) bool IsLoaded();
	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColorFrame2D> GetFrames();
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChromaSDKPluginBPLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColors> SetMouseLedColor(enum class EChromaSDKMouseLed led, FLinearColor Color, TArray<FChromaSDKColors> Colors);
	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColors> SetKeyboardKeyColor(enum class EChromaSDKKeyboardKey Key, FLinearColor Color, TArray<FChromaSDKColors> Colors);
	UFUNCTION(BlueprintCallable) bool IsPlatformWindows();
	UFUNCTION(BlueprintCallable) bool IsInitialized();
	UFUNCTION(BlueprintCallable) int32_t GetMaxRow(enum class EChromaSDKDevice2DEnum Device);
	UFUNCTION(BlueprintCallable) int32_t GetMaxLeds(enum class EChromaSDKDevice1DEnum Device);
	UFUNCTION(BlueprintCallable) int32_t GetMaxColumn(enum class EChromaSDKDevice2DEnum Device);
	UFUNCTION(BlueprintCallable) FString DebugToString(FChromaSDKGuid EffectId);
	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColors> CreateRandomColors2D(enum class EChromaSDKDevice2DEnum Device);
	UFUNCTION(BlueprintCallable) TArray<FLinearColor> CreateRandomColors1D(enum class EChromaSDKDevice1DEnum Device);
	UFUNCTION(BlueprintCallable) TArray<FChromaSDKColors> CreateColors2D(enum class EChromaSDKDevice2DEnum Device);
	UFUNCTION(BlueprintCallable) TArray<FLinearColor> CreateColors1D(enum class EChromaSDKDevice1DEnum Device);
	UFUNCTION(BlueprintCallable) int32_t ChromaSDKUnInit();
	UFUNCTION(BlueprintCallable) int32_t ChromaSDKSetEffect(FChromaSDKGuid EffectId);
	UFUNCTION(BlueprintCallable) int32_t ChromaSDKInit();
	UFUNCTION(BlueprintCallable) int32_t ChromaSDKDeleteEffect(FChromaSDKGuid EffectId);
	UFUNCTION(BlueprintCallable) FChromaSDKEffectResult ChromaSDKCreateEffectStatic(enum class EChromaSDKDeviceEnum Device, FLinearColor Color);
	UFUNCTION(BlueprintCallable) FChromaSDKEffectResult ChromaSDKCreateEffectNone(enum class EChromaSDKDeviceEnum Device);
	UFUNCTION(BlueprintCallable) FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(enum class EChromaSDKDevice2DEnum Device, TArray<FChromaSDKColors> Colors);
	UFUNCTION(BlueprintCallable) FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(enum class EChromaSDKDevice1DEnum Device, TArray<FLinearColor> Colors);
};

