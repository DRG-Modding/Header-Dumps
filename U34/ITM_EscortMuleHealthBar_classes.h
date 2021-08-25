// WidgetBlueprintGeneratedClass ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C
// Size: 0x370 (Inherited: 0x230)
struct UITM_EscortMuleHealthBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* OnHeal; // 0x238(0x08)
	struct UImage* DrillDozer_Background; // 0x240(0x08)
	struct UImage* DrillDozer_Background_Caterpillar; // 0x248(0x08)
	struct UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Left; // 0x250(0x08)
	struct UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Middle; // 0x258(0x08)
	struct UITM_HealthBarPercentWWarning_C* ITM_HealthBarPercentWWarning_Right; // 0x260(0x08)
	struct UProgressBar* Left_Health; // 0x268(0x08)
	struct UImage* Left_Outline; // 0x270(0x08)
	struct UProgressBar* Middle_Health; // 0x278(0x08)
	struct UImage* Middle_Outline; // 0x280(0x08)
	struct UProgressBar* Right_Health; // 0x288(0x08)
	struct UImage* Right_Outline; // 0x290(0x08)
	struct UHealthComponent* HealthComponent; // 0x298(0x08)
	struct TArray<struct UProgressBar*> Sections; // 0x2a0(0x10)
	struct TArray<struct UITM_HealthBarPercentWWarning_C*> PercentTexts; // 0x2b0(0x10)
	float FadeStartTime; // 0x2c0(0x04)
	float FadeTime; // 0x2c4(0x04)
	struct FLinearColor TargetColor; // 0x2c8(0x10)
	struct UProgressBar* TargetHealthBar; // 0x2d8(0x08)
	float FadeAlpha; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
	struct FRuntimeFloatCurve HealthDisplayCurve; // 0x2e8(0x88)

	void SetFadeAlpha(float FadeAlpha); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.SetFadeAlpha
	void SetData(struct UHealthComponent* HealthComponent); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.SetData
	void OnNewHealthSegment(int32_t currSegment, int32_t prevSegment); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.OnNewHealthSegment
	void PreConstruct(bool IsDesignTime); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.PreConstruct
	void OnDamageTaken(float amount); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.OnDamageTaken
	void OnDamageHealed(float amount); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.OnDamageHealed
	void ExecuteUbergraph_ITM_EscortMuleHealthBar(int32_t EntryPoint); // Function ITM_EscortMuleHealthBar.ITM_EscortMuleHealthBar_C.ExecuteUbergraph_ITM_EscortMuleHealthBar
};

