#ifndef UE4SS_SDK_WND_CharacterPromotions_HPP
#define UE4SS_SDK_WND_CharacterPromotions_HPP

class UWND_CharacterPromotions_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* ButtonsGoHere;
    UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect;
    UBasic_ButtonScalable2_C* CloseButton;
    UUI_AdvancedLabel_C* Controller_Left;
    UUI_AdvancedLabel_C* Controller_Right;
    UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    UScreen_CharacterInfo_C* Screen_CharacterInfo;
    UUI_RetirementInfo_C* WND_RetirementInfo;
    FWND_CharacterPromotions_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    AFSDPlayerState* PlayerState;
    bool DoSelectedShouts;
    bool AllowBack;
    TSubclassOf<APlayerCharacter> InitialCharacterClassOnShow;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void SetRetirementInfo(UPlayerCharacterID* Character, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_HasCharacterCompletedRetirementCampaign_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void RetireCharacter(UPlayerCharacterID* playerClass, UWND_CharacterRetirement_C* Window, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWND_CharacterRetirement_C* CallFunc_OpenWindowFromClass_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void OnCloseMenuReleased(bool& Handled);
    TSubclassOf<APlayerCharacter> GetSelectedClass(UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetDefaultCharacter_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, TSubclassOf<UPlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue);
    void Construct();
    void BackPressed();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnSelectedCharacterChanged_Event(TSubclassOf<UPlayerCharacter> NewCharacter);
    void OnShown();
    void Show();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnRetirementHovered__DelegateSignature(UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnRetirementUnhovered__DelegateSignature(UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature(UPlayerCharacterID* Character);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterHovered__DelegateSignature(UPlayerCharacterID* Character);
    void ExecuteUbergraph_WND_CharacterPromotions(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, ESlateVisibility K2Node_Select_Default, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, bool CallFunc_IsVisible_ReturnValue, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_3, UBP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_2, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_2, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsOnSpaceRig_OnSpaceRig, bool CallFunc_Not_PreBool_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetPreventLatejoinCharacterDuplication_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnSpaceRig_OnSpaceRig_1, UPlayerCharacterID* K2Node_ComponentBoundEvent_Character);
    void CharacterSelected__DelegateSignature();
}

#endif
