// WidgetBlueprintGeneratedClass HUD_Directional_Damage_IndicatorV2.HUD_Directional_Damage_IndicatorV2_C
// Size: 0x298 (Inherited: 0x230)
struct UHUD_Directional_Damage_IndicatorV2_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* DamageImage; // 0x238(0x08)
	AActor* DamageCauser; // 0x240(0x08)
	FVector DamageOrigin; // 0x248(0x0c)
	APlayerCharacter* Character; // 0x258(0x08)
	TArray<FVector> DamagePoints; // 0x260(0x10)
	UMaterialInstanceDynamic* DamageIndicatorMat; // 0x270(0x08)
	float TotalPointTime; // 0x278(0x04)
	float FadeTime; // 0x27c(0x04)
	int32_t MaxNumberOfPoints; // 0x280(0x04)
	TArray<AActor*> Enemies; // 0x288(0x10)

	void UpdatePoints();
	float CalcFadeStrength(float TimeLeft, float HitSize);
	void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_HUD_Directional_Damage_IndicatorV2(int32_t EntryPoint);
};

