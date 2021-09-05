// WidgetBlueprintGeneratedClass HUD_ViewerInteractivity.HUD_ViewerInteractivity_C
// Size: 0x268 (Inherited: 0x230)
struct UHUD_ViewerInteractivity_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Pulsing; // 0x238(0x08)
	UTextBlock* MessageTextBlock; // 0x240(0x08)
	UBackgroundBlur* Notification; // 0x248(0x08)
	TArray<FString> Pending Notifications; // 0x250(0x10)
	FTimerHandle Queue Timer; // 0x260(0x08)

	void Add Notification(FString Notification Text);
	void Set Notification Text(FString Text);
	void Event Queue Timer Tick();
	void OnInitialized();
	void ExecuteUbergraph_HUD_ViewerInteractivity(int32_t EntryPoint);
};

