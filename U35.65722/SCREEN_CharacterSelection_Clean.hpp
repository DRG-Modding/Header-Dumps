#ifndef UE4SS_SDK_SCREEN_CharacterSelection_Clean_HPP
#define UE4SS_SDK_SCREEN_CharacterSelection_Clean_HPP

class USCREEN_CharacterSelection_Clean_C : public USCREEN_CharacterSelection_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ButtonsGoHere;
    class UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect;
    class UTextBlock* ClassDescription;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UUI_AdvancedLabel_C* Controller_Left;
    class UUI_AdvancedLabel_C* Controller_Right;
    class UBasic_Menu_SmallWindowWithHeader_C* DescriptionWindow;
    class UITEM_CharacterSelectMovie_C* ITEM_CharacterSelectMovie;
    class UITM_Challenge_InfoBox_C* ITM_Challenge_InfoBox;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar;
    class ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    class USafeZone* PlatformSafeZone;
    class UScreen_CharacterInfo_C* Screen_CharacterInfo;
    class UHorizontalBox* SelectionBox_Active;
    class UUI_AdvancedLabel_C* SelectionBox_Text;
    FSCREEN_CharacterSelection_Clean_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    class AFSDPlayerState* PlayerState;
    bool DoSelectedShouts;
    bool DoMovie;
    bool AllowBack;
    class UPlayerCharacterID* InitialCharacterClassOnShow;
    bool IsBeingClosed;
    bool OnCloseMenuHasBeenHandled;

    void HighlightClassChallenges(TArray<class UObject*>& assetReferences, bool ShouldHighlight, class USeasonChallenge* challenge, TArray<class UPlayerCharacterID*> CharacterIds);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void OnCloseMenuReleased(bool& Handled);
    class UPlayerCharacterID* GetSelectedClass(class UGameData* CallFunc_GetFSDGameData_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue);
    void OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE();
    void OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE();
    void Construct();
    void BackPressed();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnSelectedCharacterChanged_Event(TSubclassOf<class APlayerCharacter> NewCharacter);
    void PreConstruct(bool IsDesignTime);
    void UpdateCharacterDescription(class UPlayerCharacterID* CharacterClass);
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void OnShown();
    void OnClosed();
    void CreateMovie();
    void StopMovie();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void OnNewLoadout();
    void Show();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
    void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue_1, bool Temp_bool_Variable, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, bool K2Node_Event_IsDesignTime, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, class UPlayerCharacterID* K2Node_CustomEvent_CharacterClass, FSlateColor K2Node_MakeStruct_SlateColor, const FText CallFunc_GetLongDescription_ReturnValue, const FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, ESlateVisibility K2Node_Event_NewVisibility, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_2, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsOnSpaceRig_OnSpaceRig, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsOnSpaceRig_OnSpaceRig_1, bool CallFunc_Not_PreBool_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetPreventLatejoinCharacterDuplication_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsOnSpaceRig_OnSpaceRig_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable_1, FExecuteUbergraph_SCREEN_CharacterSelection_CleanK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, ESlateVisibility K2Node_Select_Default_1, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void CharacterSelected__DelegateSignature();
};

#endif
