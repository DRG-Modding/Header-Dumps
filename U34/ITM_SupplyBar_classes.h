// WidgetBlueprintGeneratedClass ITM_SupplyBar.ITM_SupplyBar_C
// Size: 0x285 (Inherited: 0x230)
struct UITM_SupplyBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UUI_ImageTinted_C* Image_SupplyType; // 0x238(0x08)
	struct UITM_SupplyBarItem_C* ITM_SupplyBarItem_2; // 0x240(0x08)
	struct UITM_SupplyBarItem_C* ITM_SupplyBarItem_3; // 0x248(0x08)
	struct UITM_SupplyBarItem_C* ITM_SupplyBarItem_4; // 0x250(0x08)
	struct UITM_SupplyBarItem_C* ITM_SupplyBarItem_5; // 0x258(0x08)
	struct UProgressBar* ProgressBar; // 0x260(0x08)
	struct UHorizontalBox* ProgressChunks; // 0x268(0x08)
	bool ShowAsProgressBar; // 0x270(0x01)
	bool ShowBlinkingSegments; // 0x271(0x01)
	char UnknownData_272[0x6]; // 0x272(0x06)
	struct UTexture2D* SupplyIcon; // 0x278(0x08)
	char IconTint; // 0x280(0x01)
	char ProgressBarTint; // 0x281(0x01)
	char SegmentBorderTint; // 0x282(0x01)
	char SegmentInnerTint; // 0x283(0x01)
	char SegmentLowTint; // 0x284(0x01)

	void SetProgress(float Progress (0-1)); // Function ITM_SupplyBar.ITM_SupplyBar_C.SetProgress
	void PreConstruct(bool IsDesignTime); // Function ITM_SupplyBar.ITM_SupplyBar_C.PreConstruct
	void ExecuteUbergraph_ITM_SupplyBar(int32_t EntryPoint); // Function ITM_SupplyBar.ITM_SupplyBar_C.ExecuteUbergraph_ITM_SupplyBar
};

