// BlueprintGeneratedClass BP_Donkey_Escort.BP_Donkey_Escort_C
// Size: 0x550 (Inherited: 0x530)
struct ABP_Donkey_Escort_C : ABP_Donkey_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_OmoranHeartStoneMagic_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_OmoranStrap_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* HearthStone; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnResourceIncreased(UCappedResource* Resource, float amount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Donkey_Escort(int32_t EntryPoint);
};

