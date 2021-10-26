// WidgetBlueprintGeneratedClass MissionControl_MainDialogue.MissionControl_MainDialogue_C
// Size: 0x2e0 (Inherited: 0x250)
struct UMissionControl_MainDialogue_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* AnimIn; // 0x258(0x08)
	UImage* BorderInner; // 0x260(0x08)
	UImage* BorderOuter; // 0x268(0x08)
	UUI_MaskedImage_C* CharacterIcon; // 0x270(0x08)
	UTextBlock* ClassLabel; // 0x278(0x08)
	UImage* Image_109; // 0x280(0x08)
	UImage* Image_110; // 0x288(0x08)
	UMissionControl_TextAnimator_C* MissionControl_TextAnimator; // 0x290(0x08)
	UDialogDataAsset* PreviewShout; // 0x298(0x08)
	bool ManuallyControlled; // 0x2a0(0x01)
	FText Text; // 0x2a8(0x18)
	float Duration; // 0x2c0(0x04)
	float StartTime; // 0x2c4(0x04)
	FTimerHandle TickHandle; // 0x2c8(0x08)
	UAudioComponent* ManualSpeakComponent; // 0x2d0(0x08)
	FTimerHandle HideHandle; // 0x2d8(0x08)

	void SetPreview(UDialogDataAsset* PreviewShout);
	void Reset();
	void SetProgress(float Progress, bool Finished);
	void TickRunningText();
	void StopRunningText();
	void SpeakEntryManually(FDialogStruct Entry, float Duration, UAudioComponent* AudioComponent);
	void SpeakManually(UDialogDataAsset* MissionShout, float Duration, UAudioComponent* AudioComponent);
	void Start Running Text(FText Text, float Duration);
	void OnMissionShout(FText Text, float Duration);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnMissionShoutEnd();
	void HideMissionShout();
	void ExecuteUbergraph_MissionControl_MainDialogue(int32_t EntryPoint);
};

