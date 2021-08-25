// WidgetBlueprintGeneratedClass HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C
// Size: 0x351 (Inherited: 0x230)
struct UHUD_LaserPointerDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeIconIn; // 0x238(0x08)
	struct UWidgetAnimation* Intro; // 0x240(0x08)
	struct UTextBlock* Description; // 0x248(0x08)
	struct UTextBlock* DistLabel; // 0x250(0x08)
	struct UHUD_LaserPointerScanProgress_C* HUD_LaserPointerScanProgress; // 0x258(0x08)
	struct UTextBlock* ItemLabel; // 0x260(0x08)
	struct UUI_AdvancedLabel_C* LBL_LeftMouse; // 0x268(0x08)
	struct UUI_AdvancedLabel_C* LBL_RightMouse; // 0x270(0x08)
	struct UHorizontalBox* ResourceIconHolder; // 0x278(0x08)
	struct UImage* ResourceIconL; // 0x280(0x08)
	struct UImage* ResourceIconR; // 0x288(0x08)
	struct UTextBlock* TextBlock_Unknown; // 0x290(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Scanbox; // 0x298(0x08)
	struct APlayerCharacter* Character; // 0x2a0(0x08)
	struct FHitResult LastHit; // 0x2a8(0x88)
	bool IsNew; // 0x330(0x01)
	char UnknownData_331[0x3]; // 0x331(0x03)
	float ScanTimeLeft; // 0x334(0x04)
	float ScanTotalTime; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct FMulticastInlineDelegate ScanComplete; // 0x340(0x10)
	bool IsScanVisible; // 0x350(0x01)

	void UpdateCommands(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
	void Construct(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
	void OnEquipped(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
	void Update Display(struct FHitResult Hit, float Distance, struct FText Name, struct FText Description, struct UTexture2D* Icon); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
	void Point Of Interest(struct UTexture2D* Texture); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
	void PreConstruct(bool IsDesignTime); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
	void OnBoscoChanged(struct ABosco* Bosco); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
	void StartScan(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan
	void StopScan(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan
	void OnUnequipped(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped
	void ExecuteUbergraph_HUD_LaserPointerDisplay(int32_t EntryPoint); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
	void ScanComplete__DelegateSignature(); // Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature
};

