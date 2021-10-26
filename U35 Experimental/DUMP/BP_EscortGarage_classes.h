// BlueprintGeneratedClass BP_EscortGarage.BP_EscortGarage_C
// Size: 0x430 (Inherited: 0x2b0)
struct ABP_EscortGarage_C : ARessuplyPod {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* DroppodImpactCarver1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* DroppodImpactCarver; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* buttonLight_04; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* buttonLight_03; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* buttonLight_02; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* buttonLight_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ButtonMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ButtonMesh3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ButtonMesh2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* ButtonMesh1; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* buttons; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DrillDozerSpawnPoint; 
	UPROPERTY(BlueprintReadWrite) UActorTrackingComponent* ActorTracking; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapBack1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapBack0; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapLeft1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapLeft0; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapRight1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapRight0; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapFront1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_FlapFront0; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_Inside3; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_Inside2; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_Inside1; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight_Inside0; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* CollisionDecending; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere3; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere2; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere1; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* RespawnLocation; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_DrillDozerGarage; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UAutoCarverComponent* AutoCarver; 
	UPROPERTY(BlueprintReadWrite) USingleUsableComponent* SingleUsable; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* Drill; 
	UPROPERTY(BlueprintReadWrite) AActor* EscortMuleClass; 
	UPROPERTY(BlueprintReadWrite) bool HasBeenOpened; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles01; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* DrillParticles02; 
	UPROPERTY(BlueprintReadWrite) AEscortMule* SpawnedMule; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* NewVar_1; 

	UFUNCTION(BlueprintCallable) void OnRep_HasBeenOpened();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void OnDropStarted();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_EscortGarage(int32_t EntryPoint);
};

