// BlueprintGeneratedClass BP_Foliage_OpenOnProximity.BP_Foliage_OpenOnProximity_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_Foliage_OpenOnProximity_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* HitBox_Closed; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* HitBox_Open; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* WalkinTrigger; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision1; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Mesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UAnimSequenceBase* ReactAnimation; 
	UPROPERTY(BlueprintReadWrite) USoundCue* deathSound; 
	UPROPERTY(BlueprintReadWrite) float AnimationDuration; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void Close Flower();
	UFUNCTION(BlueprintCallable) void PlayCloseSequence();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32_t EntryPoint);
};

