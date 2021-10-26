// BlueprintGeneratedClass ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C
// Size: 0x3d0 (Inherited: 0x340)
struct AENE_SmallShootingPlant_RegenPod_C : AHydraWeedHealer {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Hydra_Healing_Seed; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UEnemyBufferComponent* EnemyBuffer; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_NewTrack_0_E713C7134F9737E0824F80801E2D3B4E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_E713C7134F9737E0824F80801E2D3B4E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Size_74F2544C4A1361E2EE80E89D85FD7033; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_74F2544C4A1361E2EE80E89D85FD7033; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) bool IsPupating; 
	UPROPERTY(BlueprintReadWrite) float RegenPodLifetime; 
	UPROPERTY(BlueprintReadWrite) float MaxLightIntensity; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* BuffingSound; 

	UFUNCTION(BlueprintCallable) FVector GetTargetCenterMass();
	UFUNCTION(BlueprintCallable) USkeletalMeshComponent* GetMesh();
	UFUNCTION(BlueprintCallable) UMeshComponent* Receive_GetMeshComponent();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ToggleHealing(bool CanHeal);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void ContinuePupating();
	UFUNCTION(BlueprintCallable) void PausePupating();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_SmallShootingPlant_RegenPod(int32_t EntryPoint);
};

