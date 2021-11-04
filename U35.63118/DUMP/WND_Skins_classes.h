// WidgetBlueprintGeneratedClass WND_Skins.WND_Skins_C
// Size: 0x2f8 (Inherited: 0x230)
struct UWND_Skins_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ButtonHover; // 0x238(0x08)
	UWidgetAnimation* WindowAppear; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	UBorder* Border_2; // 0x250(0x08)
	UUI_FocusableCanvas_C* ItemsWindow; // 0x258(0x08)
	UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x260(0x08)
	UITM_SkinIcon_C* SelectedViewer; // 0x268(0x08)
	UButton* SelectorButton; // 0x270(0x08)
	UUniformGridPanel* SkinGrid; // 0x278(0x08)
	UTextBlock* SkinLabel; // 0x280(0x08)
	UItemID* ItemID; // 0x288(0x08)
	TArray<UITM_SkinItem_C*> SkinWidgets; // 0x290(0x10)
	int32_t Columns; // 0x2a0(0x04)
	bool MouseHovering; // 0x2a4(0x01)
	int32_t MaxColumns; // 0x2a8(0x04)
	bool LeftToRight; // 0x2ac(0x01)
	int32_t PreviewCount; // 0x2b0(0x04)
	FMulticastInlineDelegate PingSkin; // 0x2b8(0x10)
	UPlayerCharacterID* CharaterID; // 0x2c8(0x08)
	bool SkinHasNotification; // 0x2d0(0x01)
	enum class EItemSkinType SkinType; // 0x2d1(0x01)
	FMulticastInlineDelegate OnOpened; // 0x2d8(0x10)
	bool HighlightFirstItem; // 0x2e8(0x01)
	UItemSkin* DefaultSkin; // 0x2f0(0x08)

	void RefreshLoadout();
	void ClearSkins();
	void OnUnlockedSkin(UItemSkin* SkinItem);
	void RefreshSelectorButton();
	void RefreshWindowItems();
	void GetItemsWindow(UWidget* Widget);
	void UpdateBorder();
	void IsWindowVisible(bool Visible);
	void PopulateSkinWindow(bool isEmpty);
	void SetWindowVisible(bool IsVisible, bool VisibilityChanged, bool NewVisibility);
	void AddSkin(UItemSkin* InSkin, AActor* InItem, APlayerCharacter* InPlayerCharacter, int32_t InIndex, UITM_SkinItem_C* OutSkinWidget);
	void SetSkinData(UItemID* itemClass, UPlayerCharacterID* PlayerCharacterClass);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnSkinWidgetAdded(UITM_SkinItem_C* SkinWidget);
	void OnSkinClicked(UITM_SkinItem_C* Item);
	void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnHoveringSkin(UITM_SkinItem_C* SkinItem);
	void PreviewSkin(UItemSkin* Skin);
	void OnUnhoveringSkin(UITM_SkinItem_C* SkinItem);
	void Construct();
	void OnFocusLost(FFocusEvent InFocusEvent);
	void BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(UWidget* Widget, bool IsHovered);
	void OnSkinChangedEvent_Event_1();
	void ExecuteUbergraph_WND_Skins(int32_t EntryPoint);
	void OnOpened__DelegateSignature();
	void PingSkin__DelegateSignature(UItemSkin* Skin);
};

