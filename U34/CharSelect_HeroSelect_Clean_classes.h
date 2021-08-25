// WidgetBlueprintGeneratedClass CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C
// Size: 0x2c3 (Inherited: 0x230)
struct UCharSelect_HeroSelect_Clean_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UICON_HeroSelect_C* ICON_HeroSelect_66; // 0x238(0x08)
	struct UICON_HeroSelect_C* ICON_HeroSelect_C_67; // 0x240(0x08)
	struct UICON_HeroSelect_C* ICON_HeroSelect_C_68; // 0x248(0x08)
	struct UICON_HeroSelect_C* ICON_HeroSelect_C_69; // 0x250(0x08)
	struct UHorizontalBox* SelectionBox; // 0x258(0x08)
	struct FMulticastInlineDelegate OnCharacterSelected; // 0x260(0x10)
	struct UAudioComponent* ShoutAudioComponent; // 0x270(0x08)
	struct FMulticastInlineDelegate OnCharacterHovered; // 0x278(0x10)
	bool DoSelectedShouts; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate OnRetirementHovered; // 0x290(0x10)
	struct FMulticastInlineDelegate OnRetirementUnhovered; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnRetireCharacter; // 0x2b0(0x10)
	bool OnlyShowCharactersNotInUse; // 0x2c0(0x01)
	bool CanSelectCharacters; // 0x2c1(0x01)
	bool CanPromote; // 0x2c2(0x01)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyDown
	void SetSelectedIndex(int32_t Index, bool Valid); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.SetSelectedIndex
	void GetSelectedIndex(int32_t Index); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.GetSelectedIndex
	struct FEventReply HandleKeyEvent(struct FKeyEvent InKeyEvent, bool IsDown, bool Handled); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HandleKeyEvent
	void Select(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Select
	void Prev(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Prev
	void Next(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Next
	void OnCharacterSelected_Event(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected_Event
	void Update(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Update
	void BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnHovered_Event_1(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnHovered_Event_1
	void OnSelect(); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnSelect
	void RetirementHovered(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementHovered
	void RetirementUnHovered(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementUnHovered
	void RetireCharacter(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetireCharacter
	void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32_t EntryPoint); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.ExecuteUbergraph_CharSelect_HeroSelect_Clean
	void OnRetireCharacter__DelegateSignature(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetireCharacter__DelegateSignature
	void OnRetirementUnhovered__DelegateSignature(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementUnhovered__DelegateSignature
	void OnRetirementHovered__DelegateSignature(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementHovered__DelegateSignature
	void OnCharacterHovered__DelegateSignature(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterHovered__DelegateSignature
	void OnCharacterSelected__DelegateSignature(struct APlayerCharacter* Character); // Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected__DelegateSignature
};

