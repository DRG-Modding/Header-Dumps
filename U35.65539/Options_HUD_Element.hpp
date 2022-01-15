#ifndef UE4SS_SDK_Options_HUD_Element_HPP
#define UE4SS_SDK_Options_HUD_Element_HPP

class UOptions_HUD_Element_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Option_C* Basic_Option;
    UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    UHorizontalBox* DotsBox;
    TArray<EHUDVisibilityMode> AvailableModes;
    UHUDVisibilityGroup* VisibilityGroup;

    void UpdateDots(int32 DotIndex, UImage* Dot, int32 SelectedIndex, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FLinearColor CallFunc_SelectMenuColor_OutputColor, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UWidget* CallFunc_GetChildAt_ReturnValue, UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetSelectedIndex_Index, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetupOptions(SetProperty DynamicElements, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, SetProperty K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, EHUDVisibilityMode Temp_byte_Variable, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, TArray<EHUDVisibilityMode>& CallFunc_GetAllowedModes_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Max_ReturnValue, EHUDVisibilityMode CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FText K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_Option_Index);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature();
    void BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature();
    void Construct();
    void OnModeChanged_Event(UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void ExecuteUbergraph_Options_HUD_Element(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, EHUDVisibilityMode CallFunc_Array_Get_Item, ModeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_TextToUpper_ReturnValue, UHUDVisibilityGroup* K2Node_CustomEvent_Group, EHUDVisibilityMode K2Node_CustomEvent_Mode, int32 CallFunc_Array_Find_ReturnValue);
}

#endif
