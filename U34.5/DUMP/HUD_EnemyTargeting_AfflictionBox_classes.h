// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C
// Size: 0x2c0 (Inherited: 0x230)
struct UHUD_EnemyTargeting_AfflictionBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* AfflictionBox; // 0x238(0x08)
	float Size; // 0x240(0x04)
	UPawnAfflictionComponent* AfflictionComponent; // 0x248(0x08)
	TMap<UPawnAffliction*, UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets; // 0x250(0x50)
	TArray<TSoftObjectPtr<UPawnAffliction>> PreviewAfflictions; // 0x2a0(0x10)
	TArray<UPawnAffliction*> IgnoreAfflictions; // 0x2b0(0x10)

	void SetAfflictionComponent(UPawnAfflictionComponent* InAfflictionComponent);
	void ToggleIgnoreAfflictions(TArray<UPawnAffliction*> affliction, bool ShouldIgnore);
	void ToggleIgnoreAffliction(UPawnAffliction* affliction, bool ShouldIgnore);
	void ClearAfflictions();
	void ToggleAffliction(UPawnAffliction* InAffliction, bool InVisible);
	void SetTarget(AActor* InAfflictionTarget);
	void OnAfflictionActivatedEvent_Event(UPawnAffliction* affliction);
	void OnAfflictionDeactivatedEvent_Event(UPawnAffliction* affliction);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32_t EntryPoint);
};

