// BlueprintGeneratedClass BP_PlatformIcePlant.BP_PlatformIcePlant_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_PlatformIcePlant_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* SpawnPoint; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Body; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float SpawnDelay; 

	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PlatformIcePlant(int32_t EntryPoint);
};

