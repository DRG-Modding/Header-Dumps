// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C
// Size: 0x278 (Inherited: 0x230)
struct UHUD_EnemyTargeting_Temperature_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Intro; // 0x238(0x08)
	struct UWidgetAnimation* Ping; // 0x240(0x08)
	struct USizeBox* BarSize; // 0x248(0x08)
	struct UImage* BorderInner; // 0x250(0x08)
	struct UImage* BorderOuter; // 0x258(0x08)
	struct UImage* TemperatureIcon; // 0x260(0x08)
	struct UProgressBar* TemperatureProgress; // 0x268(0x08)
	float Size; // 0x270(0x04)
	float effect; // 0x274(0x04)

	void SetColors(struct FLinearColor Fill Color, struct FLinearColor BackgroundColor, bool Revert); // Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors
	void SetTemperatureEffect(float InEffect, bool Reset); // Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick
	void PreConstruct(bool IsDesignTime); // Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct
	void ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int32_t EntryPoint); // Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature
};

