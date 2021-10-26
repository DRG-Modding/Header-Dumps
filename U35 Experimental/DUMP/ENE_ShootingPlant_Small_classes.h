// BlueprintGeneratedClass ENE_ShootingPlant_Small.ENE_ShootingPlant_Small_C
// Size: 0x3e9 (Inherited: 0x350)
struct AENE_ShootingPlant_Small_C : AHydraWeedShooter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProjectileAttackComponent* ProjectileAttack; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UPawnSensingComponent* PawnSensing; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Growth_Size_F8D1ED0F47A0109E69BA949410BBFBDF; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Growth__Direction_F8D1ED0F47A0109E69BA949410BBFBDF; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Growth; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_B7C1F10347624A87CE535C859B0970CF; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_B7C1F10347624A87CE535C859B0970CF; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) int32_t NumSpawned; 
	UPROPERTY(BlueprintReadWrite) int32_t MaxSpawns; 
	UPROPERTY(BlueprintReadWrite) float MaxSpawnDistance; 
	UPROPERTY(BlueprintReadWrite) bool IsPupating; 
	UPROPERTY(BlueprintReadWrite) float PupationDuration; 
	UPROPERTY(BlueprintReadWrite) enum class Spider_DeathType DeathType; 
	UPROPERTY(BlueprintReadWrite) float MaxLightIntensity; 
	UPROPERTY(BlueprintReadWrite) int32_t NumHitsToWakeUp; 
	UPROPERTY(BlueprintReadWrite) float AggressiveSightRadius; 
	UPROPERTY(BlueprintReadWrite) float PassiveSightRadius; 
	UPROPERTY(BlueprintReadWrite) bool IsPassive; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) UMeshComponent* Receive_GetMeshComponent();
	UFUNCTION(BlueprintCallable) void OnRep_DeathType();
	UFUNCTION(BlueprintCallable) USkeletalMeshComponent* GetMesh();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Growth__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Growth__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void WakeUp();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void NormalDeath();
	UFUNCTION(BlueprintCallable) void WeakpointDeath();
	UFUNCTION(BlueprintCallable) void OnRep_Target();
	UFUNCTION(BlueprintCallable) void ToggleAggressionLevel(bool BePassive);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_ShootingPlant_Small(int32_t EntryPoint);
};

