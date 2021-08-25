// BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Salvage_Defend_C : UEWC_Base_C {
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	struct FVector SpawnLocation; // 0x58(0x0c)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct UEnemyGroupDescriptor* EnemyGroup; // 0x68(0x08)
	int32_t Wave Count Waves; // 0x70(0x04)
	int32_t Wave Count Constant Pressure; // 0x74(0x04)

	void StartWave(); // Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.StartWave
	void ExecuteUbergraph_EWC_Salvage_Defend(int32_t EntryPoint); // Function EWC_Salvage_Defend.EWC_Salvage_Defend_C.ExecuteUbergraph_EWC_Salvage_Defend
};

