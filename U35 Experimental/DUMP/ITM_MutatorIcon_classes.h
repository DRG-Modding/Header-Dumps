// WidgetBlueprintGeneratedClass ITM_MutatorIcon.ITM_MutatorIcon_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_MutatorIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* IconWarning; // 0x238(0x08)
	USizeBox* WarningSizer; // 0x240(0x08)
	UTexture2D* MutatorIcon; // 0x248(0x08)
	enum class ENUM_MenuColors Color; // 0x250(0x01)
	FVector2D Size; // 0x254(0x08)
	FText ToolTip; // 0x260(0x18)
	UBasic_ToolTip_C* WarningToolTip; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MutatorIcon(int32_t EntryPoint);
};

