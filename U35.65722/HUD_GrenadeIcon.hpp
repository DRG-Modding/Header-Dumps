#ifndef UE4SS_SDK_HUD_GrenadeIcon_HPP
#define UE4SS_SDK_HUD_GrenadeIcon_HPP

class UHUD_GrenadeIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_17;
    bool IsOn;

    void SetOn(bool Visible, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_GrenadeIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
