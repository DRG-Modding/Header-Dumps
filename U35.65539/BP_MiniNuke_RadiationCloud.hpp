#ifndef UE4SS_SDK_BP_MiniNuke_RadiationCloud_HPP
#define UE4SS_SDK_BP_MiniNuke_RadiationCloud_HPP

class ABP_MiniNuke_RadiationCloud_C : ABP_Damage_Cloud_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* RadiationSound;
    UPointLightComponent* PointLight;
    float Timeline_0_Brightness_3A67B370490B2F862C2D6E9E451100CB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3A67B370490B2F862C2D6E9E451100CB;
    UTimelineComponent* Timeline_0;
    float BaseIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MiniNuke_RadiationCloud(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue);
}

#endif
