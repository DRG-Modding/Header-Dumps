// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C
// Size: 0x278 (Inherited: 0x230)
struct UHUD_EnemyTargeting_Temperature_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UWidgetAnimation* Ping; // 0x240(0x08)
	USizeBox* BarSize; // 0x248(0x08)
	UImage* BorderInner; // 0x250(0x08)
	UImage* BorderOuter; // 0x258(0x08)
	UImage* TemperatureIcon; // 0x260(0x08)
	UProgressBar* TemperatureProgress; // 0x268(0x08)
	float Size; // 0x270(0x04)
	float effect; // 0x274(0x04)

	void SetColors(FLinearColor Fill Color, FLinearColor BackgroundColor, bool Revert);
	void SetTemperatureEffect(float InEffect, bool Reset);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int32_t EntryPoint);
};

