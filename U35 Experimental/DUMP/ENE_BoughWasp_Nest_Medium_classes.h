// BlueprintGeneratedClass ENE_BoughWasp_Nest_Medium.ENE_BoughWasp_Nest_Medium_C
// Size: 0x3c8 (Inherited: 0x3b8)
struct AENE_BoughWasp_Nest_Medium_C : AENE_BoughWasp_Nest_Small_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_HollowboughWaspNest_03; 

	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void OnNestDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_BoughWasp_Nest_Medium(int32_t EntryPoint);
};

