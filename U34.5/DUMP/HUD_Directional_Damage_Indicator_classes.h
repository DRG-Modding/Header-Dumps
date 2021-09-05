// WidgetBlueprintGeneratedClass HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C
// Size: 0x264 (Inherited: 0x230)
struct UHUD_Directional_Damage_Indicator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* DamageImage; // 0x238(0x08)
	AActor* DamageCauser; // 0x240(0x08)
	FVector DamageOrigin; // 0x248(0x0c)
	APlayerCharacter* Character; // 0x258(0x08)
	float Radius; // 0x260(0x04)

	void UpdatePosition(float InputPin);
	void SetAngle(float Angle);
	void MoveTowards(float Value, float End, float Delta, float Result);
	void Hit(float Damage, AActor* DamageCauser, APlayerCharacter* Victim, UUserWidget* Widget);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_HUD_Directional_Damage_Indicator(int32_t EntryPoint);
};

