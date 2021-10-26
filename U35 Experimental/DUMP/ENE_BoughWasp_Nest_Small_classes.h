// BlueprintGeneratedClass ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C
// Size: 0x3b8 (Inherited: 0x358)
struct AENE_BoughWasp_Nest_Small_C : AInsectSwarmSpawner {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_HollowboughWaspNest_01; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_8FDE92A940E0DE45F55F4885FCDF9646; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_8FDE92A940E0DE45F55F4885FCDF9646; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DeathParticle_2; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DeathParticle_3; 

	UFUNCTION(BlueprintCallable) UStaticMeshComponent* Receive_GetStaticMesh();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void OnNestDeath();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32_t EntryPoint);
};

