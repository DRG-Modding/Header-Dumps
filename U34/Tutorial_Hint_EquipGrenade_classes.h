// BlueprintGeneratedClass Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C
// Size: 0x184 (Inherited: 0x170)
struct UTutorial_Hint_EquipGrenade_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	bool HasEquipped; // 0x178(0x01)
	char UnknownData_179[0x3]; // 0x179(0x03)
	float FirstTimeDelay; // 0x17c(0x04)
	float AfterUseDelay; // 0x180(0x04)

	void GrenadeThrown(); // Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.GrenadeThrown
	void ReceiveOnInitialized(); // Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnInitialized
	void ReceiveOnHidden(); // Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnHidden
	void ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int32_t EntryPoint); // Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ExecuteUbergraph_Tutorial_Hint_EquipGrenade
};

