#ifndef UE4SS_SDK_MENU_SpaceRigTemplate_HPP
#define UE4SS_SDK_MENU_SpaceRigTemplate_HPP

class UMENU_SpaceRigTemplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHideTopBar;
    class UWidgetAnimation* FadeIn;
    class UImage* BackForeground;
    class UBasic_Popup_YesNoPrompt_C* Basic_Popup_YesNoPrompt;
    class UNamedSlot* BottomCenter;
    class UNamedSlot* BottomLeft;
    class UNamedSlot* ButtonsGoHere;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UITM_TopBar_CharacterIcon_C* ITEM_CharacterInfo;
    class UITM_TopBar_PlayerRank_C* ITEM_TopBar_PlayerRank;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UITM_ServerList_Entry_PlayerIcons_C* ITM_ServerList_Entry_PlayerIcons;
    class UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel;
    class UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter_C_1;
    class UITM_TopBar_Resources_C* ITM_TopBar_Resources;
    class UNamedSlot* LoadoutGoesHere;
    class ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    class UNamedSlot* MenuGoesHere;
    class USafeZone* PlatformSafeZone;
    class UUI_PlayerSpeaking_List_C* PlayerSpeaking_List;
    class UBorder* ResourceBG;
    bool ShowCloseButton;
    class AFSDPlayerState* PlayerState;
    bool ShowBackgroundBlur;
    FMENU_SpaceRigTemplate_COnClosedClicked OnClosedClicked;
    void OnClosedClicked();
    TArray<class UResourceData*> AdditionalResources;
    bool IsCloseBack;
    FMENU_SpaceRigTemplate_COnBackClicked OnBackClicked;
    void OnBackClicked();
    bool ShowPlayersSpeaking;
    float PlayersSpeakingOffsetY;

    void IsCloseButtonVisible(bool& Visible);
    void SetBackMode(bool Close Is Back);
    void UpdatePlayerCount();
    void SetCloseButtonVisible(bool ShowCloseButton);
    void Finished_ED75AEDE411AF062E427D788A257F78D();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void OnCreditsChanged_Event(int32 Credits);
    void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void OnSelectedCharacterChanged_Event(TSubclassOf<class APlayerCharacter> NewCharacter);
    void Setup Player Events(class APlayerState* NewPlayer);
    void OnSelectedCharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void Click Close Button();
    void PlayFadeIn();
    void AnimateTopBarVisible(bool InVisible);
    void ExecuteUbergraph_MENU_SpaceRigTemplate(int32 EntryPoint);
    void OnBackClicked__DelegateSignature();
    void OnClosedClicked__DelegateSignature();
};

#endif
