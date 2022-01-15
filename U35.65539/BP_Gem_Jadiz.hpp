#ifndef UE4SS_SDK_BP_Gem_Jadiz_HPP
#define UE4SS_SDK_BP_Gem_Jadiz_HPP

class ABP_Gem_Jadiz_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* GemJadizIdle_Cue;
    UGemTracker* GemTracker;
    UPointLightComponent* PointLight6;
    UPointLightComponent* PointLight5;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void ExecuteUbergraph_BP_Gem_Jadiz(int32 EntryPoint);
}

#endif
