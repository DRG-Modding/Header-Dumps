// WidgetBlueprintGeneratedClass HUD_ViewerInteractivity.HUD_ViewerInteractivity_C
// Size: 0x280 (Inherited: 0x230)
struct UHUD_ViewerInteractivity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Pulsing; // 0x238(0x08)
	struct UImage* Image_889; // 0x240(0x08)
	struct UBackgroundBlur* Limiter; // 0x248(0x08)
	struct UTextBlock* MessageTextBlock; // 0x250(0x08)
	struct UTextBlock* MessageTextBlock_2; // 0x258(0x08)
	struct UBackgroundBlur* Notification; // 0x260(0x08)
	struct TArray<struct FString> Pending Notifications; // 0x268(0x10)
	struct FTimerHandle Queue Timer; // 0x278(0x08)

	void Set Limiter Warning Visible(bool Is Visible); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.Set Limiter Warning Visible
	void Add Notification(struct FString Notification Text); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.Add Notification
	void Set Notification Text(struct FString Text); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.Set Notification Text
	void PreConstruct(bool IsDesignTime); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.PreConstruct
	void Construct(); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.Construct
	void Event Queue Timer Tick(); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.Event Queue Timer Tick
	void OnInitialized(); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.OnInitialized
	void ExecuteUbergraph_HUD_ViewerInteractivity(int32_t EntryPoint); // Function HUD_ViewerInteractivity.HUD_ViewerInteractivity_C.ExecuteUbergraph_HUD_ViewerInteractivity
};

