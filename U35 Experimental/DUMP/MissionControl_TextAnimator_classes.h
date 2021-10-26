// WidgetBlueprintGeneratedClass MissionControl_TextAnimator.MissionControl_TextAnimator_C
// Size: 0x2a4 (Inherited: 0x230)
struct UMissionControl_TextAnimator_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimTextRun; // 0x238(0x08)
	URichTextBlock* TextBlock; // 0x240(0x08)
	FText Text; // 0x248(0x18)
	FRichTextParseResult Parser; // 0x260(0x40)
	float AnimProgress; // 0x2a0(0x04)

	void GetFirstWord(FString inString, FString OutWord);
	void SetAnimProgress(float AnimProgress);
	void SetText(FText InText, int32_t Unformatted Length);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_MissionControl_TextAnimator(int32_t EntryPoint);
};

