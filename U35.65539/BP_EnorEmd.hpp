#ifndef UE4SS_SDK_BP_EnorEmd_HPP
#define UE4SS_SDK_BP_EnorEmd_HPP

class ABP_EnorEmd_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UGemTracker* GemTracker;
    UPointLightComponent* PointLight6;
    UPointLightComponent* PointLight5;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void ExecuteUbergraph_BP_EnorEmd(int32 EntryPoint);
}

#endif
