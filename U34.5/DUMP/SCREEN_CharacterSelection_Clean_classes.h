// WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C
// Size: 0x32a (Inherited: 0x288)
struct USCREEN_CharacterSelection_Clean_C : USCREEN_CharacterSelection_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	UNamedSlot* ButtonsGoHere; // 0x290(0x08)
	UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect; // 0x298(0x08)
	UTextBlock* ClassDescription; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* CloseButton; // 0x2a8(0x08)
	UImage* ControllerButton; // 0x2b0(0x08)
	UImage* ControllerLeft; // 0x2b8(0x08)
	UImage* ControllerRight; // 0x2c0(0x08)
	UBasic_Menu_SmallWindowWithHeader_C* DescriptionWindow; // 0x2c8(0x08)
	UITEM_CharacterSelectMovie_C* ITEM_CharacterSelectMovie; // 0x2d0(0x08)
	UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2d8(0x08)
	UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2e0(0x08)
	ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x2e8(0x08)
	UScreen_CharacterInfo_C* Screen_CharacterInfo; // 0x2f0(0x08)
	UHorizontalBox* SelectionBox_Active; // 0x2f8(0x08)
	FMulticastInlineDelegate CharacterSelected; // 0x300(0x10)
	AFSDPlayerState* PlayerState; // 0x310(0x08)
	bool DoSelectedShouts; // 0x318(0x01)
	bool DoMovie; // 0x319(0x01)
	bool AllowBack; // 0x31a(0x01)
	APlayerCharacter* InitialCharacterClassOnShow; // 0x320(0x08)
	bool IsBeingClosed; // 0x328(0x01)
	bool OnCloseMenuHasBeenHandled; // 0x329(0x01)

	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnCloseMenuReleased(bool Handled);
	APlayerCharacter* GetSelectedClass();
	void OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE();
	void OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE();
	void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature(APlayerCharacter* Character);
	void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature(APlayerCharacter* Character);
	void OnInputSourceChanged(enum class EFSDInputSource InputSource);
	void OnSelectedCharacterChanged_Event(APlayerCharacter* NewCharacter);
	void PreConstruct(bool IsDesignTime);
	void UpdateCharacterDescription(APlayerCharacter* CharacterClass);
	void ReceiveNewVisibility(enum class ESlateVisibility NewVisibility);
	void OnShown();
	void OnClosed();
	void BackPressed();
	void CreateMovie();
	void Construct();
	void StopMovie();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ReceiveCloseCommand();
	void OnNewLoadout();
	void Show();
	void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32_t EntryPoint);
	void CharacterSelected__DelegateSignature();
};

