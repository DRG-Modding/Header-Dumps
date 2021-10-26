// WidgetBlueprintGeneratedClass ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C
// Size: 0x2a0 (Inherited: 0x230)
struct UScreenOverlay_Afflictions_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UCanvasPanel* RootCanvas; // 0x238(0x08)
	APlayerCharacter* Player; // 0x240(0x08)
	UHealthComponent* HealthComponent; // 0x248(0x08)
	TMap<UPlayerAfflictionOverlay*, UPlayerAfflictionOverlayWidget*> ActiveOverlays; // 0x250(0x50)

	void FindOverlayWidget(UPlayerAfflictionOverlay* OverlayData, bool CreateIfNew, UPlayerAfflictionOverlayWidget* OutWidget);
	void Construct();
	void OnShowOverlay_Event(UPlayerAfflictionOverlay* Overlay);
	void OnHideOverlay_Event(UPlayerAfflictionOverlay* Overlay);
	void ExecuteUbergraph_ScreenOverlay_Afflictions(int32_t EntryPoint);
};

