// WidgetBlueprintGeneratedClass HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C
// Size: 0x2c8 (Inherited: 0x250)
struct UHUDWarning_DrillDozerCellDestroyed_C : UHUDWarningWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* RightCellDead; // 0x258(0x08)
	UWidgetAnimation* LeftCellDead; // 0x260(0x08)
	UImage* BG_Gradient; // 0x268(0x08)
	UImage* DrillDozer_Background; // 0x270(0x08)
	UImage* DrillDozer_Background_Caterpillar; // 0x278(0x08)
	UImage* IconLeft; // 0x280(0x08)
	UImage* IconRight; // 0x288(0x08)
	UImage* Image_Left; // 0x290(0x08)
	UImage* Image_Main; // 0x298(0x08)
	UImage* Image_Right; // 0x2a0(0x08)
	UImage* NoiseImage; // 0x2a8(0x08)
	UOverlay* Overlay_Outer; // 0x2b0(0x08)
	USoundBase* PingSound; // 0x2b8(0x08)
	bool ShouldDestroyAfterPing; // 0x2c0(0x01)
	float TimeBetweenSound; // 0x2c4(0x04)

	void SetData(UTexture2D* Texture, USoundBase* PingSound);
	void PreConstruct(bool IsDesignTime);
	void Ping(bool DestroyAfterPing);
	void LeftFinished();
	void Construct();
	void RightFinished();
	void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32_t EntryPoint);
};

