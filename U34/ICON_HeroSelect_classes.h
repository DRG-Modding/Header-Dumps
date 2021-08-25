// WidgetBlueprintGeneratedClass ICON_HeroSelect.ICON_HeroSelect_C
// Size: 0x382 (Inherited: 0x250)
struct UICON_HeroSelect_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Retire; // 0x258(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x260(0x08)
	struct UUI_MaskedImage_C* CharacterIcon; // 0x268(0x08)
	struct UTextBlock* ClassName; // 0x270(0x08)
	struct UBorder* ClassName_InnerBorder; // 0x278(0x08)
	struct UBorder* ClassName_OuterBorder; // 0x280(0x08)
	struct UImage* ExtensionBG; // 0x288(0x08)
	struct UImage* ExtensionFiller; // 0x290(0x08)
	struct UImage* Icon_BG; // 0x298(0x08)
	struct UImage* Icon_Border; // 0x2a0(0x08)
	struct UImage* Icon_Selection; // 0x2a8(0x08)
	struct UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel; // 0x2b0(0x08)
	struct UITM_RetirementBadge_C* ITM_RetirementBadge; // 0x2b8(0x08)
	struct UOverlay* Overlay_1; // 0x2c0(0x08)
	struct UCharSelect_HeroSelect_Dots_C* PlayerDots; // 0x2c8(0x08)
	struct UWidgetSwitcher* PromotionSwitcher; // 0x2d0(0x08)
	struct URichTextBlock* PromotionText; // 0x2d8(0x08)
	struct UUI_RoundedImage_C* UI_RoundedImage; // 0x2e0(0x08)
	struct UPlayerCharacterID* CharacterClass; // 0x2e8(0x08)
	struct FMulticastInlineDelegate OnCharacterSelected; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x300(0x10)
	bool ShowRetirement; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct UBasic_ToolTip_C* ToolTip; // 0x318(0x08)
	struct FMulticastInlineDelegate OnRetirementHovered; // 0x320(0x10)
	struct FMulticastInlineDelegate OnRetirementUnhovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnRetireClicked; // 0x340(0x10)
	struct AFSDPlayerState* PlayerState; // 0x350(0x08)
	bool OnlyShowCharacterNotInUse; // 0x358(0x01)
	bool ShouldBeEnabled; // 0x359(0x01)
	char UnknownData_35A[0x6]; // 0x35a(0x06)
	struct APlayerState* MyState; // 0x360(0x08)
	struct TArray<struct APlayerState*> States; // 0x368(0x10)
	struct APlayerCharacter* PlayerCharacter; // 0x378(0x08)
	bool IsSelectable; // 0x380(0x01)
	bool CanPromote; // 0x381(0x01)

	bool IsInteractable(); // Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
	void GetSelectedClass(struct UPlayerCharacterID* DesiredCharacterClass); // Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
	void SetScale(float Scale); // Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
	void UpdateSelected(); // Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
	void IsSelected(bool IsSelected); // Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
	void SetCharacterClass(struct UPlayerCharacterID* Class); // Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
	void On Click(); // Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
	void SelectedCharacterChanged(struct APlayerCharacter* NewCharacter); // Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
	void OnCharacterStatsChanged_Event(struct AFSDPlayerState* PlayerState); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
	void Init(struct UPlayerCharacterID* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.Init
	void PreConstruct(bool IsDesignTime); // Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature(); // Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature(); // Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature(); // Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
	void Update Retirement Button(); // Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
	void ExecuteUbergraph_ICON_HeroSelect(int32_t EntryPoint); // Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
	void OnRetireClicked__DelegateSignature(struct APlayerCharacter* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
	void OnRetirementUnhovered__DelegateSignature(struct APlayerCharacter* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
	void OnRetirementHovered__DelegateSignature(struct APlayerCharacter* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
	void OnHovered__DelegateSignature(struct APlayerCharacter* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
	void OnCharacterSelected__DelegateSignature(struct APlayerCharacter* Character); // Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
};

