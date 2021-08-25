// WidgetBlueprintGeneratedClass ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_MasteryBar_Icon_C : UMasteryIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimUnlocked; // 0x238(0x08)
	struct UProgressBar* BG; // 0x240(0x08)
	struct UImage* ICON_Padlock; // 0x248(0x08)
	struct UImage* Icon_Unlock; // 0x250(0x08)
	struct UImage* Image_BG; // 0x258(0x08)
	struct UImage* Image_Glow; // 0x260(0x08)
	struct UImage* Image_Outline; // 0x268(0x08)
	struct USizeBox* LockSizer; // 0x270(0x08)
	struct UWidgetSwitcher* LockSwitcher; // 0x278(0x08)
	struct UProgressBar* outline; // 0x280(0x08)
	struct UCanvasPanel* RootCanvas; // 0x288(0x08)
	bool Filled; // 0x290(0x01)
	bool ShowIcons; // 0x291(0x01)
	char UnknownData_292[0x6]; // 0x292(0x06)
	struct TArray<struct UUnlockReward*> Unlocks; // 0x298(0x10)
	struct UItemID* Item; // 0x2a8(0x08)

	void ToggleIcons(bool ShowIcons); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons
	void SetUnlocked(bool IsUnlocked); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked
	void Construct(); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct
	void PreConstruct(bool IsDesignTime); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct
	void ReceiveUnlocked(); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked
	void ExecuteUbergraph_ITM_MasteryBar_Icon(int32_t EntryPoint); // Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon
};

