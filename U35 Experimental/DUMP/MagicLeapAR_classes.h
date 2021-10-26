// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void StartLuminARSession(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULuminARSessionConfig* Configuration);
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool LuminARLineTrace(UObject* WorldContextObject, FVector2D ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult> OutHitResults);
	UFUNCTION(BlueprintCallable) enum class ELuminARTrackingState GetTrackingState();
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) ULuminARCandidateImage* AddLuminRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

// Class MagicLeapAR.LuminARSessionConfig
// Size: 0x140 (Inherited: 0xa8)
struct ULuminARSessionConfig : UARSessionConfig {
	UPROPERTY(BlueprintReadWrite) FMagicLeapPlanesQuery PlanesQuery; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxPlaneQueryResults; 
	UPROPERTY(BlueprintReadWrite) int32_t MinPlaneArea; 
	UPROPERTY(BlueprintReadWrite) bool bArbitraryOrientationPlaneDetection; 
	UPROPERTY(BlueprintReadWrite) FVector PlaneSearchExtents; 
	UPROPERTY(BlueprintReadWrite) TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; 
	UPROPERTY(BlueprintReadWrite) bool bDiscardZeroExtentPlanes; 
	UPROPERTY(BlueprintReadWrite) bool bDefaultUseUnreliablePose; 
};

// Class MagicLeapAR.LuminARLightEstimate
// Size: 0x50 (Inherited: 0x40)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	UPROPERTY(BlueprintReadWrite) TArray<float> AmbientIntensityNits; 

	UFUNCTION(BlueprintCallable) TArray<float> GetAmbientIntensityNits();
};

// Class MagicLeapAR.LuminARCandidateImage
// Size: 0x60 (Inherited: 0x58)
struct ULuminARCandidateImage : UARCandidateImage {
	UPROPERTY(BlueprintReadWrite) bool bUseUnreliablePose; 
	UPROPERTY(BlueprintReadWrite) bool bImageIsStationary; 

	UFUNCTION(BlueprintCallable) bool GetUseUnreliablePose();
	UFUNCTION(BlueprintCallable) bool GetImageIsStationary();
};

