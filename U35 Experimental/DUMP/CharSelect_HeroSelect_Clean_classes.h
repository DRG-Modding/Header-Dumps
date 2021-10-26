// WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C
// Size: 0x2c3 (Inherited: 0x230)
struct UCharSelect_HeroSelect_Clean_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UICON_HeroSelect_C* ICON_HeroSelect_66; // 0x238(0x08)
	UICON_HeroSelect_C* ICON_HeroSelect_C_67; // 0x240(0x08)
	UICON_HeroSelect_C* ICON_HeroSelect_C_68; // 0x248(0x08)
	UICON_HeroSelect_C* ICON_HeroSelect_C_69; // 0x250(0x08)
	UHorizontalBox* SelectionBox; // 0x258(0x08)
	FMulticastInlineDelegate OnCharacterSelected; // 0x260(0x10)
	UAudioComponent* ShoutAudioComponent; // 0x270(0x08)
	FMulticastInlineDelegate OnCharacterHovered; // 0x278(0x10)
	bool DoSelectedShouts; // 0x288(0x01)
	FMulticastInlineDelegate OnRetirementHovered; // 0x290(0x10)
	FMulticastInlineDelegate OnRetirementUnhovered; // 0x2a0(0x10)
	FMulticastInlineDelegate OnRetireCharacter; // 0x2b0(0x10)
	bool OnlyShowCharactersNotInUse; // 0x2c0(0x01)
	bool CanSelectCharacters; // 0x2c1(0x01)
	bool CanPromote; // 0x2c2(0x01)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void SetSelectedIndex(int32_t Index, bool Valid);
	void GetSelectedIndex(int32_t Index);
	FEventReply HandleKeyEvent(FKeyEvent InKeyEvent, bool IsDown, bool Handled);
	void Select();
	void Prev();
	void Next();
	void OnCharacterSelected_Event(UPlayerCharacterID* Character);
	void Update();
	void BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnHovered_Event_1(UPlayerCharacterID* Character);
	void OnSelect();
	void RetirementHovered(UPlayerCharacterID* Character);
	void RetirementUnHovered(UPlayerCharacterID* Character);
	void RetireCharacter(UPlayerCharacterID* Character);
	void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32_t EntryPoint);
	void OnRetireCharacter__DelegateSignature(UPlayerCharacterID* Character);
	void OnRetirementUnhovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnRetirementHovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnCharacterHovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnCharacterSelected__DelegateSignature(UPlayerCharacterID* Character);
};

