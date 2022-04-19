#ifndef UE4SS_SDK_WmfMediaFactory_HPP
#define UE4SS_SDK_WmfMediaFactory_HPP

class UWmfMediaSettings : public UObject
{
    bool AllowNonStandardCodecs;
    bool LowLatency;
    bool NativeAudioOut;
    bool HardwareAcceleratedVideoDecoding;

};

#endif
