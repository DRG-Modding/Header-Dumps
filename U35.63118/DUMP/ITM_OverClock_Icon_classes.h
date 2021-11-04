// WidgetBlueprintGeneratedClass ITM_OverClock_Icon.ITM_Overclock_Icon_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_Overclock_Icon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* Button_Outer; // 0x238(0x08)
	USizeBox* IconSizer; // 0x240(0x08)
	UWidgetSwitcher* IconTypeSwitcher; // 0x248(0x08)
	UImage* ImgFrame; // 0x250(0x08)
	UImage* ImgIcon; // 0x258(0x08)
	UITM_SkinIcon_C* ITM_SkinIcon; // 0x260(0x08)
	int32_t IconSize; // 0x268(0x04)
	UTexture2D* IconTexture; // 0x270(0x08)
	enum class ENUM_MenuColors IconColor; // 0x278(0x01)
	UTexture2D* FrameTexture; // 0x280(0x08)
	enum class ENUM_MenuColors FrameColor; // 0x288(0x01)
	bool HasTooltip; // 0x289(0x01)
	FText TooltipHeader; // 0x290(0x18)
	FText TooltipTxt; // 0x2a8(0x18)
	UItemUpgrade* Overclock; // 0x2c0(0x08)

	void SetOverclockTooltip(UItemUpgrade* Overclock);
	UWidget* GetOverclockTooltip();
	void GetFrameLinearColor(FLinearColor ColorAndOpacity);
	void FromSchematicType(enum class ESchematicType InType);
	void SetCategory(USchematicCategory* InCategory);
	void SetFrameLinearColor(FLinearColor Color);
	void FromUpgrade(UItemUpgrade* InUpgrade, USchematicCategory* OutSchematicCategory);
	void FromSchematic(USchematic* InSchematic, bool ShowState);
	void SetIconColor(enum class ENUM_MenuColors Color);
	void SetIcon(UTexture2D* Value);
	void SetFrame(UTexture2D* Texture);
	void SetFrameColor(enum class ENUM_MenuColors ColorSelector);
	void SetIconSize(int32_t InSize);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_Overclock_Icon(int32_t EntryPoint);
};

