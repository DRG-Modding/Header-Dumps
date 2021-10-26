// BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C
// Size: 0x64 (Inherited: 0x4c)
struct UEWC_Salvage_Ambush_C : UEWC_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FVector MuleLocation; 

	UFUNCTION(BlueprintCallable) void StartWave();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_EWC_Salvage_Ambush(int32_t EntryPoint);
};

