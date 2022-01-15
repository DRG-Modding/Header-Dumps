#ifndef UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP

class UITM_Wardrobe_ClassSelector_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    UBasic_ButtonScalable2_C* BTN_Switch;
    UTextBlock* DATA_CharacterLevel;
    UTextBlock* DATA_ClassName;
    UBorder* HeaderBG;
    UImage* Image_3;
    UITM_ItemUnlockedIcon_C* NotificationIcon;
    UBasic_ScrollArrow_C* ScrollLeft;
    UBasic_ScrollArrow_C* ScrollRight;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_1;
    UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    UPlayerCharacterID* CurrentCharacter;
    FITM_Wardrobe_ClassSelector_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<UPlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;
    UObject* CategoryID;
    bool UpdatePreviewCharacter;
    bool ShowOtherClassesNotifications;

    FEventReply HandleKeyInput(FKeyEvent& InKeyEventbool& Handled, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, bool CallFunc_IsKeyEventActionAny_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1);
    void SetSwitchButtonState(bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetSwitchToMessage_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FText CallFunc_Format_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetPrevCharacter(UPlayerCharacterID*& Character, TArray<UPlayerCharacterID*> Heroes, UGameData* CallFunc_GetFSDGameData_ReturnValue, const TArray<UPlayerCharacterID*>& CallFunc_GetRankedHeroIDs_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetNextCharacter(UPlayerCharacterID*& Character, TArray<UPlayerCharacterID*> Heroes, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const TArray<UPlayerCharacterID*>& CallFunc_GetRankedHeroIDs_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetBPGameState(UBP_GameState_C*& GameState, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UBP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess);
    void SetCharacterInfo(UPlayerCharacterID* characterID, int32 CallFunc_GetHeroLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, const FText CallFunc_GetName_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetData(UPlayerCharacterID* Character, UObject* CategoryID);
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<UPlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateNotification();
    void ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_character, UObject* K2Node_CustomEvent_CategoryID, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerCharacterID* CallFunc_GetNextCharacter_Character, UPlayerCharacterID* CallFunc_GetPrevCharacter_Character, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess_1, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, TArray<UObject*>& K2Node_MakeArray_Array, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<UPlayerCharacter> Character);
}

#endif
