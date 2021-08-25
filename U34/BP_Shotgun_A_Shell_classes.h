// BlueprintGeneratedClass BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C
// Size: 0x268 (Inherited: 0x25c)
struct ABP_Shotgun_A_Shell_C : AMAG_BaseClass_C {
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)

	bool Attached(struct AActor* Parent); // Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.Attached
	void OnItemSkinned(struct USkinEffect* Skin); // Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.OnItemSkinned
	void ExecuteUbergraph_BP_Shotgun_A_Shell(int32_t EntryPoint); // Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.ExecuteUbergraph_BP_Shotgun_A_Shell
};

