// WidgetBlueprintGeneratedClass OnScreen_SentryDistance.OnScreen_SentryDistance_C
// Size: 0x258 (Inherited: 0x230)
struct UOnScreen_SentryDistance_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall; // 0x238(0x08)
	UHUD_DefaultLabel_C* Distance; // 0x240(0x08)
	AActor* Target; // 0x248(0x08)
	AActor* Destination; // 0x250(0x08)

	void Set End Points(AActor* Target, AActor* Destination);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_OnScreen_SentryDistance(int32_t EntryPoint);
};

