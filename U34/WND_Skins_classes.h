// WidgetBlueprintGeneratedClass WND_Skins.WND_Skins_C
// Size: 0x2f8 (Inherited: 0x230)
struct UWND_Skins_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* ButtonHover; // 0x238(0x08)
	struct UWidgetAnimation* WindowAppear; // 0x240(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x248(0x08)
	struct UBorder* Border_2; // 0x250(0x08)
	struct UUI_FocusableCanvas_C* ItemsWindow; // 0x258(0x08)
	struct UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x260(0x08)
	struct UITM_SkinIcon_C* SelectedViewer; // 0x268(0x08)
	struct UButton* SelectorButton; // 0x270(0x08)
	struct UUniformGridPanel* SkinGrid; // 0x278(0x08)
	struct UTextBlock* SkinLabel; // 0x280(0x08)
	struct UItemID* ItemID; // 0x288(0x08)
	struct TArray<struct UITM_SkinItem_C*> SkinWidgets; // 0x290(0x10)
	int32_t Columns; // 0x2a0(0x04)
	bool MouseHovering; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	int32_t MaxColumns; // 0x2a8(0x04)
	bool LeftToRight; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	int32_t PreviewCount; // 0x2b0(0x04)
	char UnknownData_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate PingSkin; // 0x2b8(0x10)
	struct UPlayerCharacterID* CharaterID; // 0x2c8(0x08)
	bool SkinHasNotification; // 0x2d0(0x01)
	enum class EItemSkinType SkinType; // 0x2d1(0x01)
	char UnknownData_2D2[0x6]; // 0x2d2(0x06)
	struct FMulticastInlineDelegate OnOpened; // 0x2d8(0x10)
	bool HighlightFirstItem; // 0x2e8(0x01)
	char UnknownData_2E9[0x7]; // 0x2e9(0x07)
	struct UItemSkin* DefaultSkin; // 0x2f0(0x08)

	void FilterColorSkins(struct TArray<struct UItemSkin*> Skins); // Function WND_Skins.WND_Skins_C.FilterColorSkins
	void RefreshLoadout(); // Function WND_Skins.WND_Skins_C.RefreshLoadout
	void ClearSkins(); // Function WND_Skins.WND_Skins_C.ClearSkins
	void OnUnlockedSkin(struct UItemSkin* SkinItem); // Function WND_Skins.WND_Skins_C.OnUnlockedSkin
	void RefreshSelectorButton(); // Function WND_Skins.WND_Skins_C.RefreshSelectorButton
	void RefreshWindowItems(); // Function WND_Skins.WND_Skins_C.RefreshWindowItems
	void GetItemsWindow(struct UWidget* Widget); // Function WND_Skins.WND_Skins_C.GetItemsWindow
	void UpdateBorder(); // Function WND_Skins.WND_Skins_C.UpdateBorder
	void IsWindowVisible(bool Visible); // Function WND_Skins.WND_Skins_C.IsWindowVisible
	void PopulateSkinWindow(bool IsEmpty); // Function WND_Skins.WND_Skins_C.PopulateSkinWindow
	void SetWindowVisible(bool IsVisible, bool VisibilityChanged, bool NewVisibility); // Function WND_Skins.WND_Skins_C.SetWindowVisible
	void AddSkin(struct UItemSkin* InSkin, struct AActor* InItem, struct APlayerCharacter* InPlayerCharacter, int32_t InIndex, struct UITM_SkinItem_C* OutSkinWidget); // Function WND_Skins.WND_Skins_C.AddSkin
	void SetSkinData(struct UItemID* itemClass, struct UPlayerCharacterID* PlayerCharacterClass); // Function WND_Skins.WND_Skins_C.SetSkinData
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WND_Skins.WND_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_Skins.WND_Skins_C.PreConstruct
	void OnSkinWidgetAdded(struct UITM_SkinItem_C* SkinWidget); // Function WND_Skins.WND_Skins_C.OnSkinWidgetAdded
	void OnSkinClicked(struct UITM_SkinItem_C* Item); // Function WND_Skins.WND_Skins_C.OnSkinClicked
	void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void OnHoveringSkin(struct UITM_SkinItem_C* SkinItem); // Function WND_Skins.WND_Skins_C.OnHoveringSkin
	void PreviewSkin(struct UItemSkin* Skin); // Function WND_Skins.WND_Skins_C.PreviewSkin
	void OnUnhoveringSkin(struct UITM_SkinItem_C* SkinItem); // Function WND_Skins.WND_Skins_C.OnUnhoveringSkin
	void Construct(); // Function WND_Skins.WND_Skins_C.Construct
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WND_Skins.WND_Skins_C.OnFocusLost
	void BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(struct UWidget* Widget, bool IsHovered); // Function WND_Skins.WND_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature
	void OnSkinChangedEvent_Event_1(); // Function WND_Skins.WND_Skins_C.OnSkinChangedEvent_Event_1
	void ExecuteUbergraph_WND_Skins(int32_t EntryPoint); // Function WND_Skins.WND_Skins_C.ExecuteUbergraph_WND_Skins
	void OnOpened__DelegateSignature(); // Function WND_Skins.WND_Skins_C.OnOpened__DelegateSignature
	void PingSkin__DelegateSignature(struct UItemSkin* Skin); // Function WND_Skins.WND_Skins_C.PingSkin__DelegateSignature
};

