// WidgetBlueprintGeneratedClass HUD_LaserPointerScanProgress.HUD_LaserPointerScanProgress_C
// Size: 0x240 (Inherited: 0x230)
struct UHUD_LaserPointerScanProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UProgressBar* ProgressBar_60; // 0x238(0x08)

	void SetProgress(float Progress);
	void ExecuteUbergraph_HUD_LaserPointerScanProgress(int32_t EntryPoint);
};

