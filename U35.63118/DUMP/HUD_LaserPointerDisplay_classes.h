// WidgetBlueprintGeneratedClass HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C
// Size: 0x351 (Inherited: 0x230)
struct UHUD_LaserPointerDisplay_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIconIn; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UTextBlock* Description; // 0x248(0x08)
	UTextBlock* DistLabel; // 0x250(0x08)
	UHUD_LaserPointerScanProgress_C* HUD_LaserPointerScanProgress; // 0x258(0x08)
	UTextBlock* ItemLabel; // 0x260(0x08)
	UUI_AdvancedLabel_C* LBL_LeftMouse; // 0x268(0x08)
	UUI_AdvancedLabel_C* LBL_RightMouse; // 0x270(0x08)
	UHorizontalBox* ResourceIconHolder; // 0x278(0x08)
	UImage* ResourceIconL; // 0x280(0x08)
	UImage* ResourceIconR; // 0x288(0x08)
	UTextBlock* TextBlock_Unknown; // 0x290(0x08)
	UWidgetSwitcher* WidgetSwitcher_Scanbox; // 0x298(0x08)
	APlayerCharacter* Character; // 0x2a0(0x08)
	FHitResult LastHit; // 0x2a8(0x88)
	bool IsNew; // 0x330(0x01)
	float ScanTimeLeft; // 0x334(0x04)
	float ScanTotalTime; // 0x338(0x04)
	FMulticastInlineDelegate ScanComplete; // 0x340(0x10)
	bool IsScanVisible; // 0x350(0x01)

	void UpdateCommands();
	void Construct();
	void OnEquipped();
	void Update Display(FHitResult Hit, float Distance, FText Name, FText Description, UTexture2D* Icon);
	void Point Of Interest(UTexture2D* Texture);
	void PreConstruct(bool IsDesignTime);
	void OnBoscoChanged(ABosco* Bosco);
	void StartScan();
	void StopScan();
	void OnUnequipped();
	void ExecuteUbergraph_HUD_LaserPointerDisplay(int32_t EntryPoint);
	void ScanComplete__DelegateSignature();
};

