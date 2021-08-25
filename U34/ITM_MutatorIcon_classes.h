// WidgetBlueprintGeneratedClass ITM_MutatorIcon.ITM_MutatorIcon_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_MutatorIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* IconWarning; // 0x238(0x08)
	struct USizeBox* WarningSizer; // 0x240(0x08)
	struct UTexture2D* MutatorIcon; // 0x248(0x08)
	char Color; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	struct FVector2D Size; // 0x254(0x08)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct FText ToolTip; // 0x260(0x18)
	struct UBasic_ToolTip_C* WarningToolTip; // 0x278(0x08)

	void PreConstruct(bool IsDesignTime); // Function ITM_MutatorIcon.ITM_MutatorIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_MutatorIcon(int32_t EntryPoint); // Function ITM_MutatorIcon.ITM_MutatorIcon_C.ExecuteUbergraph_ITM_MutatorIcon
};

