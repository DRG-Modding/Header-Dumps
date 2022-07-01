#ifndef UE4SS_SDK_WND_CharacterPromotions_HPP
#define UE4SS_SDK_WND_CharacterPromotions_HPP

class UWND_CharacterPromotions_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimMoveIn;
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
    class UPlayerCharacterID* InitialCharacterClassOnShow;
    FTimerHandle MoveOutTimer;
    bool MenuOpened;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Set Retirement Info(class UPlayerCharacterID* Character);
    void RetireCharacter(class UPlayerCharacterID* playerClass);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnCloseMenuReleased(bool& Handled);
    void Construct();
    void BackPressed();
    void OnSelectedCharacterChanged_Event(TSubclassOf<class APlayerCharacter> NewCharacter);
    void OnShown();
    void Show();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnRetireCharacter__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ReceiveCloseCommand();
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_1_OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterUnhovered__DelegateSignature(class UPlayerCharacterID* characterID);
    void OnClosed();
    void BeginHover(class UPlayerCharacterID* Character);
    void EndHover();
    void StartMoveOut();
    void ExecuteUbergraph_WND_CharacterPromotions(int32 EntryPoint);
    void CharacterSelected__DelegateSignature();
};

#endif
