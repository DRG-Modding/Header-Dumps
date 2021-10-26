// BlueprintGeneratedClass BP_Ebonut.BP_Ebonut_C
// Size: 0x302 (Inherited: 0x268)
struct ABP_Ebonut_C : ABP_Collectible_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight1; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderWalkable; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* PickupParticleSpawnPoint; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* OpenHit; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* 2ndHit; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* 1stHit; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Shell3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Shell2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Shell1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* CoreMesh; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* BaseMesh; 
	UPROPERTY(BlueprintReadWrite) float ScaleDown_NewTrack_0_F8D011474F43755B827C2BB8FCF9590F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection ScaleDown__Direction_F8D011474F43755B827C2BB8FCF9590F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* ScaleDown; 
	UPROPERTY(BlueprintReadWrite) float FirstThreshold; 
	UPROPERTY(BlueprintReadWrite) float SecondThreshold; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* NewVar_1; 
	UPROPERTY(BlueprintReadWrite) enum class EEbonutState State; 
	UPROPERTY(BlueprintReadWrite) bool CunksAreLoose; 

	UFUNCTION(BlueprintCallable) void ShowOpen2();
	UFUNCTION(BlueprintCallable) void SetState(enum class EEbonutState State);
	UFUNCTION(BlueprintCallable) void OnRep_State();
	UFUNCTION(BlueprintCallable) void ScaleDown__FinishedFunc();
	UFUNCTION(BlueprintCallable) void ScaleDown__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void RemoveChunks();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void FirstHit();
	UFUNCTION(BlueprintCallable) void SecondHit();
	UFUNCTION(BlueprintCallable) void CrackOpen();
	UFUNCTION(BlueprintCallable) void PlayDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Ebonut(int32_t EntryPoint);
};

