// WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C
// Size: 0x32a (Inherited: 0x288)
struct USCREEN_CharacterSelection_Clean_C : USCREEN_CharacterSelection_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UNamedSlot* ButtonsGoHere; // 0x290(0x08)
	struct UCharSelect_HeroSelect_Clean_C* CharSelect_HeroSelect; // 0x298(0x08)
	struct UTextBlock* ClassDescription; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* CloseButton; // 0x2a8(0x08)
	struct UImage* ControllerButton; // 0x2b0(0x08)
	struct UImage* ControllerLeft; // 0x2b8(0x08)
	struct UImage* ControllerRight; // 0x2c0(0x08)
	struct UBasic_Menu_SmallWindowWithHeader_C* DescriptionWindow; // 0x2c8(0x08)
	struct UITEM_CharacterSelectMovie_C* ITEM_CharacterSelectMovie; // 0x2d0(0x08)
	struct UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x2d8(0x08)
	struct UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2e0(0x08)
	struct ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x2e8(0x08)
	struct UScreen_CharacterInfo_C* Screen_CharacterInfo; // 0x2f0(0x08)
	struct UHorizontalBox* SelectionBox_Active; // 0x2f8(0x08)
	struct FMulticastInlineDelegate CharacterSelected; // 0x300(0x10)
	struct AFSDPlayerState* PlayerState; // 0x310(0x08)
	bool DoSelectedShouts; // 0x318(0x01)
	bool DoMovie; // 0x319(0x01)
	bool AllowBack; // 0x31a(0x01)
	char UnknownData_31B[0x5]; // 0x31b(0x05)
	struct APlayerCharacter* InitialCharacterClassOnShow; // 0x320(0x08)
	bool IsBeingClosed; // 0x328(0x01)
	bool OnCloseMenuHasBeenHandled; // 0x329(0x01)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
	void OnCloseMenuReleased(bool Handled); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
	struct APlayerCharacter* GetSelectedClass(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
	void OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
	void OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
	void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature(struct APlayerCharacter* Character); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature
	void BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature(struct APlayerCharacter* Character); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature
	void OnInputSourceChanged(enum class EFSDInputSource InputSource); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
	void OnSelectedCharacterChanged_Event(struct APlayerCharacter* NewCharacter); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
	void PreConstruct(bool IsDesignTime); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
	void UpdateCharacterDescription(struct APlayerCharacter* CharacterClass); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
	void ReceiveNewVisibility(enum class ESlateVisibility NewVisibility); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
	void OnShown(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
	void OnClosed(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
	void BackPressed(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
	void CreateMovie(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
	void Construct(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
	void StopMovie(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ReceiveCloseCommand(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand
	void OnNewLoadout(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout
	void Show(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
	void ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int32_t EntryPoint); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
	void CharacterSelected__DelegateSignature(); // Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
};

