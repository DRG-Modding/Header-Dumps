// WidgetBlueprintGeneratedClass HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C
// Size: 0x2c8 (Inherited: 0x250)
struct UHUDWarning_DrillDozerCellDestroyed_C : UHUDWarningWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* RightCellDead; // 0x258(0x08)
	struct UWidgetAnimation* LeftCellDead; // 0x260(0x08)
	struct UImage* BG_Gradient; // 0x268(0x08)
	struct UImage* DrillDozer_Background; // 0x270(0x08)
	struct UImage* DrillDozer_Background_Caterpillar; // 0x278(0x08)
	struct UImage* IconLeft; // 0x280(0x08)
	struct UImage* IconRight; // 0x288(0x08)
	struct UImage* Image_Left; // 0x290(0x08)
	struct UImage* Image_Main; // 0x298(0x08)
	struct UImage* Image_Right; // 0x2a0(0x08)
	struct UImage* NoiseImage; // 0x2a8(0x08)
	struct UOverlay* Overlay_Outer; // 0x2b0(0x08)
	struct USoundBase* PingSound; // 0x2b8(0x08)
	bool ShouldDestroyAfterPing; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	float TimeBetweenSound; // 0x2c4(0x04)

	void SetData(struct UTexture2D* Texture, struct USoundBase* PingSound); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.SetData
	void PreConstruct(bool IsDesignTime); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.PreConstruct
	void Ping(bool DestroyAfterPing); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.Ping
	void LeftFinished(); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.LeftFinished
	void Construct(); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.Construct
	void RightFinished(); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.RightFinished
	void ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed(int32_t EntryPoint); // Function HUDWarning_DrillDozerCellDestroyed.HUDWarning_DrillDozerCellDestroyed_C.ExecuteUbergraph_HUDWarning_DrillDozerCellDestroyed
};

