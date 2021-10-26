// WidgetBlueprintGeneratedClass HUD_ThrowCarriable.HUD_ThrowCarriable_C
// Size: 0x278 (Inherited: 0x250)
struct UHUD_ThrowCarriable_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UProgressBar* HoldingProgressL; // 0x258(0x08)
	UProgressBar* HoldingProgressR; // 0x260(0x08)
	UHorizontalBox* HorizontalBox_1; // 0x268(0x08)
	UInvalidationBox* Invalidation; // 0x270(0x08)

	void Construct();
	void OnThrowCarriableProgress_Event(float Progress, float timeToCancel, bool isDone);
	void ExecuteUbergraph_HUD_ThrowCarriable(int32_t EntryPoint);
};

