// BlueprintGeneratedClass ENE_FlyingSmartRock.ENE_FlyingSmartRock_C
// Size: 0x474 (Inherited: 0x398)
struct AENE_FlyingSmartRock_C : AEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UParticleSystemComponent* P_FlyingRock_Birth; // 0x3a0(0x08)
	UParticleSystemComponent* Trail; // 0x3a8(0x08)
	UPointLightComponent* PointLight; // 0x3b0(0x08)
	USphereComponent* Sphere; // 0x3b8(0x08)
	UStaticMeshComponent* Core; // 0x3c0(0x08)
	UAudioComponent* RockAttack_FloatingLoop_Cue; // 0x3c8(0x08)
	UAudioComponent* PrepareToAttack_Cue; // 0x3d0(0x08)
	UDamageComponent* Damage; // 0x3d8(0x08)
	UOutlineComponent* outline; // 0x3e0(0x08)
	UEnemyComponent* enemy; // 0x3e8(0x08)
	float Timeline_1_ScaleMesh_EC054E764BE887708377689ABBE38A90; // 0x3f0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_EC054E764BE887708377689ABBE38A90; // 0x3f4(0x01)
	UTimelineComponent* Timeline_2; // 0x3f8(0x08)
	float Timeline_0_Size_3A168B64422F3454BD6578A9FC2C38D3; // 0x400(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3A168B64422F3454BD6578A9FC2C38D3; // 0x404(0x01)
	UTimelineComponent* Timeline_1; // 0x408(0x08)
	float AttackTell_ParticleScale_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x410(0x04)
	float AttackTell_Light_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x414(0x04)
	enum class ETimelineDirection AttackTell__Direction_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x418(0x01)
	UTimelineComponent* AttackTell; // 0x420(0x08)
	FTimerHandle TimeLOS; // 0x428(0x08)
	float AttackDistance; // 0x430(0x04)
	FVector CoreSize; // 0x434(0x0c)
	float LightRadiusBoost; // 0x440(0x04)
	float LightIntensityBoost; // 0x444(0x04)
	UMaterialInstanceDynamic* DynamicMaterial_Core; // 0x448(0x08)
	float EmissiveBoost; // 0x450(0x04)
	UParticleSystemComponent* ConnectionParticles; // 0x458(0x08)
	AEscortDestination* Heartstone; // 0x460(0x08)
	FVector FinalMeshSize; // 0x468(0x0c)

	void UserConstructionScript();
	void AttackTell__FinishedFunc();
	void AttackTell__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void CollideDamageDie(AActor* OtherActor);
	void ReceiveBeginPlay();
	void CheckTargetLOS();
	void AttackTargetEffects(FVector TargetLocation);
	void StopTell();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ScaleCore();
	void ReceiveTick(float DeltaSeconds);
	void SpawnConnectionParticles();
	void RemoveConnectionParticles();
	void ReceiveDestroyed();
	void ScaleMesh();
	void ExecuteUbergraph_ENE_FlyingSmartRock(int32_t EntryPoint);
};

