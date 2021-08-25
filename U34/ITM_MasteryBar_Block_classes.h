// WidgetBlueprintGeneratedClass ITM_MasteryBar_Block.ITM_MasteryBar_Block_C
// Size: 0x271 (Inherited: 0x230)
struct UITM_MasteryBar_Block_C : UMasteryIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimUnlocked; // 0x238(0x08)
	struct UProgressBar* BG; // 0x240(0x08)
	struct UImage* Image_BG; // 0x248(0x08)
	struct UImage* Image_Glow; // 0x250(0x08)
	struct UImage* Image_Outline; // 0x258(0x08)
	struct UProgressBar* outline; // 0x260(0x08)
	struct UCanvasPanel* RootCanvas; // 0x268(0x08)
	bool Filled; // 0x270(0x01)

	void SetUnlocked(bool IsUnlocked); // Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
	void PreConstruct(bool IsDesignTime); // Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
	void ReceiveUnlocked(); // Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked
	void ExecuteUbergraph_ITM_MasteryBar_Block(int32_t EntryPoint); // Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
};

