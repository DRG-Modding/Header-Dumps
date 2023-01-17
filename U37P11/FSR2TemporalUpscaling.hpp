#ifndef UE4SS_SDK_FSR2TemporalUpscaling_HPP
#define UE4SS_SDK_FSR2TemporalUpscaling_HPP

#include "FSR2TemporalUpscaling_enums.hpp"

class UFSR2Settings : public UDeveloperSettings
{
    bool bEnabled;
    bool AutoExposure;
    bool EnabledInEditorViewport;
    bool UseSSRExperimentalDenoiser;
    bool UseNativeDX12;
    bool UseNativeVulkan;
    EFSR2QualityMode QualityMode;
    EFSR2HistoryFormat HistoryFormat;
    float Sharpness;
    bool AdjustMipBias;
    bool ReactiveMask;
    bool ForceVertexDeformationOutputsVelocity;
    float ReflectionScale;
    float ReflectionLuminanceBias;
    float RoughnessScale;
    float RoughnessBias;
    float RoughnessMaxDistance;
    bool ReactiveMaskRoughnessForceMaxDistance;
    float TranslucencyBias;
    float TranslucencyLuminanceBias;
    float TranslucencyMaxDistance;
    float PreDOFTranslucencyScale;
    bool PreDOFTranslucencyMax;

};

#endif
