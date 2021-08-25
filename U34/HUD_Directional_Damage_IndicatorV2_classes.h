// WidgetBlueprintGeneratedClass HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C
// Size: 0x298 (Inherited: 0x230)
struct UHUD_Directional_Damage_IndicatorV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* DamageImage; // 0x238(0x08)
	struct AActor* DamageCauser; // 0x240(0x08)
	struct FVector DamageOrigin; // 0x248(0x0c)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct APlayerCharacter* Character; // 0x258(0x08)
	struct TArray<struct FVector> DamagePoints; // 0x260(0x10)
	struct UMaterialInstanceDynamic* DamageIndicatorMat; // 0x270(0x08)
	float TotalPointTime; // 0x278(0x04)
	float FadeTime; // 0x27c(0x04)
	int32_t MaxNumberOfPoints; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct TArray<struct AActor*> Enemies; // 0x288(0x10)

	void UpdatePoints(); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.UpdatePoints
	float CalcFadeStrength(float TimeLeft, float HitSize); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.CalcFadeStrength
	void OnHit(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.OnHit
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Tick
	void Construct(); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.Construct
	void ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2(int32_t EntryPoint); // Function HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C.ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2
};

