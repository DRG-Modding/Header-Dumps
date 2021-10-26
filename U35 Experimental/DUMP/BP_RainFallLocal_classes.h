// BlueprintGeneratedClass BP_RainFallLocal.BP_RainFallLocal_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_RainFallLocal_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_CaveFX_Rain01; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool PlayerInsideGas; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_RainFallLocal(int32_t EntryPoint);
};

