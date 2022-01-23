#ifndef UE4SS_SDK_WND_CharacterPromotions_HPP
#define UE4SS_SDK_WND_CharacterPromotions_HPP

class UWND_CharacterPromotions_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* ButtonsGoHere;
    class UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UUI_AdvancedLabel_C* Controller_Left;
    class UUI_AdvancedLabel_C* Controller_Right;
    class UITM_DragRotateCharacter_C* ITM_DragRotateCharacter;
    class ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    class UScreen_CharacterInfo_C* Screen_CharacterInfo;
    class UUI_RetirementInfo_C* WND_RetirementInfo;
    FWND_CharacterPromotions_CCharacterSelected CharacterSelected;
    void CharacterSelected();
    class AFSDPlayerState* PlayerState;
    bool DoSelectedShouts;
    bool AllowBack;
    TSubclassOf<class APlayerCharacter> InitialCharacterClassOnShow;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void SetRetirementInfo(class UPlayerCharacterID* Character, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_HasCharacterCompletedRetirementCampaign_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void RetireCharacter(class UPlayerCharacterID* playerClass, class UWND_CharacterRetirement_C* Window, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWND_CharacterRetirement_C* CallFunc_OpenWindowFromClass_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void OnCloseMenuReleased(bool& Handled);
    TSubclassOf<class APlayerCharacter> GetSelectedClass(class UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetDefaultCharacter_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue);
    void Construct();
    void BackPressed();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnSelectedCharacterChanged_Event(TSubclassOf<class APlayerCharacter> NewCharacter);
    void OnShown();
    void Show();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_4_OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void ExecuteUbergraph_WND_CharacterPromotions(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FExecuteUbergraph_WND_CharacterPromotionsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource CallFunc_GetInputSource_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, ESlateVisibility K2Node_Select_Default, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, bool CallFunc_IsVisible_ReturnValue, FExecuteUbergraph_WND_CharacterPromotionsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_3, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_2, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_2, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsOnSpaceRig_OnSpaceRig, bool CallFunc_Not_PreBool_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetPreventLatejoinCharacterDuplication_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnSpaceRig_OnSpaceRig_1, class UPlayerCharacterID* K2Node_ComponentBoundEvent_Character);
    void CharacterSelected__DelegateSignature();
};

#endif
