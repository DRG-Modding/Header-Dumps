#ifndef UE4SS_SDK_Options_GFX_Upscaling_HPP
#define UE4SS_SDK_Options_GFX_Upscaling_HPP

class UOptions_GFX_Upscaling_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* OPT_AMDFSRMode;
    class UBasic_Option_C* OPT_AMDFSRMode2;
    class UBasic_Option_C* OPT_NVIDIADLSS;
    class UBasic_Option_C* OPT_ResolutionScale;
    class UBasic_Option_C* OPT_Upscaling;
    class UOptions_AMD_FSR2_Quality_C* Options_AMD_FSR2_Quality;
    class UOptions_AMD_FSR_Quality_C* Options_AMD_FSR_Quality;
    class UOptions_NVIDIA_DLSS_Quality_C* Options_NVIDIA_DLSS_Quality;
    class UOptions_Scalability_ResolutioScale_C* Options_Scalability_ResolutioScale;
    class UOptions_UpscalingType_C* Options_Scalability_UpscalingType;
    FOptions_GFX_Upscaling_CSettingsChanged SettingsChanged;
    void SettingsChanged();

    void Construct();
    void SettingsUpdated();
    void ExecuteUbergraph_Options_GFX_Upscaling(int32 EntryPoint);
    void SettingsChanged__DelegateSignature();
};

#endif
