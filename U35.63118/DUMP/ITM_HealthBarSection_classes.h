// WidgetBlueprintGeneratedClass ITM_HealthBarSection.ITM_HealthBarSection_C
// Size: 0x298 (Inherited: 0x230)
struct UITM_HealthBarSection_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* HealAnim; // 0x238(0x08)
	UWidgetAnimation* FadeToGray; // 0x240(0x08)
	UWidgetAnimation* HitAnim; // 0x248(0x08)
	UImage* Background; // 0x250(0x08)
	UProgressBar* ProgressBar_Health; // 0x258(0x08)
	UProgressBar* ProgressBar_Trail; // 0x260(0x08)
	enum class ENUM_MenuColors FillledGoodHealth; // 0x268(0x01)
	enum class ENUM_MenuColors FillledMediumHealth; // 0x269(0x01)
	enum class ENUM_MenuColors FillledBadHealth; // 0x26a(0x01)
	enum class ENUM_MenuColors HealedColor; // 0x26b(0x01)
	FLinearColor BackgroundColor; // 0x26c(0x10)
	bool DoFadeGray; // 0x27c(0x01)
	FTimerHandle GrayFadeTimer; // 0x280(0x08)
	float TotalFadeTime; // 0x288(0x04)
	float FadeStartTime; // 0x28c(0x04)
	bool IsHeal; // 0x290(0x01)
	float Percent; // 0x294(0x04)

	void SetPercent(float InPercent, bool WithAnim);
	void SetDestroyed();
	void Construct();
	void HitAnimFinished();
	void PreConstruct(bool IsDesignTime);
	void FadeGray(bool FadeToGray);
	void Colorfade();
	void ExecuteUbergraph_ITM_HealthBarSection(int32_t EntryPoint);
};

