// BlueprintGeneratedClass Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C
// Size: 0x1f0 (Inherited: 0x170)
struct UTutorial_Hint_BoscoFirstSoloMission_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	FTutorialHint ReminderHint; // 0x180(0x70)

	void ReceiveOnInitialized();
	void OnLaserPointerEvent(FLaserPointerTarget HitInfo);
	void ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int32_t EntryPoint);
};

