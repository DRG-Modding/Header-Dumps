#ifndef UE4SS_SDK__MENU_Wardrobe_HPP
#define UE4SS_SDK__MENU_Wardrobe_HPP

class U_MENU_Wardrobe_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_Wardrobe_ClassSelector_C* ClassSelector;
    UITM_Wardrobe_ItemSelector_C* ItemSelector_Left;
    UITM_Wardrobe_ItemSelector_C* ItemSelector_Right;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    UButton* ShuffleButton;
    UUI_RandomizeIcon_C* ShuffleIcon;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Armor;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_ArmorColor;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Beard;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_BeardColor;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_EyeBrows;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Head;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Moustache;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SideBurns;
    UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SkinColor;
    UITM_Wardrobe_ItemSlot_VictoryMoves_C* Slot_VictoryMoves;
    UVerticalBox* SlotsLeftBox;
    UVerticalBox* SlotsRightBox;
    UPlayerCharacterID* PlayerCharacter;
    TArray<UITM_Wardrobe_ItemSlot_Base_C*> ItemSlots;
    float FadeInAnimTime;

    void EquipRandomItems(TArray<UITM_Wardrobe_ItemSlot_Base_C*> OrderedList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array);
    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, UWidget* CallFunc_GetChildAt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue_1, UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void CheckArmorMasteryUnlocks(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<UItemID*>& CallFunc_GetItemList_ReturnValue, UItemID* CallFunc_Array_Get_Item);
    void InitSlotColumn(UPanelWidget* InBox, UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide, UVerticalBoxSlot* VerticalSlot, int32 Index, UITM_Wardrobe_ItemSlot_Base_C* Widget, float Temp_float_Variable, float Temp_float_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, float K2Node_Select_Default, UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void RefreshSlots(UPlayerCharacterID* ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void ReleaseRenderTargets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyInput_ReturnValue, bool CallFunc_HandleKeyInput_Handled);
    void GetCharacter(UPlayerCharacter*& Character, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
    void Refresh();
    void SetCharacter(UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void Construct();
    void OnEquippedChanged_Event_0();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Wardrobe(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, OnEquippedChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_Character, UPlayerCharacter* CallFunc_GetCharacter_Character_1, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_ComponentBoundEvent_Character, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacter, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array, TArray<UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array_1, UPlayerCharacter* CallFunc_GetCharacter_Character_2, TArray<UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array_2, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue_1);
}

#endif
