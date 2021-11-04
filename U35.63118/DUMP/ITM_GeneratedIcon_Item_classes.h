// WidgetBlueprintGeneratedClass ITM_GeneratedIcon_Item.ITM_GeneratedIcon_Item_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_GeneratedIcon_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimIconReady; // 0x238(0x08)
	UBorder* Background; // 0x240(0x08)
	UBorder* Border_Inside; // 0x248(0x08)
	UBorder* Border_Outside; // 0x250(0x08)
	UImage* ICON_Image; // 0x258(0x08)
	UImage* ICON_Item; // 0x260(0x08)
	UImage* ICON_Padlock; // 0x268(0x08)
	UScaleBox* IconScaleBox; // 0x270(0x08)
	USizeBox* IconSizer; // 0x278(0x08)
	UWidgetSwitcher* IconTypeSwitcher; // 0x280(0x08)
	UImage* Shadow; // 0x288(0x08)
	int32_t IconSize; // 0x290(0x04)
	enum class ENUM_MenuColors BorderColor; // 0x294(0x01)
	bool ShowBorder; // 0x295(0x01)
	bool ShowBackground; // 0x296(0x01)
	bool ShowPadlock; // 0x297(0x01)
	UTextureRenderTarget2D* IconRenderTarget; // 0x298(0x08)

	UWidget* GetIconToolTip();
	void SetShowBackground(bool InBackgroundVisible);
	void SetRenderTarget(UTextureRenderTarget2D* InTexture);
	void ReleaseRenderTarget();
	void SetShowBorders(bool InBorderVisible);
	void SetIconSize(int32_t InSize);
	void SetShowPadlock(bool InVisible);
	void SetBorderColor(enum class ENUM_MenuColors InColor);
	void PreConstruct(bool IsDesignTime);
	void ShowAsItem(UVanityItem* Item, UPlayerCharacterID* Character);
	void ShowAsPickAxePart(UPickaxePart* part, enum class EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character);
	void ShowAsTexture(UTexture2D* Texture, FLinearColor Tint);
	void ShowAsMaterial(UMaterialInterface* Material, FLinearColor Tint);
	void HideIcon(UWidget* AndSwitchTo);
	void ShowAsSoftMaterial(TSoftObjectPtr<UMaterialInterface> Material, FLinearColor Tint);
	void ExecuteUbergraph_ITM_GeneratedIcon_Item(int32_t EntryPoint);
};

