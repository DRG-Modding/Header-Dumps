#ifndef UE4SS_SDK_HUD_Flashlight_HPP
#define UE4SS_SDK_HUD_Flashlight_HPP

class UHUD_Flashlight_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageOFF;
    class UImage* ImageON;
    class UWidgetSwitcher* ImageSwitcher;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    bool IsOn;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnHeadlightOnChanged(bool IsOn);
    void ExecuteUbergraph_HUD_Flashlight(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_HUD_FlashlightK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsOn, class UWidget* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor);
};

#endif
