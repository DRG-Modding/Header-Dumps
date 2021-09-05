// WidgetBlueprintGeneratedClass MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C
// Size: 0x318 (Inherited: 0x230)
struct UMENU_SpaceRigTemplate_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UImage* BackForeground; // 0x240(0x08)
	UNamedSlot* BottomCenter; // 0x248(0x08)
	UNamedSlot* BottomLeft; // 0x250(0x08)
	UNamedSlot* ButtonsGoHere; // 0x258(0x08)
	UBasic_ButtonScalable2_C* CloseButton; // 0x260(0x08)
	UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x268(0x08)
	UITM_TopBar_CharacterIcon_C* ITEM_CharacterInfo; // 0x270(0x08)
	UITM_TopBar_PlayerRank_C* ITEM_TopBar_PlayerRank; // 0x278(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x280(0x08)
	UITM_ServerList_Entry_PlayerIcons_C* ITM_ServerList_Entry_PlayerIcons; // 0x288(0x08)
	UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel; // 0x290(0x08)
	UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter_C_2; // 0x298(0x08)
	UITM_TopBar_Resources_C* ITM_TopBar_Resources; // 0x2a0(0x08)
	UNamedSlot* LoadoutGoesHere; // 0x2a8(0x08)
	ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x2b0(0x08)
	UNamedSlot* MenuGoesHere; // 0x2b8(0x08)
	UBorder* ResourceBG; // 0x2c0(0x08)
	bool ShowCloseButton; // 0x2c8(0x01)
	AFSDPlayerState* PlayerState; // 0x2d0(0x08)
	bool ShowBackgroundBlur; // 0x2d8(0x01)
	FMulticastInlineDelegate OnClosedClicked; // 0x2e0(0x10)
	TArray<UResourceData*> AdditionalResources; // 0x2f0(0x10)
	bool IsCloseBack; // 0x300(0x01)
	FMulticastInlineDelegate OnBackClicked; // 0x308(0x10)

	void IsCloseButtonVisible(bool Visible);
	void SetBackMode(bool Close Is Back);
	void UpdatePlayerCount();
	void SetCloseButtonVisible(bool ShowCloseButton);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Refresh();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
	void OnCreditsChanged_Event(int32_t Credits);
	void OnPlayerJoined_Event(AFSDPlayerState* PlayerState);
	void OnPlayerLeave_Event(AFSDPlayerState* PlayerState);
	void OnSelectedCharacterChanged_Event(APlayerCharacter* NewCharacter);
	void Setup Player Events(APlayerState* NewPlayer);
	void OnSelectedCharacterChanged(APlayerCharacter* NewCharacter);
	void Click Close Button();
	void PlayFadeIn();
	void FadeFinished();
	void ExecuteUbergraph_MENU_SpaceRigTemplate(int32_t EntryPoint);
	void OnBackClicked__DelegateSignature();
	void OnClosedClicked__DelegateSignature();
};

