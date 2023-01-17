#ifndef UE4SS_SDK_MovieSceneCapture_HPP
#define UE4SS_SDK_MovieSceneCapture_HPP

#include "MovieSceneCapture_enums.hpp"

class UMovieSceneCaptureProtocolBase : public UObject
{
    EMovieSceneCaptureProtocolState State;

    bool IsCapturing();
    EMovieSceneCaptureProtocolState GetState();
};

class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
};

class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
};

class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
    FString Filename;

};

class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
};

struct FCompositionGraphCapturePasses
{
    TArray<FString> Value;

};

class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
    FCompositionGraphCapturePasses IncludeRenderPasses;
    bool bCaptureFramesInHDR;
    int32 HDRCompressionQuality;
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
    FSoftObjectPath PostProcessingMaterial;
    bool bDisableScreenPercentage;
    class UMaterialInterface* PostProcessingMaterialPtr;

};

class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
};

class UImageSequenceProtocol : public UFrameGrabberProtocol
{
};

class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
    int32 CompressionQuality;

};

class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
};

class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
};

class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
};

class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
    bool bCompressed;
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;

};

class IMovieSceneCaptureInterface : public IInterface
{
};

struct FCaptureResolution
{
    int32 ResX;
    int32 ResY;

};

struct FMovieSceneCaptureSettings
{
    FDirectoryPath OutputDirectory;
    TSubclassOf<class AGameModeBase> GameModeOverride;
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

};

class UMovieSceneCapture : public UObject
{
    FSoftClassPath ImageCaptureProtocolType;
    FSoftClassPath AudioCaptureProtocolType;
    class UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;
    class UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;
    FMovieSceneCaptureSettings Settings;
    bool bUseSeparateProcess;
    bool bCloseEditorWhenCaptureStarts;
    FString AdditionalCommandLineArguments;
    FString InheritedCommandLineArguments;

    void SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
    void SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
    class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

class ULevelCapture : public UMovieSceneCapture
{
    bool bAutoStartCapture;
    FGuid PrerequisiteActorId;

};

class UMovieSceneCaptureEnvironment : public UObject
{

    bool IsCaptureInProgress();
    int32 GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
    class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
};

struct FCapturedPixelsID
{
    TMap<class FName, class FName> Identifiers;

};

struct FCapturedPixels
{
};

struct FFrameMetrics
{
    float TotalElapsedTime;
    float FrameDelta;
    int32 FrameNumber;
    int32 NumDroppedFrames;

};

class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
    class UWorld* World;

    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);
    void ResolveBuffer(class UTexture* Buffer, const FCapturedPixelsID& BufferID);
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
};

class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
    EDesiredImageFormat Format;
    bool bEnableCompression;
    int32 CompressionQuality;

    void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);
    FString GenerateFilenameForCurrentFrame();
    FString GenerateFilenameForBuffer(class UTexture* Buffer, const FCapturedPixelsID& StreamID);
};

class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
    bool bUseCompression;
    float CompressionQuality;

};

#endif
