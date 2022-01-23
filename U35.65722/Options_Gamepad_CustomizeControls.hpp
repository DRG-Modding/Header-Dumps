#ifndef UE4SS_SDK_Options_Gamepad_CustomizeControls_HPP
#define UE4SS_SDK_Options_Gamepad_CustomizeControls_HPP

class UOptions_Gamepad_CustomizeControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Option_C* Basic_Option;
    class UVerticalBox* BindingsBox;
    class UBasic_ButtonWithControls_C* BTN_ResetToDefaults;
    class UBasic_ButtonCutCorner_C* Btn_Toggle;
    class UVerticalBox* ContentBox;
    class UOptions_Gamepad_SwapThumbsticks_C* Options_SwapThumbsticks;
    bool IsOpen;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetOpen(bool Index, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void CreateBindingWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UOptions_Gamepad_KeyBinding_C* CallFunc_Create_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UOptions_Gamepad_KeyBinding_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FCustomKeySetting CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Btn_Toggle_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Options_Gamepad_CustomizeControls(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue);
};

#endif
