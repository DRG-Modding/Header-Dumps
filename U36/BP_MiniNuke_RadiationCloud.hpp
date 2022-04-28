#ifndef UE4SS_SDK_BP_MiniNuke_RadiationCloud_HPP
#define UE4SS_SDK_BP_MiniNuke_RadiationCloud_HPP

class ABP_MiniNuke_RadiationCloud_C : public ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* RadiationSound;
    class UPointLightComponent* PointLight;
    float Timeline_0_Brightness_3A67B370490B2F862C2D6E9E451100CB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3A67B370490B2F862C2D6E9E451100CB;
    class UTimelineComponent* Timeline_0;
    float BaseIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int32 EntryPoint);
};

#endif
