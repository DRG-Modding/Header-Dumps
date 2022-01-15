#ifndef UE4SS_SDK__MENU_Pickaxe_HPP
#define UE4SS_SDK__MENU_Pickaxe_HPP

class U_MENU_Pickaxe_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_Wardrobe_ClassSelector_C* ClassSelector;
    UITM_Wardrobe_ItemSelector_C* ItemSelectorLeft;
    UITM_Wardrobe_ItemSelector_C* ItemSelectorRight;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    UITM_Pickaxe_Slot_C* ITM_Pickaxe_PaintJob;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    UButton* ShuffleButton;
    UUI_RandomizeIcon_C* ShuffleIcon;
    UVerticalBox* Slots_Left;
    UVerticalBox* Slots_Right;
    UPlayerCharacterID* PlayerCharacter;
    float FadeInAnimTime;

    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void InitSlots(bool ToLeft, UITM_Pickaxe_Slot_C* PickaxeSlot, uint8 Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, TArray<UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, UVerticalBox* CallFunc_Array_Get_Item, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, UITM_Wardrobe_ItemSelector_C* K2Node_Select_Default, uint8 K2Node_Select_Default_1, bool CallFunc_GetTextToLeft_TextToLeft, UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
    void GetPickaxeID(UItemID*& Output, UGameData* CallFunc_GetFSDGameData_ReturnValue, UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<UItemID*>& CallFunc_GetItemList_ReturnValue, UItemID* CallFunc_Array_Get_Item);
    void ShowPickaxe(UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<APickaxePreviewActor> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyInput_ReturnValue, bool CallFunc_HandleKeyInput_Handled);
    void GetCharacter(UPlayerCharacter*& Character, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
    void OnShown();
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void Refresh();
    void SetCharacter(UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void OnEquippedChanged();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Pickaxe(int32 EntryPoint, OnEquippedChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, TArray<UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, TArray<UVerticalBox*>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, UVerticalBox* CallFunc_Array_Get_Item, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<UVerticalBox*>& K2Node_MakeArray_Array_2, UVerticalBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TSubclassOf<UPlayerCharacter> K2Node_ComponentBoundEvent_Character, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_Character, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Array_Index_Variable_2, UGameData* CallFunc_GetFSDGameData_ReturnValue, UVerticalBox* CallFunc_Array_Get_Item_2, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacter, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, UItemID* CallFunc_GetPickaxeID_Output, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 Temp_int_Variable_2, UWidget* CallFunc_GetChildAt_ReturnValue_2, UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5);
}

#endif
