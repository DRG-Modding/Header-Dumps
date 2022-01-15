#ifndef UE4SS_SDK_HUD_Flashlight_HPP
#define UE4SS_SDK_HUD_Flashlight_HPP

class UHUD_Flashlight_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ImageOFF;
    UImage* ImageON;
    UWidgetSwitcher* ImageSwitcher;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    bool IsOn;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnHeadlightOnChanged(bool IsOn);
    void ExecuteUbergraph_HUD_Flashlight(int32 EntryPoint, bool Temp_bool_Variable, HeadlightOnChangedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsOn, UWidget* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_MakeStruct_LinearColor);
}

#endif
