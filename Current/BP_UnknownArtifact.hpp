#ifndef UE4SS_SDK_BP_UnknownArtifact_HPP
#define UE4SS_SDK_BP_UnknownArtifact_HPP

class ABP_UnknownArtifact_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* light_center;
    float Timeline_0_NewTrack_0_26F6B6C743C5284D0A49D79127722B1A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_26F6B6C743C5284D0A49D79127722B1A;
    class UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void All_PlayDugFree();
    void ExecuteUbergraph_BP_UnknownArtifact(int32 EntryPoint);
};

#endif
