// BlueprintGeneratedClass Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C
// Size: 0x1f0 (Inherited: 0x170)
struct UTutorial_Hint_BoscoFirstSoloMission_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct FTutorialHint ReminderHint; // 0x180(0x70)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ReceiveOnInitialized
	void OnLaserPointerEvent(struct FLaserPointerTarget HitInfo); // Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.OnLaserPointerEvent
	void ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int32_t EntryPoint); // Function Tutorial_Hint_BoscoFirstSoloMission.Tutorial_Hint_BoscoFirstSoloMission_C.ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission
};

