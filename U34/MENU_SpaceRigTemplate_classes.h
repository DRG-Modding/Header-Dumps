// WidgetBlueprintGeneratedClass MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C
// Size: 0x318 (Inherited: 0x230)
struct UMENU_SpaceRigTemplate_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIn; // 0x238(0x08)
	struct UImage* BackForeground; // 0x240(0x08)
	struct UNamedSlot* BottomCenter; // 0x248(0x08)
	struct UNamedSlot* BottomLeft; // 0x250(0x08)
	struct UNamedSlot* ButtonsGoHere; // 0x258(0x08)
	struct UBasic_ButtonScalable2_C* CloseButton; // 0x260(0x08)
	struct UITM_TopBar_ResourceCounter_C* CreditsCounter; // 0x268(0x08)
	struct UITM_TopBar_CharacterIcon_C* ITEM_CharacterInfo; // 0x270(0x08)
	struct UITM_TopBar_PlayerRank_C* ITEM_TopBar_PlayerRank; // 0x278(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x280(0x08)
	struct UITM_ServerList_Entry_PlayerIcons_C* ITM_ServerList_Entry_PlayerIcons; // 0x288(0x08)
	struct UITM_TopBar_CharacterLevel_C* ITM_TopBar_CharacterLevel; // 0x290(0x08)
	struct UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter_C_2; // 0x298(0x08)
	struct UITM_TopBar_Resources_C* ITM_TopBar_Resources; // 0x2a0(0x08)
	struct UNamedSlot* LoadoutGoesHere; // 0x2a8(0x08)
	struct ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x2b0(0x08)
	struct UNamedSlot* MenuGoesHere; // 0x2b8(0x08)
	struct UBorder* ResourceBG; // 0x2c0(0x08)
	bool ShowCloseButton; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct AFSDPlayerState* PlayerState; // 0x2d0(0x08)
	bool ShowBackgroundBlur; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct FMulticastInlineDelegate OnClosedClicked; // 0x2e0(0x10)
	struct TArray<struct UResourceData*> AdditionalResources; // 0x2f0(0x10)
	bool IsCloseBack; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct FMulticastInlineDelegate OnBackClicked; // 0x308(0x10)

	void IsCloseButtonVisible(bool Visible); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
	void SetBackMode(bool Close Is Back); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
	void UpdatePlayerCount(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
	void SetCloseButtonVisible(bool ShowCloseButton); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
	void PreConstruct(bool IsDesignTime); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
	void Construct(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
	void Refresh(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	void OnCreditsChanged_Event(int32_t Credits); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
	void OnPlayerJoined_Event(struct AFSDPlayerState* PlayerState); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
	void OnSelectedCharacterChanged_Event(struct APlayerCharacter* NewCharacter); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
	void Setup Player Events(struct APlayerState* NewPlayer); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
	void OnSelectedCharacterChanged(struct APlayerCharacter* NewCharacter); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
	void Click Close Button(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
	void PlayFadeIn(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
	void FadeFinished(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.FadeFinished
	void ExecuteUbergraph_MENU_SpaceRigTemplate(int32_t EntryPoint); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
	void OnBackClicked__DelegateSignature(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
	void OnClosedClicked__DelegateSignature(); // Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
};

