// BlueprintGeneratedClass BP_Pumpkin_Item.BP_Pumpkin_Item_C
// Size: 0x279 (Inherited: 0x220)
struct ABP_Pumpkin_Item_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* deathParticles; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMesh*> PumpkinOptions; 
	UPROPERTY(BlueprintReadWrite) char PumpkinMesh; 

	UFUNCTION(BlueprintCallable) void OnRep_PumpkinMesh();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void OnTerrainPointRemoved();
	UFUNCTION(BlueprintCallable) void EvilLaugh(FVector Location);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Pumpkin_Item(int32_t EntryPoint);
};

