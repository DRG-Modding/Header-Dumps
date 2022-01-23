#ifndef UE4SS_SDK_MENU_SpaceRigTemplate_HPP
#define UE4SS_SDK_MENU_SpaceRigTemplate_HPP

class UMENU_SpaceRigTemplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UImage* BackForeground;
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
    void SetBackMode(bool Close Is Back, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default, FText K2Node_Select_Default_1, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1);
    void UpdatePlayerCount(TArray<class UPlayerCharacterID*> Players, TArray<class UITM_TopBar_PlayerCounter_C*> PlayerIcons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerState* CallFunc_Array_Get_Item, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void SetCloseButtonVisible(bool ShowCloseButton, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
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
    void FadeFinished();
    void ExecuteUbergraph_MENU_SpaceRigTemplate(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_MENU_SpaceRigTemplateK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, int32 K2Node_CustomEvent_Credits, float CallFunc_Conv_IntToFloat_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UResourceData* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter_1, class APlayerState* K2Node_CustomEvent_NewPlayer, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_2, bool K2Node_DynamicCast_bSuccess_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, bool CallFunc_GetShowUIAnimations_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void OnBackClicked__DelegateSignature();
    void OnClosedClicked__DelegateSignature();
};

#endif
