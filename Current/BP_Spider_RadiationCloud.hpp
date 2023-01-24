#ifndef UE4SS_SDK_BP_Spider_RadiationCloud_HPP
#define UE4SS_SDK_BP_Spider_RadiationCloud_HPP

class ABP_Spider_RadiationCloud_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* RadiationSound;
    class UPointLightComponent* PointLight;
    float Timeline_0_Brightness_A937636C4B7B6C568E7B0AB343335B4D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A937636C4B7B6C568E7B0AB343335B4D;
    class UTimelineComponent* Timeline_0;
    float BaseIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_RadiationCloud(int32 EntryPoint);
};

#endif
