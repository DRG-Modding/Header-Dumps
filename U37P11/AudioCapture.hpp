#ifndef UE4SS_SDK_AudioCapture_HPP
#define UE4SS_SDK_AudioCapture_HPP

struct FAudioCaptureDeviceInfo
{
    FName DeviceName;
    int32 NumInputChannels;
    int32 SampleRate;

};

class UAudioCapture : public UAudioGenerator
{

    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
};

class UAudioCaptureComponent : public USynthComponent
{
    int32 JitterLatencyFrames;

};

class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UAudioCapture* CreateAudioCapture();
};

#endif
