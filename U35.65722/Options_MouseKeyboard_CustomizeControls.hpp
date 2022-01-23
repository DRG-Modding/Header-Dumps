#ifndef UE4SS_SDK_Options_MouseKeyboard_CustomizeControls_HPP
#define UE4SS_SDK_Options_MouseKeyboard_CustomizeControls_HPP

class UOptions_MouseKeyboard_CustomizeControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UVerticalBox* BindingsBox;
    class UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    class UBasic_ButtonCutCorner_C* Btn_Toggle;
    class UVerticalBox* ContentBox;
    bool IsOpen;

    void ContainsAnyName(FCustomKeySetting Button, const TArray<FName>& ActionNames, bool& Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetOpen(bool Index, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void CreateBindingWidgets(FCustomKeySetting Button, TArray<FName> IgnoreListForXboxOddishUWP, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, TArray<FName>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default, bool CallFunc_ContainsAnyName_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOptions_MouseKeyboard_KeyBinding_C* CallFunc_Create_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UOptions_MouseKeyboard_KeyBinding_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FCustomKeySetting CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Construct();
    void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_MouseKeyboard_CustomizeControls(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime);
};

#endif
