#ifndef UE4SS_SDK_BP_Gem_Aquarq_HPP
#define UE4SS_SDK_BP_Gem_Aquarq_HPP

class ABP_Gem_Aquarq_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GemAquarqIdle_Cue;
    class UGemTracker* GemTracker;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void ExecuteUbergraph_BP_Gem_Aquarq(int32 EntryPoint);
};

#endif
