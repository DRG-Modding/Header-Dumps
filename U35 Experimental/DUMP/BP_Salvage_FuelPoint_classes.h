// BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
// Size: 0x250 (Inherited: 0x231)
struct ABP_Salvage_FuelPoint_C : ABP_Salvage_Point_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) ABP_Salvage_FuelPod_C* Pod; 

	UFUNCTION(BlueprintCallable) void EnableRepair();
	UFUNCTION(BlueprintCallable) void OnDefenseStart();
	UFUNCTION(BlueprintCallable) void OnDefenseComplete();
	UFUNCTION(BlueprintCallable) void OnDefenseFail();
	UFUNCTION(BlueprintCallable) void Call In Pod();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Salvage_FuelPoint(int32_t EntryPoint);
};

