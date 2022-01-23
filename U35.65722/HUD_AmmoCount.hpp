#ifndef UE4SS_SDK_HUD_AmmoCount_HPP
#define UE4SS_SDK_HUD_AmmoCount_HPP

class UHUD_AmmoCount_C : public UAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* DATA_Current;
    class UTextBlock* DATA_Total;

    void OnTotalChanged(int32 Total);
    void OnAmountChanged(int32 count);
    void OnVisibleChanged(bool Visible, bool showClipCount);
    void Construct();
    void OnTotalVisibleChanged(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_AmmoCount(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, int32 K2Node_Event_Total, int32 K2Node_Event_Count, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, bool K2Node_Event_visible_1, bool K2Node_Event_showClipCount, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_visible, ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime);
};

#endif
