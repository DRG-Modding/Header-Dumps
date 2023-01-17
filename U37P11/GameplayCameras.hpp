#ifndef UE4SS_SDK_GameplayCameras_HPP
#define UE4SS_SDK_GameplayCameras_HPP

#include "GameplayCameras_enums.hpp"

class UTestCameraShake : public UCameraShakeBase
{
};

class USimpleCameraShakePattern : public UCameraShakePattern
{
    float Duration;
    float BlendInTime;
    float BlendOutTime;

};

class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UCompositeCameraShakePattern : public UCameraShakePattern
{
    TArray<class UCameraShakePattern*> ChildPatterns;

};

class UDefaultCameraShakeBase : public UCameraShakeBase
{
};

struct FFOscillator
{
    float Amplitude;
    float Frequency;
    TEnumAsByte<EInitialOscillatorOffset> InitialOffset;
    EOscillatorWaveform Waveform;

};

struct FROscillator
{
    FFOscillator Pitch;
    FFOscillator Yaw;
    FFOscillator Roll;

};

struct FVOscillator
{
    FFOscillator X;
    FFOscillator Y;
    FFOscillator Z;

};

class UMatineeCameraShake : public UCameraShakeBase
{
    float OscillationDuration;
    float OscillationBlendInTime;
    float OscillationBlendOutTime;
    FROscillator RotOscillation;
    FVOscillator LocOscillation;
    FFOscillator FOVOscillation;
    float AnimPlayRate;
    float AnimScale;
    float AnimBlendInTime;
    float AnimBlendOutTime;
    float RandomAnimSegmentDuration;
    class UCameraAnim* Anim;
    class UCameraAnimationSequence* AnimSequence;
    uint8 bRandomAnimSegment;
    float OscillatorTimeRemaining;
    class UCameraAnimInst* AnimInst;
    class USequenceCameraShakePattern* SequenceShakePattern;

    class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
};

class UMatineeCameraShakePattern : public UCameraShakePattern
{
};

class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
};

class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);
};

struct FPerlinNoiseShaker
{
    float Amplitude;
    float Frequency;

};

class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;
    float LocationFrequencyMultiplier;
    FPerlinNoiseShaker X;
    FPerlinNoiseShaker Y;
    FPerlinNoiseShaker Z;
    float RotationAmplitudeMultiplier;
    float RotationFrequencyMultiplier;
    FPerlinNoiseShaker Pitch;
    FPerlinNoiseShaker Yaw;
    FPerlinNoiseShaker Roll;
    FPerlinNoiseShaker FOV;

};

struct FWaveOscillator
{
    float Amplitude;
    float Frequency;
    EInitialWaveOscillatorOffsetType InitialOffsetType;

};

class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;
    float LocationFrequencyMultiplier;
    FWaveOscillator X;
    FWaveOscillator Y;
    FWaveOscillator Z;
    float RotationAmplitudeMultiplier;
    float RotationFrequencyMultiplier;
    FWaveOscillator Pitch;
    FWaveOscillator Yaw;
    FWaveOscillator Roll;
    FWaveOscillator FOV;

};

#endif
