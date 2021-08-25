// WidgetBlueprintGeneratedClass ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_GeneratedIcon_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimIconReady; // 0x238(0x08)
	struct UBorder* Background; // 0x240(0x08)
	struct UBorder* Border_Inside; // 0x248(0x08)
	struct UBorder* Border_Outside; // 0x250(0x08)
	struct UImage* ICON_Image; // 0x258(0x08)
	struct UImage* ICON_Item; // 0x260(0x08)
	struct UImage* ICON_Padlock; // 0x268(0x08)
	struct UScaleBox* IconScaleBox; // 0x270(0x08)
	struct USizeBox* IconSizer; // 0x278(0x08)
	struct UWidgetSwitcher* IconTypeSwitcher; // 0x280(0x08)
	struct UImage* Shadow; // 0x288(0x08)
	int32_t IconSize; // 0x290(0x04)
	char BorderColor; // 0x294(0x01)
	bool ShowBorder; // 0x295(0x01)
	bool ShowBackground; // 0x296(0x01)
	bool ShowPadlock; // 0x297(0x01)
	struct UTextureRenderTarget2D* IconRenderTarget; // 0x298(0x08)

	struct UWidget* GetIconToolTip(); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.GetIconToolTip
	void SetShowBackground(bool InBackgroundVisible); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBackground
	void SetRenderTarget(struct UTextureRenderTarget2D* InTexture); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetRenderTarget
	void ReleaseRenderTarget(); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ReleaseRenderTarget
	void SetShowBorders(bool InBorderVisible); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowBorders
	void SetIconSize(int32_t InSize); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetIconSize
	void SetShowPadlock(bool InVisible); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetShowPadlock
	void SetBorderColor(char InColor); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.SetBorderColor
	void PreConstruct(bool IsDesignTime); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.PreConstruct
	void ShowAsItem(struct UVanityItem* Item, struct UPlayerCharacterID* Character); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsItem
	void ShowAsPickAxePart(struct UPickaxePart* part, enum class EPickaxePartLocation PickaxePartLocation, struct UPlayerCharacterID* Character); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsPickAxePart
	void ShowAsTexture(struct UTexture2D* Texture, struct FLinearColor Tint); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsTexture
	void ShowAsMaterial(struct UMaterialInterface* Material, struct FLinearColor Tint); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsMaterial
	void HideIcon(struct UWidget* AndSwitchTo); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.HideIcon
	void ShowAsSoftMaterial(struct TSoftObjectPtr<struct UMaterialInterface> Material, struct FLinearColor Tint); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ShowAsSoftMaterial
	void ExecuteUbergraph_ITM_GeneratedIcon_Item(int32_t EntryPoint); // Function ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C.ExecuteUbergraph_ITM_GeneratedIcon_Item
};

