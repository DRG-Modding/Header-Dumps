// WidgetBlueprintGeneratedClass UI_RunningMultiText.UI_RunningMultiText_C
// Size: 0x328 (Inherited: 0x2d1)
struct UUI_RunningMultiText_C : UUI_GenericLabel_C {
	char UnknownData_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct TArray<struct FText> texts; // 0x2e0(0x10)
	float DelayBetweenText; // 0x2f0(0x04)
	float TextDuration; // 0x2f4(0x04)
	bool RandomizeText; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	float RunnerProgress; // 0x2fc(0x04)
	bool RunnerActive; // 0x300(0x01)
	char UnknownData_301[0x3]; // 0x301(0x03)
	int32_t NextIndex; // 0x304(0x04)
	struct FString CurrentLine; // 0x308(0x10)
	struct USoundCue* AudioBeginLine; // 0x318(0x08)
	struct USoundCue* AudioEndLine; // 0x320(0x08)

	void PlayCue(struct USoundCue* InSound); // Function UI_RunningMultiText.UI_RunningMultiText_C.PlayCue
	void InitRun(); // Function UI_RunningMultiText.UI_RunningMultiText_C.InitRun
	void SetNextLine(); // Function UI_RunningMultiText.UI_RunningMultiText_C.SetNextLine
	void SetRunnerProgress(float InProgress, bool Finished); // Function UI_RunningMultiText.UI_RunningMultiText_C.SetRunnerProgress
	void SetTextRunnerActive(bool Inactive); // Function UI_RunningMultiText.UI_RunningMultiText_C.SetTextRunnerActive
	void SetTexts(struct TArray<struct FText> InTexts); // Function UI_RunningMultiText.UI_RunningMultiText_C.SetTexts
	void OnTick_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime); // Function UI_RunningMultiText.UI_RunningMultiText_C.OnTick_B06C42A944ABEA2C4BF8E7AF24421023
	void Completed_B06C42A944ABEA2C4BF8E7AF24421023(float DeltaTime, float NormalizedTime); // Function UI_RunningMultiText.UI_RunningMultiText_C.Completed_B06C42A944ABEA2C4BF8E7AF24421023
	void PreConstruct(bool IsDesignTime); // Function UI_RunningMultiText.UI_RunningMultiText_C.PreConstruct
	void DoRun(); // Function UI_RunningMultiText.UI_RunningMultiText_C.DoRun
	void Destruct(); // Function UI_RunningMultiText.UI_RunningMultiText_C.Destruct
	void ExecuteUbergraph_UI_RunningMultiText(int32_t EntryPoint); // Function UI_RunningMultiText.UI_RunningMultiText_C.ExecuteUbergraph_UI_RunningMultiText
};

