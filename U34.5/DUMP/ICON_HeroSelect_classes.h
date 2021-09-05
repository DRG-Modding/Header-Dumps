// WidgetBlueprintGeneratedClass ICON_HeroSelect.ICON_HeroSelect_C
// Size: 0x382 (Inherited: 0x250)
struct UICON_HeroSelect_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UBasic_ButtonScalable2_C* BTN_Retire; // 0x258(0x08)
	UCanvasPanel* CanvasPanel_2; // 0x260(0x08)
	UUI_MaskedImage_C* CharacterIcon; // 0x268(0x08)
	UTextBlock* ClassName; // 0x270(0x08)
	UBorder* ClassName_InnerBorder; // 0x278(0x08)
	UBorder* ClassName_OuterBorder; // 0x280(0x08)
	UImage* ExtensionBG; // 0x288(0x08)
	UImage* ExtensionFiller; // 0x290(0x08)
	UImage* ICON_BG; // 0x298(0x08)
	UImage* Icon_Border; // 0x2a0(0x08)
	UImage* Icon_Selection; // 0x2a8(0x08)
	UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel; // 0x2b0(0x08)
	UITM_RetirementBadge_C* ITM_RetirementBadge; // 0x2b8(0x08)
	UOverlay* Overlay_1; // 0x2c0(0x08)
	UCharSelect_HeroSelect_Dots_C* PlayerDots; // 0x2c8(0x08)
	UWidgetSwitcher* PromotionSwitcher; // 0x2d0(0x08)
	URichTextBlock* PromotionText; // 0x2d8(0x08)
	UUI_RoundedImage_C* UI_RoundedImage; // 0x2e0(0x08)
	UPlayerCharacterID* CharacterClass; // 0x2e8(0x08)
	FMulticastInlineDelegate OnCharacterSelected; // 0x2f0(0x10)
	FMulticastInlineDelegate OnHovered; // 0x300(0x10)
	bool ShowRetirement; // 0x310(0x01)
	UBasic_ToolTip_C* ToolTip; // 0x318(0x08)
	FMulticastInlineDelegate OnRetirementHovered; // 0x320(0x10)
	FMulticastInlineDelegate OnRetirementUnhovered; // 0x330(0x10)
	FMulticastInlineDelegate OnRetireClicked; // 0x340(0x10)
	AFSDPlayerState* PlayerState; // 0x350(0x08)
	bool OnlyShowCharacterNotInUse; // 0x358(0x01)
	bool ShouldBeEnabled; // 0x359(0x01)
	APlayerState* MyState; // 0x360(0x08)
	TArray<APlayerState*> States; // 0x368(0x10)
	APlayerCharacter* PlayerCharacter; // 0x378(0x08)
	bool IsSelectable; // 0x380(0x01)
	bool CanPromote; // 0x381(0x01)

	bool IsInteractable();
	void GetSelectedClass(UPlayerCharacterID* DesiredCharacterClass);
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void SetScale(float Scale);
	void UpdateSelected();
	void IsSelected(bool IsSelected);
	void SetCharacterClass(UPlayerCharacterID* Class);
	void OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void OnMouseLeave(FPointerEvent MouseEvent);
	void On Click();
	void SelectedCharacterChanged(APlayerCharacter* NewCharacter);
	void OnCharacterStatsChanged_Event(AFSDPlayerState* PlayerState);
	void Init(UPlayerCharacterID* Character);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature();
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature();
	void BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature();
	void Update Retirement Button();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_ICON_HeroSelect(int32_t EntryPoint);
	void OnRetireClicked__DelegateSignature(APlayerCharacter* Character);
	void OnRetirementUnhovered__DelegateSignature(APlayerCharacter* Character);
	void OnRetirementHovered__DelegateSignature(APlayerCharacter* Character);
	void OnHovered__DelegateSignature(APlayerCharacter* Character);
	void OnCharacterSelected__DelegateSignature(APlayerCharacter* Character);
};

