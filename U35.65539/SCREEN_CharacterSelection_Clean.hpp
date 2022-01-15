#ifndef UE4SS_SDK_SCREEN_CharacterSelection_Clean_HPP
#define UE4SS_SDK_SCREEN_CharacterSelection_Clean_HPP

class USCREEN_CharacterSelection_Clean_C : USCREEN_CharacterSelection_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* ButtonsGoHere;
    UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect;
    UTextBlock* ClassDescription;
    UBasic_ButtonScalable2_C* CloseButton;
    UUI_AdvancedLabel_C* Controller_Left;
    UUI_AdvancedLabel_C* Controller_Right;
    UBasic_Menu_SmallWindowWithHeader_C* DescriptionWindow;
    UITEM_CharacterSelectMovie_C* ITEM_CharacterSelectMovie;
    UITM_Challenge_InfoBox_C* ITM_Challenge_InfoBox;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    USafeZone* PlatformSafeZone;
    UScreen_CharacterInfo_C* Screen_CharacterInfo;
    UHorizontalBox* SelectionBox_Active;
    UUI_AdvancedLabel_C* SelectionBox_Text;
    FSCREEN_CharacterSelection_Clean_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    AFSDPlayerState* PlayerState;
    bool DoSelectedShouts;
    bool DoMovie;
    bool AllowBack;
    UPlayerCharacterID* InitialCharacterClassOnShow;
    bool IsBeingClosed;
    bool OnCloseMenuHasBeenHandled;

    void HighlightClassChallenges(TArray<UObject*>& assetReferences, bool ShouldHighlight, USeasonChallenge* challenge, TArray<UPlayerCharacterID*> CharacterIds);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void OnCloseMenuReleased(bool& Handled);
    UPlayerCharacterID* GetSelectedClass(UGameData* CallFunc_GetFSDGameData_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue);
    void OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE();
    void OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE();
    void Construct();
    void BackPressed();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnSelectedCharacterChanged_Event(TSubclassOf<UPlayerCharacter> NewCharacter);
    void PreConstruct(bool IsDesignTime);
    void UpdateCharacterDescription(UPlayerCharacterID* CharacterClass);
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void OnShown();
    void OnClosed();
    void CreateMovie();
    void StopMovie();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void OnNewLoadout();
    void Show();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature(UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature(UPlayerCharacterID* Character);
    void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, NewLoadoutSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, bool Temp_bool_Variable, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, bool K2Node_Event_IsDesignTime, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, FSlateColor K2Node_MakeStruct_SlateColor, const FText CallFunc_GetLongDescription_ReturnValue, const FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Event_NewVisibility, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_2, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsOnSpaceRig_OnSpaceRig, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsOnSpaceRig_OnSpaceRig_1, bool CallFunc_Not_PreBool_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetPreventLatejoinCharacterDuplication_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsOnSpaceRig_OnSpaceRig_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, EmptyOnlineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable_1, OnChallengeHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, ESlateVisibility K2Node_Select_Default_1, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void CharacterSelected__DelegateSignature();
}

#endif
