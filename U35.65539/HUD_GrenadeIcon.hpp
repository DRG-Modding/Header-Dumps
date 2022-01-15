#ifndef UE4SS_SDK_HUD_GrenadeIcon_HPP
#define UE4SS_SDK_HUD_GrenadeIcon_HPP

class UHUD_GrenadeIcon_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_17;
    bool IsOn;

    void SetOn(bool Visible, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_GrenadeIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
