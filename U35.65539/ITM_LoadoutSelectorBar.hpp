#ifndef UE4SS_SDK_ITM_LoadoutSelectorBar_HPP
#define UE4SS_SDK_ITM_LoadoutSelectorBar_HPP

class UITM_LoadoutSelectorBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* HorizontalBox_100;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_LoadoutIconSelector_C* ITM_LoadoutIconSelector;
    UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_0;
    UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_1;
    UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_2;
    UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_3;
    UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_4;
    FITM_LoadoutSelectorBar_CNewLoadoutSelected NewLoadoutSelected;
    void NewLoadoutSelected();
    UPlayerCharacterID* CharacterClass;
    TArray<UITM_LoadoutSelectButton_C*> LoadoutButtons;
    UITM_LoadoutSelectButton_C* SelectedLoadoutButton;
    UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget;
    bool CanSwitchIcon;

    UWidget* GetToolTipWidget(FText ClickToSelectText, bool Temp_bool_Variable, FText Temp_text_Variable, FText K2Node_Select_Default, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UBasic_ToolTip_HeadlineAndText_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void SetData(UPlayerCharacterID* CharacterClass);
    void SetSelected(int32 Index);
    void BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
    void BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(UTexture2D* Texture, int32 ImageIndex);
    void SelectPressed(UITM_LoadoutSelectButton_C* Button, int32 Index);
    void SetLoadoutIcon(UITM_LoadoutSelectButton_C* Button, int32 Index);
    void RefreshLoadout();
    void SetSelectorVisible(bool IsVisible);
    void BndEvt__Itm_LoadoutSelectButton_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
    void BndEvt__Itm_LoadoutSelectButton_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
    void ExecuteUbergraph_ITM_LoadoutSelectorBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_Index_2, int32 CallFunc_GetSelectedLoadoutIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UITM_LoadoutSelectButton_C* K2Node_ComponentBoundEvent_Button_4, UITM_LoadoutSelectButton_C* K2Node_ComponentBoundEvent_Button_3, UITM_LoadoutSelectButton_C* K2Node_ComponentBoundEvent_Button_2, UITM_LoadoutSelectButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UTexture2D* K2Node_ComponentBoundEvent_Texture, int32 K2Node_ComponentBoundEvent_ImageIndex, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UITM_LoadoutSelectButton_C* K2Node_CustomEvent_Button_1, int32 K2Node_CustomEvent_Index_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UITM_LoadoutSelectButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, UITM_LoadoutSelectButton_C* K2Node_CustomEvent_Button, int32 K2Node_CustomEvent_Index, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetLoadoutIcon_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, UTexture2D* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool K2Node_CustomEvent_isVisible, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, UITM_LoadoutSelectButton_C* K2Node_ComponentBoundEvent_Button_1, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, UITM_LoadoutSelectButton_C* K2Node_ComponentBoundEvent_Button, TArray<UITM_LoadoutSelectButton_C*>& K2Node_MakeArray_Array);
    void NewLoadoutSelected__DelegateSignature();
}

#endif
