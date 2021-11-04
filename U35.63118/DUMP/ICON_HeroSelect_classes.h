// WidgetBlueprintGeneratedClass ICON_HeroSelect.ICON_HeroSelect_C
// Size: 0x38a (Inherited: 0x250)
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
	UImage* Icon_BG; // 0x298(0x08)
	UImage* Icon_Border; // 0x2a0(0x08)
	UITM_SeasonChallengeIcon_C* Icon_Challenge; // 0x2a8(0x08)
	UImage* Icon_Selection; // 0x2b0(0x08)
	UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel; // 0x2b8(0x08)
	UITM_RetirementBadge_C* ITM_RetirementBadge; // 0x2c0(0x08)
	UOverlay* Overlay_1; // 0x2c8(0x08)
	UCharSelect_HeroSelect_Dots_C* PlayerDots; // 0x2d0(0x08)
	UWidgetSwitcher* PromotionSwitcher; // 0x2d8(0x08)
	URichTextBlock* PromotionText; // 0x2e0(0x08)
	UUI_RoundedImage_C* UI_RoundedImage; // 0x2e8(0x08)
	UPlayerCharacterID* characterID; // 0x2f0(0x08)
	FMulticastInlineDelegate OnCharacterSelected; // 0x2f8(0x10)
	FMulticastInlineDelegate OnHovered; // 0x308(0x10)
	bool ShowRetirement; // 0x318(0x01)
	UBasic_ToolTip_C* ToolTip; // 0x320(0x08)
	FMulticastInlineDelegate OnRetirementHovered; // 0x328(0x10)
	FMulticastInlineDelegate OnRetirementUnhovered; // 0x338(0x10)
	FMulticastInlineDelegate OnRetireClicked; // 0x348(0x10)
	AFSDPlayerState* PlayerState; // 0x358(0x08)
	bool OnlyShowCharacterNotInUse; // 0x360(0x01)
	bool ShouldBeEnabled; // 0x361(0x01)
	APlayerState* MyState; // 0x368(0x08)
	TArray<APlayerState*> States; // 0x370(0x10)
	APlayerCharacter* PlayerCharacter; // 0x380(0x08)
	bool IsSelectable; // 0x388(0x01)
	bool CanPromote; // 0x389(0x01)

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
	void SetChallengeIcon(bool InHovered, UTexture2D* Icon, FLinearColor Color);
	void ExecuteUbergraph_ICON_HeroSelect(int32_t EntryPoint);
	void OnRetireClicked__DelegateSignature(UPlayerCharacterID* Character);
	void OnRetirementUnhovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnRetirementHovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnHovered__DelegateSignature(UPlayerCharacterID* Character);
	void OnCharacterSelected__DelegateSignature(UPlayerCharacterID* Character);
};

