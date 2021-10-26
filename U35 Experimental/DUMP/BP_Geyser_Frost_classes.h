// BlueprintGeneratedClass BP_Geyser_Frost.BP_Geyser_Frost_C
// Size: 0x2e0 (Inherited: 0x228)
struct ABP_Geyser_Frost_C : ABP_Geyser_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GeyserSandIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GeyserSandErupt_Cue; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule-Inside; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver-Outside; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver-Inside; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cylender; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule-Outside; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Erupt; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Idle; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* SharedRoot; 
	UPROPERTY(BlueprintReadWrite) FVector2D  Max; 
	UPROPERTY(BlueprintReadWrite) FVector2D  Max; 
	UPROPERTY(BlueprintReadWrite) float TraceDown; 
	UPROPERTY(BlueprintReadWrite) bool VolcanoEruptionDanger; 
	UPROPERTY(BlueprintReadWrite) float AirPush; 
	UPROPERTY(BlueprintReadWrite) FVector StartScale; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> PlayersInside; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> PlayersOutside; 

	UFUNCTION(BlueprintCallable) void OnRep_Explode();
	UFUNCTION(BlueprintCallable) void OnRep_VolcanoEruptionDanger();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void InternalAirPush();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Geyser_Frost(int32_t EntryPoint);
};

