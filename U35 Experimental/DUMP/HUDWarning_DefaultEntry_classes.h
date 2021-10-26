// WidgetBlueprintGeneratedClass HUDWarning_DefaultEntry.HUDWarning_DefaultEntry_C
// Size: 0x298 (Inherited: 0x250)
struct UHUDWarning_DefaultEntry_C : UHUDWarningWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* PingAnim; // 0x258(0x08)
	UImage* BG_Gradient; // 0x260(0x08)
	UImage* IconLeft; // 0x268(0x08)
	UImage* IconRight; // 0x270(0x08)
	UImage* Image_Main; // 0x278(0x08)
	UOverlay* Overlay_Outer; // 0x280(0x08)
	USoundBase* PingSound; // 0x288(0x08)
	bool ShouldDestroyAfterPing; // 0x290(0x01)
	float TimeBetweenSound; // 0x294(0x04)

	void SetData(UTexture2D* Texture, USoundBase* PingSound);
	void PreConstruct(bool IsDesignTime);
	void Ping(bool DestroyAfterPing);
	void PingFinished();
	void Construct();
	void ExecuteUbergraph_HUDWarning_DefaultEntry(int32_t EntryPoint);
};

