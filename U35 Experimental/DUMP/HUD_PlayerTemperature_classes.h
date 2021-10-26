// WidgetBlueprintGeneratedClass HUD_PlayerTemperature.HUD_PlayerTemperature_C
// Size: 0x2f4 (Inherited: 0x250)
struct UHUD_PlayerTemperature_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Appear; // 0x258(0x08)
	UWidgetAnimation* Pulse; // 0x260(0x08)
	UWidgetAnimation* Fade; // 0x268(0x08)
	UWidgetAnimation* Warning; // 0x270(0x08)
	UImage* Arrow01; // 0x278(0x08)
	UImage* Arrow02; // 0x280(0x08)
	UImage* Arrow03; // 0x288(0x08)
	UVerticalBox* ArrowBox; // 0x290(0x08)
	UImage* BG; // 0x298(0x08)
	UImage* Glow; // 0x2a0(0x08)
	UImage* Icon_Temp; // 0x2a8(0x08)
	USizeBox* RootSize; // 0x2b0(0x08)
	UProgressBar* TempBar; // 0x2b8(0x08)
	TArray<UImage*> Arrows; // 0x2c0(0x10)
	FLinearColor Tint_Freeze; // 0x2d0(0x10)
	bool Faded; // 0x2e0(0x01)
	FLinearColor Tint_Overheated; // 0x2e4(0x10)

	void SetFaded(bool FadeOut);
	void UpdateTemperature(float InTemperature, float InChange);
	void UpdateArrows();
	void Construct();
	void OnTemperatureChanged(float Temperature, float Change);
	void PreConstruct(bool IsDesignTime);
	void OnTemperatureChangeRate_Event(int32_t ChangeRate);
	void ShowTemperature();
	void OnBarVisibilityChanged(bool barVisible);
	void OnTemperatureStateChanged(enum class EPlayerTemperatureState State);
	void ExecuteUbergraph_HUD_PlayerTemperature(int32_t EntryPoint);
};

