#ifndef UE4SS_SDK_ITM_CharacterSwitcherBar_HPP
#define UE4SS_SDK_ITM_CharacterSwitcherBar_HPP

class UITM_CharacterSwitcherBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    UBasic_ButtonScalable2_C* BTN_Switch;
    UTextBlock* DATA_CharacterLevel;
    UTextBlock* DATA_ClassName;
    UBorder* HeaderBG;
    UImage* Image_3;
    UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    UBasic_ScrollArrow_C* ScrollLeft;
    UBasic_ScrollArrow_C* ScrollRight;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    UPlayerCharacterID* CurrentCharacter;
    FITM_CharacterSwitcherBar_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<UPlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;

    FEventReply Handle Key Input(const FKeyEvent& InKeyEventbool& Handled, bool CallFunc_IsKeyEventAction_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1);
    void CheckArmorUnlocks(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<UItemID*>& CallFunc_GetItemList_ReturnValue, UItemID* CallFunc_Array_Get_Item);
    void GotoNext(bool Next, bool PlaySound, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UPlayerCharacterID* CallFunc_GetNextCharacter_Character, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, UPlayerCharacterID* CallFunc_GetPrevCharacter_Character);
    void SetSwitchButtonState(TSubclassOf<UPlayerCharacter> NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetSwitchToMessage_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetPrevCharacter(UPlayerCharacterID*& Character, TArray<UPlayerCharacterID*> Heroes, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetNextCharacter(UPlayerCharacterID*& Character, TArray<UPlayerCharacterID*> Heroes, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void SetCharacterInfo(UPlayerCharacterID* playerClass, int32 CallFunc_GetHeroLevel_ReturnValue, const FText CallFunc_GetName_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<UPlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void UpdateNotification();
    void SetData(UPlayerCharacterID* Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterSwitcherBar(int32 EntryPoint, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FSlateColor K2Node_MakeStruct_SlateColor, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerCharacterID* K2Node_CustomEvent_character, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
}

#endif
