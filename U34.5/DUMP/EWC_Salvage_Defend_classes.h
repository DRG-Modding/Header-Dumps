// BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Salvage_Defend_C : UEWC_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x08)
	FVector SpawnLocation; // 0x58(0x0c)
	UEnemyGroupDescriptor* EnemyGroup; // 0x68(0x08)
	int32_t Wave Count Waves; // 0x70(0x04)
	int32_t Wave Count Constant Pressure; // 0x74(0x04)

	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_Defend(int32_t EntryPoint);
};

