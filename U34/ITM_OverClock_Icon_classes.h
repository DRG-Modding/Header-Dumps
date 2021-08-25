// WidgetBlueprintGeneratedClass ITM_OverClock_Icon.ITM_Overclock_Icon_C
// Size: 0x2c8 (Inherited: 0x230)
struct UITM_Overclock_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* Button_Outer; // 0x238(0x08)
	struct USizeBox* IconSizer; // 0x240(0x08)
	struct UWidgetSwitcher* IconTypeSwitcher; // 0x248(0x08)
	struct UImage* ImgFrame; // 0x250(0x08)
	struct UImage* ImgIcon; // 0x258(0x08)
	struct UITM_SkinIcon_C* ITM_SkinIcon; // 0x260(0x08)
	int32_t IconSize; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UTexture2D* IconTexture; // 0x270(0x08)
	char IconColor; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct UTexture2D* FrameTexture; // 0x280(0x08)
	char FrameColor; // 0x288(0x01)
	bool HasTooltip; // 0x289(0x01)
	char UnknownData_28A[0x6]; // 0x28a(0x06)
	struct FText TooltipHeader; // 0x290(0x18)
	struct FText TooltipTxt; // 0x2a8(0x18)
	struct UItemUpgrade* Overclock; // 0x2c0(0x08)

	void SetOverclockTooltip(struct UItemUpgrade* Overclock); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip
	struct UWidget* GetOverclockTooltip(); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip
	void GetFrameLinearColor(struct FLinearColor ColorAndOpacity); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor
	void FromSchematicType(enum class ESchematicType InType); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType
	void SetCategory(struct USchematicCategory* InCategory); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory
	void SetFrameLinearColor(struct FLinearColor Color); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor
	void FromUpgrade(struct UItemUpgrade* InUpgrade, struct USchematicCategory* OutSchematicCategory); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade
	void FromSchematic(struct USchematic* InSchematic, bool ShowState); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic
	void SetIconColor(char Color); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor
	void SetIcon(struct UTexture2D* Value); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon
	void SetFrame(struct UTexture2D* Texture); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame
	void SetFrameColor(char ColorSelector); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor
	void SetIconSize(int32_t InSize); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize
	void PreConstruct(bool IsDesignTime); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct
	void ExecuteUbergraph_ITM_Overclock_Icon(int32_t EntryPoint); // Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon
};

