// BlueprintGeneratedClass ENE_FacilityTentacle.ENE_FacilityTentacle_C
// Size: 0x658 (Inherited: 0x520)
struct AENE_FacilityTentacle_C : AFacilityTentacle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	USphereComponent* Sphere2; // 0x528(0x08)
	USphereComponent* Sphere1; // 0x530(0x08)
	USphereComponent* Sphere; // 0x538(0x08)
	UWeakpointGlowComponent* WeaponFireGlow; // 0x540(0x08)
	UNiagaraComponent* NS_Inner_Energy; // 0x548(0x08)
	USkeletalMeshComponent* Head_Mesh; // 0x550(0x08)
	USceneComponent* Rotator2; // 0x558(0x08)
	UCapsuleComponent* LaserPointer; // 0x560(0x08)
	USpotLightComponent* SpotLight; // 0x568(0x08)
	USphereComponent* DamageSphere; // 0x570(0x08)
	UStaticMeshComponent* SM_LightCone001; // 0x578(0x08)
	UBP_TentacleBurrowAttack_C* BurrowAttack; // 0x580(0x08)
	UBP_Tentacle_RangedAttack_C* RangedAttack; // 0x588(0x08)
	UBP_TentacleMeleeAttack_C* MeleeAttack; // 0x590(0x08)
	UAudioComponent* FacilityTentacleSpawn_Cue; // 0x598(0x08)
	UPointLightComponent* PointLight; // 0x5a0(0x08)
	UBillboardComponent* MeleeAttackPosition; // 0x5a8(0x08)
	UBillboardComponent* RangedAttackPosition; // 0x5b0(0x08)
	UOutlineComponent* outline; // 0x5b8(0x08)
	USceneComponent* Head; // 0x5c0(0x08)
	USkeletalMeshComponent* TentacleMesh; // 0x5c8(0x08)
	USplineComponent* Spline; // 0x5d0(0x08)
	UMotionAudioController* MotionAudioController; // 0x5d8(0x08)
	UAudioComponent* TentaclePreImpact; // 0x5e0(0x08)
	UDamageComponent* HeadDamage; // 0x5e8(0x08)
	UExplosionComponent* Explosion; // 0x5f0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x5f8(0x08)
	ABP_MainFacility_DataVault_C* MainFacility_BP; // 0x600(0x08)
	UMaterialInstanceDynamic* DynamicMaterial_Tell; // 0x608(0x08)
	FTransform AttackGoalTransform; // 0x610(0x30)
	AActor* CurrentTarget; // 0x640(0x08)
	float IdleHeadMovementDuration; // 0x648(0x04)
	float MeleeAttackDuration; // 0x64c(0x04)
	bool HitGround; // 0x650(0x01)
	float HeadStuckInGroundDuration; // 0x654(0x04)

	USceneComponent* GetHeadRotator();
	USceneComponent* GetHeadRoot();
	USkeletalMeshComponent* GetMesh();
	void GetTentacle(AENE_FacilityTentacle_C* Tentacle);
	FVector GetTargetCenterMass();
	void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector NewTargetLocation, bool HitTerrain);
	void CheckLoS(AActor* LoSCheckTargetActor, bool ClearLoSToTarget);
	void UserConstructionScript();
	void OnNotifyEnd_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
	void OnNotifyBegin_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
	void OnInterrupted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
	void OnBlendOut_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
	void OnCompleted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
	void OnNotifyEnd_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
	void OnNotifyBegin_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
	void OnInterrupted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
	void OnBlendOut_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
	void OnCompleted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
	void DoMeleeAttack(AActor* AttackTarget);
	void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void KillTentacle();
	void ReceiveBeginPlay();
	void PlayPreAttackSound();
	void PlayAttackCue();
	void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(enum class EOutline InOutline);
	void All_PlayHitGround();
	void PlayHitGround();
	void PlayFinalAttackWarning();
	void OnRangedAttack();
	void HandleDeath();
	void ExecuteUbergraph_ENE_FacilityTentacle(int32_t EntryPoint);
};

