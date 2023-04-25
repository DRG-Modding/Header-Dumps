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

    void HighlightClassChallenges(TArray<class UObject*>& AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnCloseMenuReleased(bool& Handled);
    class UPlayerCharacterID* GetSelectedClass();
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
    void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32 EntryPoint);
    void CharacterSelected__DelegateSignature();
};

#endif
