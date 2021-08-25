// BlueprintGeneratedClass Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C
// Size: 0x180 (Inherited: 0x170)
struct UTutorial_Hint_BoscoAbility_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)

	void ReceiveOnHidden(); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden
	void ReceiveOnInitialized(); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized
	void Mark Ready If(bool Condition); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If
	void OnBoscoChanged(struct ABosco* Bosco); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged
	void OnLaserPointerEvent(struct FLaserPointerTarget HitInfo); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerEvent
	void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int32_t EntryPoint); // Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility
};

