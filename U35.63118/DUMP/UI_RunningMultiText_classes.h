// WidgetBlueprintGeneratedClass UI_RunningMultiText.UI_RunningMultiText_C
// Size: 0x340 (Inherited: 0x2f0)
struct UUI_RunningMultiText_C : UBasic_Label_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	TArray<FText> texts; // 0x2f8(0x10)
	float DelayBetweenText; // 0x308(0x04)
	float TextDuration; // 0x30c(0x04)
	bool RandomizeText; // 0x310(0x01)
	float RunnerProgress; // 0x314(0x04)
	bool RunnerActive; // 0x318(0x01)
	int32_t NextIndex; // 0x31c(0x04)
	FString CurrentLine; // 0x320(0x10)
	USoundCue* AudioBeginLine; // 0x330(0x08)
	USoundCue* AudioEndLine; // 0x338(0x08)

	void PlayCue(USoundCue* InSound);
	void InitRun();
	void SetNextLine();
	void SetRunnerProgress(float InProgress, bool Finished);
	void SetTextRunnerActive(bool Inactive);
	void SetTexts(TArray<FText> InTexts);
	void OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
	void Completed_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime);
	void PreConstruct(bool IsDesignTime);
	void DoRun();
	void Destruct();
	void ExecuteUbergraph_UI_RunningMultiText(int32_t EntryPoint);
};

