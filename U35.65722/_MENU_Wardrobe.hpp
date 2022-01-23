#ifndef UE4SS_SDK__MENU_Wardrobe_HPP
#define UE4SS_SDK__MENU_Wardrobe_HPP

class U_MENU_Wardrobe_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_Wardrobe_ClassSelector_C* ClassSelector;
    class UITM_Wardrobe_ItemSelector_C* ItemSelector_Left;
    class UITM_Wardrobe_ItemSelector_C* ItemSelector_Right;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRig;
    class UButton* ShuffleButton;
    class UUI_RandomizeIcon_C* ShuffleIcon;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Armor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_ArmorColor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Beard;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_BeardColor;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_EyeBrows;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Head;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Moustache;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SideBurns;
    class UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SkinColor;
    class UITM_Wardrobe_ItemSlot_VictoryMoves_C* Slot_VictoryMoves;
    class UVerticalBox* SlotsLeftBox;
    class UVerticalBox* SlotsRightBox;
    class UPlayerCharacterID* PlayerCharacter;
    TArray<class UITM_Wardrobe_ItemSlot_Base_C*> ItemSlots;
    float FadeInAnimTime;

    void EquipRandomItems(TArray<class UITM_Wardrobe_ItemSlot_Base_C*> OrderedList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array);
    void PlayIntroAnimations(int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void CheckArmorMasteryUnlocks(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<class UItemID*>& CallFunc_GetItemList_ReturnValue, class UItemID* CallFunc_Array_Get_Item);
    void InitSlotColumn(class UPanelWidget* InBox, class UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide, class UVerticalBoxSlot* VerticalSlot, int32 Index, class UITM_Wardrobe_ItemSlot_Base_C* Widget, float Temp_float_Variable, float Temp_float_Variable_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, int32 Temp_int_Variable, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, float K2Node_Select_Default, class UITM_Wardrobe_ItemSlot_Base_C* K2Node_DynamicCast_AsITM_Wardrobe_Item_Slot_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void RefreshSlots(class UPlayerCharacterID* ID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void ReleaseRenderTargets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UITM_Wardrobe_ItemSlot_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyInput_ReturnValue, bool CallFunc_HandleKeyInput_Handled);
    void GetCharacter(class APlayerCharacter*& Character, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
    void Refresh();
    void SetCharacter(class UPlayerCharacterID* PlayerCharacter);
    void OnClosed();
    void Construct();
    void OnEquippedChanged_Event_0();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph__MENU_Wardrobe(int32 EntryPoint, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FExecuteUbergraph__MENU_WardrobeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_Character, class APlayerCharacter* CallFunc_GetCharacter_Character_1, class UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_ComponentBoundEvent_Character, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacter, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array, TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array_1, class APlayerCharacter* CallFunc_GetCharacter_Character_2, TArray<class UITM_Wardrobe_ItemSlot_Base_C*>& K2Node_MakeArray_Array_2, class UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue_1);
};

#endif
