#ifndef UE4SS_SDK_WmfMediaFactory_HPP
#define UE4SS_SDK_WmfMediaFactory_HPP

class UWmfMediaSettings : UObject
{
    bool AllowNonStandardCodecs;
    bool LowLatency;
    bool NativeAudioOut;
    bool HardwareAcceleratedVideoDecoding;
}

#endif
