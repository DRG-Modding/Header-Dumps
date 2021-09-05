// WidgetBlueprintGeneratedClass UI_Forge_Details.UI_Forge_Details_C
// Size: 0x2f4 (Inherited: 0x230)
struct UUI_Forge_Details_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimCount; // 0x238(0x08)
	UWidgetAnimation* AnimOpenMatrix; // 0x240(0x08)
	UBorder* CounterBorder; // 0x248(0x08)
	UOverlay* CounterOverlay; // 0x250(0x08)
	UUI_GenericLabel_C* CountLabel; // 0x258(0x08)
	UTextBlock* DescriptionSubTitle; // 0x260(0x08)
	UTextBlock* DescriptionTitle; // 0x268(0x08)
	UTextBlock* ForgeItemCategory; // 0x270(0x08)
	UTextBlock* ForgeItemDesc; // 0x278(0x08)
	UTextBlock* ForgeItemName; // 0x280(0x08)
	UOverlay* ItemDescriptionOverlay; // 0x288(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x290(0x08)
	UITM_MatrixCore_C* ITM_MatrixCore; // 0x298(0x08)
	UITM_Overclock_Details_C* ITM_Overclock_Details; // 0x2a0(0x08)
	UITM_Overclock_Icon_C* ITM_Overclock_Icon; // 0x2a8(0x08)
	UBorder* LowerBarBorder; // 0x2b0(0x08)
	UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon; // 0x2b8(0x08)
	UBorder* UpperBarBorder; // 0x2c0(0x08)
	UImage* UpperBarCorner; // 0x2c8(0x08)
	UOverlay* WeaponIcon; // 0x2d0(0x08)
	FMulticastInlineDelegate OnMatrixCoreOpened; // 0x2d8(0x10)
	bool ShowMatrixCore; // 0x2e8(0x01)
	int32_t CountingTo; // 0x2ec(0x04)
	float CountProgress; // 0x2f0(0x04)

	void SequenceEvent__ENTRYPOINTUI_Forge_Details_1();
	void StartCounting();
	void SetCountProgress(float InValue);
	void OpenMatrixCore();
	void SetItemDescription(FText Title, FText Subtitle);
	void ShowSchematic(USchematic* InSchematic);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void AnimOpenMatrixFinished();
	void Stop Counting();
	void ExecuteUbergraph_UI_Forge_Details(int32_t EntryPoint);
	void OnMatrixCoreOpened__DelegateSignature();
};

