// BlueprintGeneratedClass BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C
// Size: 0x5a5 (Inherited: 0x4b0)
struct ABP_StabberVine_Tentacle_C : AStabberVine {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	UCapsuleComponent* LaserPointer; // 0x4b8(0x08)
	UParticleSystemComponent* P_KillerVine_Death; // 0x4c0(0x08)
	UOutlineComponent* outline; // 0x4c8(0x08)
	UStaticMeshComponent* SM_BladeMesh; // 0x4d0(0x08)
	USceneComponent* Rotator; // 0x4d8(0x08)
	USphereComponent* DamageSphere; // 0x4e0(0x08)
	USceneComponent* Head; // 0x4e8(0x08)
	USkeletalMeshComponent* SK_VineMesh; // 0x4f0(0x08)
	USplineComponent* Spline; // 0x4f8(0x08)
	UMotionAudioController* MotionAudioController; // 0x500(0x08)
	UStaticMeshComponent* Weakspot; // 0x508(0x08)
	UAudioComponent* KillerVine_Attack_Cue; // 0x510(0x08)
	UDamageComponent* HeadDamage; // 0x518(0x08)
	UExplosionComponent* Explosion; // 0x520(0x08)
	USceneComponent* DefaultSceneRoot; // 0x528(0x08)
	AENE_StabberVines_C* TentaclesBody_BP; // 0x530(0x08)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x538(0x08)
	FLinearColor IdleColor; // 0x540(0x10)
	FName MaterialColourParamString; // 0x550(0x08)
	FTransform AttackGoalTransform; // 0x560(0x30)
	AActor* CurrentTarget; // 0x590(0x08)
	bool IsDoingMelee; // 0x598(0x01)
	float IdleHeadMovementDuration; // 0x59c(0x04)
	float MeleeAttackDuration; // 0x5a0(0x04)
	bool HitGround; // 0x5a4(0x01)

	FVector GetTargetCenterMass();
	void GetDistanceToHead(FVector InLocation, float Distance);
	void OnRep_TentaclesBody_BP();
	void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector NewTargetLocation, bool HitTerrain);
	void CheckLoS(AActor* LoSCheckTargetActor, bool ClearLoSToTarget);
	void UserConstructionScript();
	void DoMeleeAttack(AActor* AttackTarget);
	void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void HydraMeleeTell(FLinearColor NewColor);
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void KillTentacle();
	void ReceiveBeginPlay();
	void Recieve_OnRep_Owner();
	void PlayPreAttackSound();
	void PlayAttackCue();
	void ReceiveSplineUpdated();
	void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	void All_PlayHitGround();
	void PlayHitGround();
	void ExecuteUbergraph_BP_StabberVine_Tentacle(int32_t EntryPoint);
};

