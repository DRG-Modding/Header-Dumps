// WidgetBlueprintGeneratedClass ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_MasteryBar_Icon_C : UMasteryIconWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimUnlocked; // 0x238(0x08)
	UProgressBar* BG; // 0x240(0x08)
	UImage* ICON_Padlock; // 0x248(0x08)
	UImage* Icon_Unlock; // 0x250(0x08)
	UImage* Image_BG; // 0x258(0x08)
	UImage* Image_Glow; // 0x260(0x08)
	UImage* Image_Outline; // 0x268(0x08)
	USizeBox* LockSizer; // 0x270(0x08)
	UWidgetSwitcher* LockSwitcher; // 0x278(0x08)
	UProgressBar* outline; // 0x280(0x08)
	UCanvasPanel* RootCanvas; // 0x288(0x08)
	bool Filled; // 0x290(0x01)
	bool ShowIcons; // 0x291(0x01)
	TArray<UUnlockReward*> Unlocks; // 0x298(0x10)
	UItemID* Item; // 0x2a8(0x08)

	void ToggleIcons(bool ShowIcons);
	void SetUnlocked(bool IsUnlocked);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ReceiveUnlocked();
	void ExecuteUbergraph_ITM_MasteryBar_Icon(int32_t EntryPoint);
};

