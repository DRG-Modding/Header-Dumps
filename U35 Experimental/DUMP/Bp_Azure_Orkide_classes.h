// BlueprintGeneratedClass Bp_Azure_Orkide.Bp_Azure_Orkide_C
// Size: 0x288 (Inherited: 0x220)
struct ABp_Azure_Orkide_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* HitBox_Closed; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* HitBox_Open; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* WalkinTrigger; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision1; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Trigger; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Orkid; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void Close Flower();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void PlayCloseSequence();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Bp_Azure_Orkide(int32_t EntryPoint);
};

