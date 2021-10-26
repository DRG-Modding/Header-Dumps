// BlueprintGeneratedClass Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C
// Size: 0x180 (Inherited: 0x170)
struct UTutorial_Hint_BoscoAbility_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)
	float AfterUseDelay; // 0x17c(0x04)

	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void Mark Ready If(bool Condition);
	void OnBoscoChanged(ABosco* Bosco);
	void OnLaserPointerEvent(FLaserPointerTarget HitInfo);
	void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int32_t EntryPoint);
};

