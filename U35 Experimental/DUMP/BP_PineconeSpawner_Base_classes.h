// BlueprintGeneratedClass BP_PineconeSpawner_Base.BP_PineconeSpawner_Base_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_PineconeSpawner_Base_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* U33_BiomPlant_Pinecone; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* PineCones; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_HollowBoughBranch_05; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* SpawnPoint; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) AActor* ClassToSpawn; 
	UPROPERTY(BlueprintReadWrite) float FallChance; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMeshComponent*> DeadCones; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMeshComponent*> AliveCones; 

	UFUNCTION(BlueprintCallable) void OnRep_DeadCones();
	UFUNCTION(BlueprintCallable) void SpawnPinecone(UStaticMeshComponent* PineCone);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PineconeSpawner_Base(int32_t EntryPoint);
};

