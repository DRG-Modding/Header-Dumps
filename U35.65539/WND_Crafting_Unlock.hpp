#ifndef UE4SS_SDK_WND_Crafting_Unlock_HPP
#define UE4SS_SDK_WND_Crafting_Unlock_HPP

class UWND_Crafting_Unlock_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* SwitchToEquip;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UBasic_Menu_MinimalWindow_C* buttons;
    UTextBlock* DATA_ItemName;
    UHorizontalBox* HorizontalBoxResources;
    UImage* ImageSmoke;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UBasic_Menu_MinimalWindow_C* MainWindow;
    UTextBlock* TXT_Equip;
    UTextBlock* TXT_Purchase;
    UVerticalBox* WindowBox_Buy;
    TScriptInterface<ICraftable> Item;
    AFSDPlayerState* Player;
    UAudioComponent* ShoutAudioComponent;
    TSubclassOf<APlayerCharacter> Character;
    bool CanCraft;
    bool IsBuyPopUp;

    void CreateResources(TArray<FCraftingCost> Resources, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_Craft_Resource_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetCraftingCreditsCost_ReturnValue, TArray<FCraftingCost>& CallFunc_GetResourceCost_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FCraftingCost K2Node_MakeStruct_CraftingCost, UPanelSlot* CallFunc_AddChild_ReturnValue, FCraftingCost CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsVisible_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FEventReply CallFunc_Handled_ReturnValue);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Close();
    void Cancel();
    void Select();
    void DoEquipMenu();
    void PreConstruct(bool IsDesignTime);
    void Show(InterfaceProperty Item, UFSDPlayerState* Player, TSubclassOf<UPlayerCharacter> Character);
    void ExecuteUbergraph_WND_Crafting_Unlock(int32 EntryPoint, FText Temp_text_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_CanCraft_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UAudioComponent* CallFunc_PlayPitched_ReturnValue, FText Temp_text_Variable_1, const FText CallFunc_GetCraftableName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, FText K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess_1, UVanityItem* K2Node_DynamicCast_AsVanity_Item_1, bool K2Node_DynamicCast_bSuccess_2, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsEquipped_ReturnValue, FText Temp_text_Variable_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_2, TArray<UVanityItem*>& CallFunc_GetUnLockedVanityItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UVanityItem* K2Node_DynamicCast_AsVanity_Item_2, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Conv_IntToFloat_ReturnValue, EVanitySlot CallFunc_GetVanitySlot_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UFSDPlayerController* CallFunc_GetLocalFSDPlayerController_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable_2, UVanityItem* K2Node_DynamicCast_AsVanity_Item_3, bool K2Node_DynamicCast_bSuccess_4, FText K2Node_Select_Default_2, InterfaceProperty K2Node_CustomEvent_Item, UFSDPlayerState* K2Node_CustomEvent_player, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_character, bool CallFunc_CanCraft_ReturnValue_1, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController, UWindowWidget* CallFunc_GetCrafting_Widget, U_MENU_Crafting_C* K2Node_DynamicCast_As_MENU_Crafting, bool K2Node_DynamicCast_bSuccess_5, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UBP_SR_PlayerControllerBase_C* CallFunc_GetSRController_SRController_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UWindowWidget* CallFunc_GetCrafting_Widget_1, APawn* CallFunc_K2_GetPawn_ReturnValue_1, U_MENU_Crafting_C* K2Node_DynamicCast_As_MENU_Crafting_1, bool K2Node_DynamicCast_bSuccess_6, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_7, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue);
}

#endif
