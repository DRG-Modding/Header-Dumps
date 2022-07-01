#ifndef UE4SS_SDK_BP_Gem_Jadiz_HPP
#define UE4SS_SDK_BP_Gem_Jadiz_HPP

class ABP_Gem_Jadiz_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GemJadizIdle_Cue;
    class UGemTracker* GemTracker;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void ExecuteUbergraph_BP_Gem_Jadiz(int32 EntryPoint);
};

#endif
