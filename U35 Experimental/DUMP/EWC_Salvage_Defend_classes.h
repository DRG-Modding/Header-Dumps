// BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C
// Size: 0x78 (Inherited: 0x4c)
struct UEWC_Salvage_Defend_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector SpawnLocation; 
	UPROPERTY(BlueprintReadWrite) UEnemyGroupDescriptor* EnemyGroup; 
	UPROPERTY(BlueprintReadWrite) int32_t Wave Count Waves; 
	UPROPERTY(BlueprintReadWrite) int32_t Wave Count Constant Pressure; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Salvage_Defend(int32_t EntryPoint);
};

