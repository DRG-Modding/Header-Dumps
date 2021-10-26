// BlueprintGeneratedClass EWC_EggHunt_Ambush.EWC_EggHunt_Ambush_C
// Size: 0x64 (Inherited: 0x4c)
struct UEWC_EggHunt_Ambush_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector SpawnLocation; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_EggHunt_Ambush(int32_t EntryPoint);
};

