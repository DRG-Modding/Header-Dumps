// BlueprintGeneratedClass Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C
// Size: 0x184 (Inherited: 0x170)
struct UTutorial_Hint_EquipGrenade_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	bool HasEquipped; // 0x178(0x01)
	float FirstTimeDelay; // 0x17c(0x04)
	float AfterUseDelay; // 0x180(0x04)

	void GrenadeThrown();
	void ReceiveOnInitialized();
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int32_t EntryPoint);
};

