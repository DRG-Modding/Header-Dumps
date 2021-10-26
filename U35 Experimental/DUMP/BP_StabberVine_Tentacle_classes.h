// BlueprintGeneratedClass BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C
// Size: 0x5a5 (Inherited: 0x4b0)
struct ABP_StabberVine_Tentacle_C : AStabberVine {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* LaserPointer; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_KillerVine_Death; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_BladeMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Rotator; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* DamageSphere; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Head; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SK_VineMesh; 
	UPROPERTY(BlueprintReadWrite) USplineComponent* Spline; 
	UPROPERTY(BlueprintReadWrite) UMotionAudioController* MotionAudioController; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Weakspot; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* KillerVine_Attack_Cue; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* HeadDamage; 
	UPROPERTY(BlueprintReadWrite) UExplosionComponent* Explosion; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) AENE_StabberVines_C* TentaclesBody_BP; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) FLinearColor IdleColor; 
	UPROPERTY(BlueprintReadWrite) FName MaterialColourParamString; 
	UPROPERTY(BlueprintReadWrite) FTransform AttackGoalTransform; 
	UPROPERTY(BlueprintReadWrite) AActor* CurrentTarget; 
	UPROPERTY(BlueprintReadWrite) bool IsDoingMelee; 
	UPROPERTY(BlueprintReadWrite) float IdleHeadMovementDuration; 
	UPROPERTY(BlueprintReadWrite) float MeleeAttackDuration; 
	UPROPERTY(BlueprintReadWrite) bool HitGround; 

	UFUNCTION(BlueprintCallable) FVector GetTargetCenterMass();
	UFUNCTION(BlueprintCallable) void GetDistanceToHead(FVector InLocation, float Distance);
	UFUNCTION(BlueprintCallable) void OnRep_TentaclesBody_BP();
	UFUNCTION(BlueprintCallable) void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector NewTargetLocation, bool HitTerrain);
	UFUNCTION(BlueprintCallable) void CheckLoS(AActor* LoSCheckTargetActor, bool ClearLoSToTarget);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void DoMeleeAttack(AActor* AttackTarget);
	UFUNCTION(BlueprintCallable) void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void HydraMeleeTell(FLinearColor NewColor);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void KillTentacle();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Recieve_OnRep_Owner();
	UFUNCTION(BlueprintCallable) void PlayPreAttackSound();
	UFUNCTION(BlueprintCallable) void PlayAttackCue();
	UFUNCTION(BlueprintCallable) void ReceiveSplineUpdated();
	UFUNCTION(BlueprintCallable) void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	UFUNCTION(BlueprintCallable) void All_PlayHitGround();
	UFUNCTION(BlueprintCallable) void PlayHitGround();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_StabberVine_Tentacle(int32_t EntryPoint);
};

