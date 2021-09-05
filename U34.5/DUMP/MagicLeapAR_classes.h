// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void StartLuminARSession(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULuminARSessionConfig* Configuration);
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	bool LuminARLineTrace(UObject* WorldContextObject, FVector2D ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult> OutHitResults);
	enum class ELuminARTrackingState GetTrackingState();
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	ULuminARCandidateImage* AddLuminRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

// Class MagicLeapAR.LuminARSessionConfig
// Size: 0x140 (Inherited: 0xa8)
struct ULuminARSessionConfig : UARSessionConfig {
	FMagicLeapPlanesQuery PlanesQuery; // 0xb0(0x60)
	int32_t MaxPlaneQueryResults; // 0x110(0x04)
	int32_t MinPlaneArea; // 0x114(0x04)
	bool bArbitraryOrientationPlaneDetection; // 0x118(0x01)
	FVector PlaneSearchExtents; // 0x11c(0x0c)
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128(0x10)
	bool bDiscardZeroExtentPlanes; // 0x138(0x01)
	bool bDefaultUseUnreliablePose; // 0x139(0x01)
};

// Class MagicLeapAR.LuminARLightEstimate
// Size: 0x50 (Inherited: 0x40)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	TArray<float> AmbientIntensityNits; // 0x40(0x10)

	TArray<float> GetAmbientIntensityNits();
};

// Class MagicLeapAR.LuminARCandidateImage
// Size: 0x60 (Inherited: 0x58)
struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58(0x01)
	bool bImageIsStationary; // 0x59(0x01)

	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
};

