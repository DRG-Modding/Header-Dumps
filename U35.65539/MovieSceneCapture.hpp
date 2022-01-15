#ifndef UE4SS_SDK_MovieSceneCapture_HPP
#define UE4SS_SDK_MovieSceneCapture_HPP

#include "MovieSceneCapture_enums.hpp"

class UMovieSceneCaptureProtocolBase : UObject
{
    EMovieSceneCaptureProtocolState State;

    bool IsCapturing();
    EMovieSceneCaptureProtocolState GetState();
}

class UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
}

class UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
}

class UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase
{
    FString Filename;
}

class UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase
{
}

class UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
    FCompositionGraphCapturePasses IncludeRenderPasses;
    bool bCaptureFramesInHDR;
    int32 HDRCompressionQuality;
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
    FSoftObjectPath PostProcessingMaterial;
    bool bDisableScreenPercentage;
    UMaterialInterface* PostProcessingMaterialPtr;
}

class UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase
{
}

class UImageSequenceProtocol : UFrameGrabberProtocol
{
}

class UCompressedImageSequenceProtocol : UImageSequenceProtocol
{
    int32 CompressionQuality;
}

class UImageSequenceProtocol_BMP : UImageSequenceProtocol
{
}

class UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol
{
}

class UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol
{
}

class UImageSequenceProtocol_EXR : UImageSequenceProtocol
{
    bool bCompressed;
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
}

class UMovieSceneCaptureInterface : UInterface
{
}

class UMovieSceneCapture : UObject
{
    FSoftClassPath ImageCaptureProtocolType;
    FSoftClassPath AudioCaptureProtocolType;
    UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;
    UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;
    FMovieSceneCaptureSettings Settings;
    bool bUseSeparateProcess;
    bool bCloseEditorWhenCaptureStarts;
    FString AdditionalCommandLineArguments;
    FString InheritedCommandLineArguments;

    void SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    void SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);
    UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
}

class ULevelCapture : UMovieSceneCapture
{
    bool bAutoStartCapture;
    FGuid PrerequisiteActorId;
}

class UMovieSceneCaptureEnvironment : UObject
{

    bool IsCaptureInProgress();
    int32 GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
    UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
}

class UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
{
    UWorld* World;

    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);
    void ResolveBuffer(UTexture* Buffer, const FCapturedPixelsID& BufferID);
    void OnWarmUp();
    void OnTick();
    void OnStartCapture();
    bool OnSetup();
    void OnPreTick();
    void OnPixelsReceived(const FCapturedPixels& Pixels, const FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);
    void OnPauseCapture();
    void OnFinalize();
    void OnCaptureFrame();
    bool OnCanFinalize();
    void OnBeginFinalize();
    FFrameMetrics GetCurrentFrameMetrics();
    FString GenerateFilename(const FFrameMetrics& InFrameMetrics);
}

class UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol
{
    EDesiredImageFormat Format;
    bool bEnableCompression;
    int32 CompressionQuality;

    void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);
    FString GenerateFilenameForCurrentFrame();
    FString GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& StreamID);
}

class UVideoCaptureProtocol : UFrameGrabberProtocol
{
    bool bUseCompression;
    float CompressionQuality;
}

struct UCompositionGraphCapturePasses
{
    TArray<FString> Value;
}

struct UFrameMetrics
{
    float TotalElapsedTime;
    float FrameDelta;
    int32 FrameNumber;
    int32 NumDroppedFrames;
}

struct UMovieSceneCaptureSettings
{
    FDirectoryPath OutputDirectory;
    TSubclassOf<AGameModeBase> GameModeOverride;
    FString OutputFormat;
    bool bOverwriteExisting;
    bool bUseRelativeFrameNumbers;
    int32 HandleFrames;
    FString MovieExtension;
    uint8 ZeroPadFrameNumbers;
    FFrameRate FrameRate;
    bool bUseCustomFrameRate;
    FFrameRate CustomFrameRate;
    FCaptureResolution Resolution;
    bool bEnableTextureStreaming;
    bool bCinematicEngineScalability;
    bool bCinematicMode;
    bool bAllowMovement;
    bool bAllowTurning;
    bool bShowPlayer;
    bool bShowHUD;
    bool bUsePathTracer;
    int32 PathTracerSamplePerPixel;
}

struct UCaptureResolution
{
    int32 ResX;
    int32 ResY;
}

struct UCapturedPixels
{
}

struct UCapturedPixelsID
{
    TMap<FName, FName> Identifiers;
}

#endif
