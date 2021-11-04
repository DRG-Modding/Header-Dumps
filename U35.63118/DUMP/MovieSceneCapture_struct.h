// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8 {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10 (Inherited: 0x00)
struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x00(0x10)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// Size: 0x10 (Inherited: 0x00)
struct FFrameMetrics {
	float TotalElapsedTime; // 0x00(0x04)
	float FrameDelta; // 0x04(0x04)
	int32_t FrameNumber; // 0x08(0x04)
	int32_t NumDroppedFrames; // 0x0c(0x04)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x00(0x10)
	AGameModeBase* GameModeOverride; // 0x10(0x08)
	FString OutputFormat; // 0x18(0x10)
	bool bOverwriteExisting; // 0x28(0x01)
	bool bUseRelativeFrameNumbers; // 0x29(0x01)
	int32_t HandleFrames; // 0x2c(0x04)
	FString MovieExtension; // 0x30(0x10)
	char ZeroPadFrameNumbers; // 0x40(0x01)
	FFrameRate FrameRate; // 0x44(0x08)
	bool bUseCustomFrameRate; // 0x4c(0x01)
	FFrameRate CustomFrameRate; // 0x50(0x08)
	FCaptureResolution Resolution; // 0x58(0x08)
	bool bEnableTextureStreaming; // 0x60(0x01)
	bool bCinematicEngineScalability; // 0x61(0x01)
	bool bCinematicMode; // 0x62(0x01)
	bool bAllowMovement; // 0x63(0x01)
	bool bAllowTurning; // 0x64(0x01)
	bool bShowPlayer; // 0x65(0x01)
	bool bShowHUD; // 0x66(0x01)
	bool bUsePathTracer; // 0x67(0x01)
	int32_t PathTracerSamplePerPixel; // 0x68(0x04)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x08 (Inherited: 0x00)
struct FCaptureResolution {
	int32_t ResX; // 0x00(0x04)
	int32_t ResY; // 0x04(0x04)
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// Size: 0x10 (Inherited: 0x00)
struct FCapturedPixels {
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// Size: 0x50 (Inherited: 0x00)
struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x00(0x50)
};

