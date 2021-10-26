// BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C
// Size: 0x231 (Inherited: 0x220)
struct ABP_Salvage_Point_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) char SalvageState; 

	UFUNCTION(BlueprintCallable) void SetSalvagePointState(char State);
	UFUNCTION(BlueprintCallable) void OnRep_State();
	UFUNCTION(BlueprintCallable) void OnDefenseComplete();
	UFUNCTION(BlueprintCallable) void OnDefenseStart();
	UFUNCTION(BlueprintCallable) void EnableRepair();
	UFUNCTION(BlueprintCallable) void OnDefenseFail();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Salvage_Point(int32_t EntryPoint);
};

