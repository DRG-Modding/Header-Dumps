#ifndef UE4SS_SDK__MENU_Crafting_HPP
#define UE4SS_SDK__MENU_Crafting_HPP

class U_MENU_Crafting_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ScrollBarBox_C* BasicScrollBarBox;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_C_0;
    UBlurBackground_C* BlurBackground;
    UITM_Wardrobe_ClassSelector_C* ClassSelector;
    UTextBlock* DATA_CategoryName;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_ItemCategories_C* ITM_ItemCategories;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UVerticalBox* ScrollHolder;
    EVanitySlot CurrentSlot;
    UBTN_ItemCategory_C* ActiveButton;
    UPlayerCharacterID* Character;

    void SetPreviewItem(InterfaceProperty Item, bool Show, UFSDPlayerState* PlayerState, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UArmorVanityItem* K2Node_DynamicCast_AsArmor_Vanity_Item, bool K2Node_DynamicCast_bSuccess);
    void GetNextAvailableRank(TArray<UVanityItem*>& In Vanity Items, int32& VisibleRank, int32 IterRank, int32 PlayerRank, int32 NextRank, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FEventReply CallFunc_HandleKeyInput_ReturnValue, bool CallFunc_HandleKeyInput_Handled);
    void PrevGroup(bool K2Node_SwitchEnum_CmpSuccess);
    void NextGroup(bool K2Node_SwitchEnum_CmpSuccess);
    void ClearItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UITM_Craft_ItemBox_C* K2Node_DynamicCast_AsITM_Craft_Item_Box, bool K2Node_DynamicCast_bSuccess);
    void ShowItems(EVanitySlot Slot, int32 FilterRank, UFSDPlayerState* PlayerState, TArray<UVanityItem*> vanityItems, int32 Temp_int_Array_Index_Variable, EVanitySlot Temp_byte_Variable, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, FText CallFunc_MakeLiteralText_ReturnValue_4, FText CallFunc_MakeLiteralText_ReturnValue_5, FText CallFunc_MakeLiteralText_ReturnValue_6, FText CallFunc_MakeLiteralText_ReturnValue_7, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetNextAvailableRank_VisibleRank, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UVanityItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, InterfaceProperty K2Node_DynamicCast_AsCraftable, bool K2Node_DynamicCast_bSuccess_1, TArray<UVanityItem*>& CallFunc_GetVanityItems_ReturnValue, const FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, UBTN_ItemCategory_C* CallFunc_GetButton_Button, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UITM_Craft_ItemBox_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void Construct();
    void OnChanged(TSubclassOf<UPlayerCharacter> CharacterClass, int32 Level, float Progress);
    void PreviewItem(InterfaceProperty Item);
    void HidePreview(InterfaceProperty Target);
    void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
    void OnShown();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature();
    void Update();
    void BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature();
    void OnClosed();
    void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
    void ExecuteUbergraph__MENU_Crafting(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_CharacterClass, int32 K2Node_CustomEvent_Level, float K2Node_CustomEvent_progress, InterfaceProperty K2Node_CustomEvent_Item, InterfaceProperty K2Node_CustomEvent_Target, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_ComponentBoundEvent_Character, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, CharacterProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UVanityItem*>& CallFunc_GetUnLockedVanityItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, UITM_Craft_ItemBox_C* K2Node_DynamicCast_AsITM_Craft_Item_Box, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
