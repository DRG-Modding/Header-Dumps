// WidgetBlueprintGeneratedClass ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C
// Size: 0x370 (Inherited: 0x230)
struct UITM_EscortMuleHealthBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* OnHeal; // 0x238(0x08)
	UImage* DrillDozer_Background; // 0x240(0x08)
	UImage* DrillDozer_Background_Caterpillar; // 0x248(0x08)
	UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Left; // 0x250(0x08)
	UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Middle; // 0x258(0x08)
	UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Right; // 0x260(0x08)
	UProgressBar* Left_Health; // 0x268(0x08)
	UImage* Left_Outline; // 0x270(0x08)
	UProgressBar* Middle_Health; // 0x278(0x08)
	UImage* Middle_Outline; // 0x280(0x08)
	UProgressBar* Right_Health; // 0x288(0x08)
	UImage* Right_Outline; // 0x290(0x08)
	UHealthComponent* HealthComponent; // 0x298(0x08)
	TArray<UProgressBar*> Sections; // 0x2a0(0x10)
	TArray<UITM_HealthBarPercentWWarning_C*> PercentTexts; // 0x2b0(0x10)
	float FadeStartTime; // 0x2c0(0x04)
	float FadeTime; // 0x2c4(0x04)
	FLinearColor TargetColor; // 0x2c8(0x10)
	UProgressBar* TargetHealthBar; // 0x2d8(0x08)
	float FadeAlpha; // 0x2e0(0x04)
	FRuntimeFloatCurve HealthDisplayCurve; // 0x2e8(0x88)

	void SetFadeAlpha(float FadeAlpha);
	void SetData(UHealthComponent* HealthComponent);
	void OnNewHealthSegment(int32_t currSegment, int32_t prevSegment);
	void PreConstruct(bool IsDesignTime);
	void OnDamageTaken(float amount);
	void OnDamageHealed(float amount);
	void ExecuteUbergraph_ITM_EscortMuleHealthBar(int32_t EntryPoint);
};

