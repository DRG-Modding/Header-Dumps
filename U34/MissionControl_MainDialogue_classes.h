// WidgetBlueprintGeneratedClass MissionControl_MainDialogue.MissionControl_MainDialogue_C
// Size: 0x2e8 (Inherited: 0x250)
struct UMissionControl_MainDialogue_C : UFSDUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AnimIn; // 0x258(0x08)
	struct UImage* BorderInner; // 0x260(0x08)
	struct UImage* BorderOuter; // 0x268(0x08)
	struct UUI_MaskedImage_C* CharacterIcon; // 0x270(0x08)
	struct UTextBlock* ClassLabel; // 0x278(0x08)
	struct UTextBlock* HiddenLayoutText; // 0x280(0x08)
	struct UImage* Image_109; // 0x288(0x08)
	struct UImage* Image_110; // 0x290(0x08)
	struct UTextBlock* MessageLabel; // 0x298(0x08)
	struct UDialogDataAsset* PreviewShout; // 0x2a0(0x08)
	bool ManuallyControlled; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct FText Text; // 0x2b0(0x18)
	float Duration; // 0x2c8(0x04)
	float StartTime; // 0x2cc(0x04)
	struct FTimerHandle TickHandle; // 0x2d0(0x08)
	struct UAudioComponent* ManualSpeakComponent; // 0x2d8(0x08)
	struct FTimerHandle HideHandle; // 0x2e0(0x08)

	void SetPreview(struct UDialogDataAsset* PreviewShout); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetPreview
	void Reset(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Reset
	void SetProgress(float Progress, bool Finished); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SetProgress
	void TickRunningText(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.TickRunningText
	void StopRunningText(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.StopRunningText
	void SpeakEntryManually(struct FDialogStruct entry, float Duration, struct UAudioComponent* AudioComponent); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakEntryManually
	void SpeakManually(struct UDialogDataAsset* MissionShout, float Duration, struct UAudioComponent* AudioComponent); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
	void Start Running Text(struct FText Text, float Duration); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Start Running Text
	void OnMissionShout(struct FText Text, float Duration); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
	void Construct(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
	void PreConstruct(bool IsDesignTime); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
	void OnMissionShoutEnd(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
	void HideMissionShout(); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.HideMissionShout
	void ExecuteUbergraph_MissionControl_MainDialogue(int32_t EntryPoint); // Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
};

