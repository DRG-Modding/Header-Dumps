#ifndef UE4SS_SDK_AudioCapture_HPP
#define UE4SS_SDK_AudioCapture_HPP

class UAudioCapture : UAudioGenerator
{

    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
}

class UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary
{

    UAudioCapture* CreateAudioCapture();
}

class UAudioCaptureComponent : USynthComponent
{
    int32 JitterLatencyFrames;
}

struct UAudioCaptureDeviceInfo
{
    FName DeviceName;
    int32 NumInputChannels;
    int32 SampleRate;
}

#endif
