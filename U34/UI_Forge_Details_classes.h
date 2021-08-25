// WidgetBlueprintGeneratedClass UI_Forge_Details.UI_Forge_Details_C
// Size: 0x2f4 (Inherited: 0x230)
struct UUI_Forge_Details_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimCount; // 0x238(0x08)
	struct UWidgetAnimation* AnimOpenMatrix; // 0x240(0x08)
	struct UBorder* CounterBorder; // 0x248(0x08)
	struct UOverlay* CounterOverlay; // 0x250(0x08)
	struct UUI_GenericLabel_C* CountLabel; // 0x258(0x08)
	struct UTextBlock* DescriptionSubTitle; // 0x260(0x08)
	struct UTextBlock* DescriptionTitle; // 0x268(0x08)
	struct UTextBlock* ForgeItemCategory; // 0x270(0x08)
	struct UTextBlock* ForgeItemDesc; // 0x278(0x08)
	struct UTextBlock* ForgeItemName; // 0x280(0x08)
	struct UOverlay* ItemDescriptionOverlay; // 0x288(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x290(0x08)
	struct UITM_MatrixCore_C* ITM_MatrixCore; // 0x298(0x08)
	struct UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x2a0(0x08)
	struct UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2a8(0x08)
	struct UBorder* LowerBarBorder; // 0x2b0(0x08)
	struct UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x2b8(0x08)
	struct UBorder* UpperBarBorder; // 0x2c0(0x08)
	struct UImage* UpperBarCorner; // 0x2c8(0x08)
	struct UOverlay* WeaponIcon; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnMatrixCoreOpened; // 0x2d8(0x10)
	bool ShowMatrixCore; // 0x2e8(0x01)
	char UnknownData_2E9[0x3]; // 0x2e9(0x03)
	int32_t CountingTo; // 0x2ec(0x04)
	float CountProgress; // 0x2f0(0x04)

	void SequenceEvent__ENTRYPOINTUI_Forge_Details_1(); // Function UI_Forge_Details.UI_Forge_Details_C.SequenceEvent__ENTRYPOINTUI_Forge_Details_1
	void StartCounting(); // Function UI_Forge_Details.UI_Forge_Details_C.StartCounting
	void SetCountProgress(float InValue); // Function UI_Forge_Details.UI_Forge_Details_C.SetCountProgress
	void OpenMatrixCore(); // Function UI_Forge_Details.UI_Forge_Details_C.OpenMatrixCore
	void SetItemDescription(struct FText Title, struct FText Subtitle); // Function UI_Forge_Details.UI_Forge_Details_C.SetItemDescription
	void ShowSchematic(struct USchematic* InSchematic); // Function UI_Forge_Details.UI_Forge_Details_C.ShowSchematic
	void PreConstruct(bool IsDesignTime); // Function UI_Forge_Details.UI_Forge_Details_C.PreConstruct
	void Construct(); // Function UI_Forge_Details.UI_Forge_Details_C.Construct
	void AnimOpenMatrixFinished(); // Function UI_Forge_Details.UI_Forge_Details_C.AnimOpenMatrixFinished
	void Stop Counting(); // Function UI_Forge_Details.UI_Forge_Details_C.Stop Counting
	void ExecuteUbergraph_UI_Forge_Details(int32_t EntryPoint); // Function UI_Forge_Details.UI_Forge_Details_C.ExecuteUbergraph_UI_Forge_Details
	void OnMatrixCoreOpened__DelegateSignature(); // Function UI_Forge_Details.UI_Forge_Details_C.OnMatrixCoreOpened__DelegateSignature
};

