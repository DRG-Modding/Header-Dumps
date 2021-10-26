// BlueprintGeneratedClass ENE_FlyingSmartRock.ENE_FlyingSmartRock_C
// Size: 0x474 (Inherited: 0x398)
struct AENE_FlyingSmartRock_C : AEnemyDeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_FlyingRock_Birth; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Trail; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Core; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* RockAttack_FloatingLoop_Cue; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* PrepareToAttack_Cue; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_ScaleMesh_EC054E764BE887708377689ABBE38A90; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_EC054E764BE887708377689ABBE38A90; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Size_3A168B64422F3454BD6578A9FC2C38D3; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_3A168B64422F3454BD6578A9FC2C38D3; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float AttackTell_ParticleScale_AADFBFDA4F8A42D878B608A53FD58DB2; 
	UPROPERTY(BlueprintReadWrite) float AttackTell_Light_AADFBFDA4F8A42D878B608A53FD58DB2; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection AttackTell__Direction_AADFBFDA4F8A42D878B608A53FD58DB2; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* AttackTell; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle TimeLOS; 
	UPROPERTY(BlueprintReadWrite) float AttackDistance; 
	UPROPERTY(BlueprintReadWrite) FVector CoreSize; 
	UPROPERTY(BlueprintReadWrite) float LightRadiusBoost; 
	UPROPERTY(BlueprintReadWrite) float LightIntensityBoost; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial_Core; 
	UPROPERTY(BlueprintReadWrite) float EmissiveBoost; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ConnectionParticles; 
	UPROPERTY(BlueprintReadWrite) AEscortDestination* Heartstone; 
	UPROPERTY(BlueprintReadWrite) FVector FinalMeshSize; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void AttackTell__FinishedFunc();
	UFUNCTION(BlueprintCallable) void AttackTell__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void CollideDamageDie(AActor* OtherActor);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void CheckTargetLOS();
	UFUNCTION(BlueprintCallable) void AttackTargetEffects(FVector TargetLocation);
	UFUNCTION(BlueprintCallable) void StopTell();
	UFUNCTION(BlueprintCallable) void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void ScaleCore();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void SpawnConnectionParticles();
	UFUNCTION(BlueprintCallable) void RemoveConnectionParticles();
	UFUNCTION(BlueprintCallable) void ReceiveDestroyed();
	UFUNCTION(BlueprintCallable) void ScaleMesh();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_FlyingSmartRock(int32_t EntryPoint);
};

