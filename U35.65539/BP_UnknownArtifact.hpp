#ifndef UE4SS_SDK_BP_UnknownArtifact_HPP
#define UE4SS_SDK_BP_UnknownArtifact_HPP

class ABP_UnknownArtifact_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOutlineComponent* outline;
    UPointLightComponent* PointLight6;
    UPointLightComponent* PointLight5;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* light_center;
    float Timeline_0_NewTrack_0_26F6B6C743C5284D0A49D79127722B1A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_26F6B6C743C5284D0A49D79127722B1A;
    UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void All_PlayDugFree();
    void ExecuteUbergraph_BP_UnknownArtifact(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4);
}

#endif
