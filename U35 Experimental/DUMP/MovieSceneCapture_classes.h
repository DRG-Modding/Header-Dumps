// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : UObject {
	enum class EMovieSceneCaptureProtocolState State; // 0x50(0x01)

	bool IsCapturing();
	enum class EMovieSceneCaptureProtocolState GetState();
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58 (Inherited: 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90 (Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58(0x10)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xc0 (Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	bool bCaptureFramesInHDR; // 0x68(0x01)
	int32_t HDRCompressionQuality; // 0x6c(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x70(0x01)
	FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	bool bDisableScreenPercentage; // 0x90(0x01)
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x08)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68 (Inherited: 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xd8 (Inherited: 0x68)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xd8 (Inherited: 0xd8)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xe8 (Inherited: 0xd8)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xd9(0x01)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x08)
	UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x08)
	FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	bool bUseSeparateProcess; // 0xe8(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xe9(0x01)
	FString AdditionalCommandLineArguments; // 0xf0(0x10)
	FString InheritedCommandLineArguments; // 0x100(0x10)

	void SetImageCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType);
	void SetAudioCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType);
	UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x240 (Inherited: 0x220)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220(0x01)
	FGuid PrerequisiteActorId; // 0x22c(0x10)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject {

	bool IsCaptureInProgress();
	int32_t GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
	UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xd8 (Inherited: 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58(0x08)

	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(FCapturedPixelsID StreamID);
	void ResolveBuffer(UTexture* Buffer, FCapturedPixelsID BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(FCapturedPixels Pixels, FCapturedPixelsID ID, FFrameMetrics FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	FFrameMetrics GetCurrentFrameMetrics();
	FString GenerateFilename(FFrameMetrics InFrameMetrics);
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xd8(0x01)
	bool bEnableCompression; // 0xd9(0x01)
	int32_t CompressionQuality; // 0xdc(0x04)

	void WriteImageToDisk(FCapturedPixels PixelData, FCapturedPixelsID StreamID, FFrameMetrics FrameMetrics, bool bCopyImageData);
	FString GenerateFilenameForCurrentFrame();
	FString GenerateFilenameForBuffer(UTexture* Buffer, FCapturedPixelsID StreamID);
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80 (Inherited: 0x68)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68(0x01)
	float CompressionQuality; // 0x6c(0x04)
};

