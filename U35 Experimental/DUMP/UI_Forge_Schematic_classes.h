// WidgetBlueprintGeneratedClass UI_Forge_Schematic.UI_Forge_Schematic_C
// Size: 0x318 (Inherited: 0x230)
struct UUI_Forge_Schematic_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* IconReady; // 0x238(0x08)
	UWidgetAnimation* AnimReveal; // 0x240(0x08)
	UWidgetAnimation* Hover; // 0x248(0x08)
	UBorder* Border_76; // 0x250(0x08)
	UOverlay* ContentOverlay; // 0x258(0x08)
	UImage* ICON_Item; // 0x260(0x08)
	UOverlay* IconOverlay; // 0x268(0x08)
	UImage* Image_92; // 0x270(0x08)
	UButton* ItemButton; // 0x278(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x280(0x08)
	UITM_MatrixCore_C* ITM_MatrixCore; // 0x288(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x290(0x08)
	UITM_ItemUnlockedIcon_C* NotificationIcon; // 0x298(0x08)
	UTextBlock* SchematicCategoryLabel; // 0x2a0(0x08)
	UUI_HorizontalResourceBar_C* SchematicCost; // 0x2a8(0x08)
	UTextBlock* SchematicNameLabel; // 0x2b0(0x08)
	UWidgetSwitcher* TypeSwitcher; // 0x2b8(0x08)
	UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x2c0(0x08)
	USchematic* Schematic; // 0x2c8(0x08)
	bool Hovered; // 0x2d0(0x01)
	FMulticastInlineDelegate OnItemHovered; // 0x2d8(0x10)
	FMulticastInlineDelegate OnItemUnhovered; // 0x2e8(0x10)
	FMulticastInlineDelegate OnItemClicked; // 0x2f8(0x10)
	bool Show Cost; // 0x308(0x01)
	bool HideIfNotForgeable; // 0x309(0x01)
	bool ShowNewItemNotification; // 0x30a(0x01)
	UTextureRenderTarget2D* IconRenderTarget; // 0x310(0x08)

	void ReleaseRenderTarget();
	void PrepareRevealAnim();
	void PlayRevealAnim(float Duration);
	void GetCategory(USchematicCategory* Category);
	void OnItemReset(USchematic* Schematic);
	void SetHovering(bool InHovering);
	void TryBuildSchematic(bool success);
	void OnItemChanged(USchematic* Schematic);
	void GetSchematic(USchematic* Schematic);
	void Refresh(bool RefreshImage);
	void SetSchematic(USchematic* InSchematic);
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GenerateIcon(UVanityItem* Item, UPlayerCharacterID* Character);
	void ExecuteUbergraph_UI_Forge_Schematic(int32_t EntryPoint);
	void OnItemClicked__DelegateSignature(UUI_Forge_Schematic_C* Item);
	void OnItemUnhovered__DelegateSignature(UUI_Forge_Schematic_C* Item);
	void OnItemHovered__DelegateSignature(UUI_Forge_Schematic_C* Item);
};

