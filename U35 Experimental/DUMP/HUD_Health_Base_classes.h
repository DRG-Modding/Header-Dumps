// WidgetBlueprintGeneratedClass HUD_Health_Base.HUD_Health_Base_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_Health_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* PingPong; // 0x238(0x08)
	UWidgetAnimation* BeginRegen; // 0x240(0x08)
	UBorder* EndBorder; // 0x248(0x08)
	UProgressBar* HealthBar; // 0x250(0x08)
	UImage* IconImage; // 0x258(0x08)
	UProgressBar* RegenBar; // 0x260(0x08)
	UPlayerHealthComponent* HealthComponent; // 0x268(0x08)
	FSlateColor RegenTint; // 0x270(0x28)
	bool isRegenerating; // 0x298(0x01)
	float AlphaHealthbar; // 0x29c(0x04)

	void CheckPingPongAnim();
	void SetAlphaHealthbar(float alpha);
	bool HasLowHealth();
	void HealthChanged(float Health);
	void Bind Health Component(UPlayerHealthComponent* HealthComponent);
	void PreConstruct(bool IsDesignTime);
	void Set Health Pct(float InPercent);
	void Unbind Health Component();
	void Bind To Player(APlayerCharacter* Player);
	void OnHealthRegeneratingChanged_Event(bool isRegenerating);
	void Unbind HealthChanged();
	void Unbind Regenerating Changed();
	void ExecuteUbergraph_HUD_Health_Base(int32_t EntryPoint);
};

