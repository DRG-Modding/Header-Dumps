// WidgetBlueprintGeneratedClass OnScreen_SentryDistance.OnScreen_SentryDistance_C
// Size: 0x258 (Inherited: 0x230)
struct UOnScreen_SentryDistance_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall; // 0x238(0x08)
	struct UHUD_DefaultLabel_C* Distance; // 0x240(0x08)
	struct AActor* Target; // 0x248(0x08)
	struct AActor* Destination; // 0x250(0x08)

	void Set End Points(struct AActor* Target, struct AActor* Destination); // Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick
	void Construct(); // Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct
	void ExecuteUbergraph_OnScreen_SentryDistance(int32_t EntryPoint); // Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance
};

