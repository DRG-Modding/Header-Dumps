#ifndef UE4SS_SDK_MENU_SpaceRigTemplate_HPP
#define UE4SS_SDK_MENU_SpaceRigTemplate_HPP

class UMENU_SpaceRigTemplate_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UImage* BackForeground;
    UNamedSlot* BottomCenter;
    UNamedSlot* BottomLeft;
    UNamedSlot* ButtonsGoHere;
    UBasic_ButtonScalable2_C* CloseButton;
    UITM_TopBar_ResourceCounter_C* CreditsCounter;
    UITM_TopBar_CharacterIcon_C* ITEM_CharacterInfo;
    UITM_TopBar_PlayerRank_C* ITEM_TopBar_PlayerRank;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UITM_ServerList_Entry_PlayerIcons_C* ITM_ServerList_Entry_PlayerIcons;
    UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel;
    UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter_C_1;
    UITM_TopBar_Resources_C* ITM_TopBar_Resources;
    UNamedSlot* LoadoutGoesHere;
    ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown;
    UNamedSlot* MenuGoesHere;
    USafeZone* PlatformSafeZone;
    UUI_PlayerSpeaking_List_C* PlayerSpeaking_List;
    UBorder* ResourceBG;
    bool ShowCloseButton;
    AFSDPlayerState* PlayerState;
    bool ShowBackgroundBlur;
    FMENU_SpaceRigTemplate_COnClosedClicked OnClosedClicked;
    void OnClosedClicked();
    TArray<UResourceData*> AdditionalResources;
    bool IsCloseBack;
    FMENU_SpaceRigTemplate_COnBackClicked OnBackClicked;
    void OnBackClicked();
    bool ShowPlayersSpeaking;
    float PlayersSpeakingOffsetY;

    void IsCloseButtonVisible(bool& Visible);
    void SetBackMode(bool Close Is Back, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default, FText K2Node_Select_Default_1, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1);
    void UpdatePlayerCount(TArray<UPlayerCharacterID*> Players, TArray<UITM_TopBar_PlayerCounter_C*> PlayerIcons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UPlayerState* CallFunc_Array_Get_Item, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void SetCloseButtonVisible(bool ShowCloseButton, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void OnCreditsChanged_Event(int32 Credits);
    void OnPlayerJoined_Event(UFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(UFSDPlayerState* PlayerState);
    void OnSelectedCharacterChanged_Event(TSubclassOf<UPlayerCharacter> NewCharacter);
    void Setup Player Events(UPlayerState* NewPlayer);
    void OnSelectedCharacterChanged(TSubclassOf<UPlayerCharacter> NewCharacter);
    void Click Close Button();
    void PlayFadeIn();
    void FadeFinished();
    void ExecuteUbergraph_MENU_SpaceRigTemplate(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, CreditsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, SelectedCharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, int32 K2Node_CustomEvent_Credits, float CallFunc_Conv_IntToFloat_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, UResourceData* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter_1, UPlayerState* K2Node_CustomEvent_NewPlayer, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_2, bool K2Node_DynamicCast_bSuccess_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetShowUIAnimations_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void OnBackClicked__DelegateSignature();
    void OnClosedClicked__DelegateSignature();
}

#endif
