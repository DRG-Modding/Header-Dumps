// WidgetBlueprintGeneratedClass HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C
// Size: 0x264 (Inherited: 0x230)
struct UHUD_Directional_Damage_Indicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* DamageImage; // 0x238(0x08)
	struct AActor* DamageCauser; // 0x240(0x08)
	struct FVector DamageOrigin; // 0x248(0x0c)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct APlayerCharacter* Character; // 0x258(0x08)
	float Radius; // 0x260(0x04)

	void UpdatePosition(float InputPin); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition
	void SetAngle(float Angle); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle
	void MoveTowards(float Value, float End, float Delta, float Result); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards
	void Hit(float Damage, struct AActor* DamageCauser, struct APlayerCharacter* Victim, struct UUserWidget* Widget); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick
	void Construct(); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct
	void ExecuteUbergraph_HUD_Directional_Damage_Indicator(int32_t EntryPoint); // Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator
};

