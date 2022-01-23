#ifndef UE4SS_SDK__MENU_Pickaxe_HPP
#define UE4SS_SDK__MENU_Pickaxe_HPP

class U_MENU_Pickaxe_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Wardrobe_ClassSelector_C* ClassSelector;
    class UITM_Wardrobe_ItemSelector_C* ItemSelectorLeft;
    class UITM_Wardrobe_ItemSelector_C* ItemSelectorRight;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UITM_Pickaxe_Slot_C* ITM_Pickaxe_PaintJob;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    class UButton* ShuffleButton;
    class UUI_RandomizeIcon_C* ShuffleIcon;
    class UVerticalBox* Slots_Left;
    class UVerticalBox* Slots_Right;
    class UPlayerCharacterID* PlayerCharacter;
    float FadeInAnimTime;

    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void InitSlots(bool ToLeft, class UITM_Pickaxe_Slot_C* PickaxeSlot, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, TArray<class UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, class UVerticalBox* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TEnumAsByte<EHorizontalAlignment> Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UITM_Wardrobe_ItemSelector_C* K2Node_Select_Default, TEnumAsByte<EHorizontalAlignment> K2Node_Select_Default_1, bool CallFunc_GetTextToLeft_TextToLeft, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
    void GetPickaxeID(class UItemID*& Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<class UItemID*>& CallFunc_GetItemList_ReturnValue, class UItemID* CallFunc_Array_Get_Item);
    void ShowPickaxe(class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class APickaxePreviewActor> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyInput_ReturnValue, bool CallFunc_HandleKeyInput_Handled);
    void GetCharacter(class APlayerCharacter*& Character, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void OnShown();
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void Refresh();
    void SetCharacter(class UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void OnEquippedChanged();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Pickaxe(int32 EntryPoint, FExecuteUbergraph__MENU_PickaxeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, TArray<class UVerticalBox*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, TArray<class UVerticalBox*>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, class UVerticalBox* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class UVerticalBox*>& K2Node_MakeArray_Array_2, class UVerticalBox* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TSubclassOf<class APlayerCharacter> K2Node_ComponentBoundEvent_Character, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_Character, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Array_Index_Variable_2, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UVerticalBox* CallFunc_Array_Get_Item_2, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacter, class ABP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, class UItemID* CallFunc_GetPickaxeID_Output, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 Temp_int_Variable_2, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UITM_Pickaxe_Slot_C* K2Node_DynamicCast_AsITM_Pickaxe_Slot_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5);
};

#endif
