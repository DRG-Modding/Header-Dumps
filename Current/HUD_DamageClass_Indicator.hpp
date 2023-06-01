#ifndef UE4SS_SDK_HUD_DamageClass_Indicator_HPP
#define UE4SS_SDK_HUD_DamageClass_Indicator_HPP

class UHUD_DamageClass_Indicator_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AfflictionBox_Left;
    class UHorizontalBox* AfflictionBox_Right;
    class UHUD_PlayerInfection_C* HUD_PlayerInfection;
    class UHUD_PlayerTemperature_C* HUD_PlayerTemperature;
    class USpacer* Spacer_Left;
    class USpacer* Spacer_Right;
    bool IsOn;
    TMap<class UPawnAffliction*, class UHUD_DamageClass_Item_C*> Indicators;

    void UpdateThisSpacer(class UWidget* ThisSpacer, class UPanelWidget* ThisAfflictionBox, class UPanelWidget* OtherAfflictionBox, bool TemperatureIsVisible);
    void UpdateSpacers();
    void ClearIcons();
    class UHUD_DamageClass_Item_C* CreateIcon(class UPawnAffliction* Affliction);
    void Construct();
    void OnAfflictionActivated(class UPawnAffliction* Affliction);
    void OnAfflictionDeactivated(class UPawnAffliction* Affliction);
    void Elapsed(class UHUD_DamageClass_Item_C* Item);
    void BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(ESlateVisibility InVisibility);
    void ExecuteUbergraph_HUD_DamageClass_Indicator(int32 EntryPoint);
};

#endif
