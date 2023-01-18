#ifndef UE4SS_SDK_BP_EnorEmd_HPP
#define UE4SS_SDK_BP_EnorEmd_HPP

class ABP_EnorEmd_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGemTracker* GemTracker;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void ExecuteUbergraph_BP_EnorEmd(int32 EntryPoint);
};

#endif
