#ifndef UE4SS_SDK_ITM_Craft_ItemBox_HPP
#define UE4SS_SDK_ITM_Craft_ItemBox_HPP

class UITM_Craft_ItemBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Click;
    UWidgetAnimation* Hover;
    UImage* Arrow;
    UBorder* BG;
    UBorder* Border_0;
    UBorder* Border_123;
    UBorder* Brackets;
    UBTN_UnlockItem_C* BTN_UnlockItem;
    UButton* Button_1;
    UTextBlock* DATA_ItemDescription;
    UTextBlock* DATA_ItemName;
    UITM_Craft_ItemIcon_C* ITEM_Crafting_ItemIcon;
    UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    UHorizontalBox* ResourceHolder;
    UTextBlock* Text_UsesEquippedPaintjob;
    TScriptInterface<ICraftable> Item;
    TSubclassOf<APlayerCharacter> Character;
    bool IsHovering;

    void FreeRenderTarget();
    void CreateResources(InterfaceProperty Item, TArray<FCraftingCost> Resources, TArray<FCraftingCost>& CallFunc_GetResourceCost_ReturnValue, int32 CallFunc_GetCraftingCreditsCost_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, FCraftingCost K2Node_MakeStruct_CraftingCost, int32 Temp_int_Loop_Counter_Variable, FCraftingCost CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FMargin K2Node_MakeStruct_Margin, UITM_Craft_ResourceSmall_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, UITM_Craft_ResourceSmall_C* CallFunc_AddChildToHorizontalBoxEx_ReturnValue);
    void SetCostColor();
    void SetRankRequirements();
    void SetTextAndIcon(const FText CallFunc_GetCraftableDescription_ReturnValue, const FText CallFunc_GetCraftableName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue);
    void SetCanUnlock(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void SetData(InterfaceProperty Item, TSubclassOf<UPlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Update();
    void ExecuteUbergraph_ITM_Craft_ItemBox(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, InterfaceProperty K2Node_CustomEvent_Item, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_character, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_IsOwned_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool CallFunc_IsOwned_ReturnValue_1, UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_2, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, UWindowWidget* CallFunc_GetCrafting_Widget, U_MENU_Crafting_C* K2Node_DynamicCast_As_MENU_Crafting, bool K2Node_DynamicCast_bSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, ESlateVisibility Temp_byte_Variable_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_3, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController_1, bool CallFunc_IsEquipped_ReturnValue, UWindowWidget* CallFunc_GetCrafting_Widget_1, U_MENU_Crafting_C* K2Node_DynamicCast_As_MENU_Crafting_1, bool K2Node_DynamicCast_bSuccess_3, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController_2, UWindowWidget* CallFunc_GetPopupCrafting_Widget, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UWND_Crafting_Unlock_C* K2Node_DynamicCast_AsWND_Crafting_Unlock, bool K2Node_DynamicCast_bSuccess_4, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController_3, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_4, UGameData* CallFunc_GetFSDGameData_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, TArray<UObject*>& K2Node_MakeArray_Array, ESlateVisibility Temp_byte_Variable_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor CallFunc_MenuColors_OutputColor_5, FSlateColor K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, UHeadVanityItem* K2Node_DynamicCast_AsHead_Vanity_Item, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_1);
}

#endif
