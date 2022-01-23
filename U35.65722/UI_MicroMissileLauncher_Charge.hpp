#ifndef UE4SS_SDK_UI_MicroMissileLauncher_Charge_HPP
#define UE4SS_SDK_UI_MicroMissileLauncher_Charge_HPP

class UUI_MicroMissileLauncher_Charge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCharged;
    class UImage* Background;
    class UImage* Charged;
    bool On;

    void PreConstruct(bool IsDesignTime);
    void SetOn(bool InOn);
    void ExecuteUbergraph_UI_MicroMissileLauncher_Charge(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_InOn, ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
