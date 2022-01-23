#ifndef UE4SS_SDK_HUD_ObjectiveBox_Item_HPP
#define UE4SS_SDK_HUD_ObjectiveBox_Item_HPP

class UHUD_ObjectiveBox_Item_C : public UObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Checkbox_Border;
    class UImage* CheckMark;
    class UImage* ICON_Counter;
    class UHUD_DefaultLabel_C* TEXT_ObjectiveCounter;
    class UHUD_DefaultLabel_C* TEXT_ObjectiveDesc;
    class UObjective* Objective;
    bool primary;

    void PreConstruct(bool IsDesignTime);
    void ReceiveObjectiveInitialized();
    void ReceiveObjectiveUpdated();
    void ExecuteUbergraph_HUD_ObjectiveBox_Item(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, TEnumAsByte<ENUM_AcuminCondensedTypeface::Type> K2Node_Select_Default, int32 K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
};

#endif
