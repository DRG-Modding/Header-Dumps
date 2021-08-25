// BlueprintGeneratedClass BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C
// Size: 0x5a5 (Inherited: 0x4b0)
struct ABP_StabberVine_Tentacle_C : AStabberVine {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UCapsuleComponent* LaserPointer; // 0x4b8(0x08)
	struct UParticleSystemComponent* P_KillerVine_Death; // 0x4c0(0x08)
	struct UOutlineComponent* outline; // 0x4c8(0x08)
	struct UStaticMeshComponent* SM_BladeMesh; // 0x4d0(0x08)
	struct USceneComponent* Rotator; // 0x4d8(0x08)
	struct USphereComponent* DamageSphere; // 0x4e0(0x08)
	struct USceneComponent* Head; // 0x4e8(0x08)
	struct USkeletalMeshComponent* SK_VineMesh; // 0x4f0(0x08)
	struct USplineComponent* Spline; // 0x4f8(0x08)
	struct UMotionAudioController* MotionAudioController; // 0x500(0x08)
	struct UStaticMeshComponent* Weakspot; // 0x508(0x08)
	struct UAudioComponent* KillerVine_Attack_Cue; // 0x510(0x08)
	struct UDamageComponent* HeadDamage; // 0x518(0x08)
	struct UExplosionComponent* Explosion; // 0x520(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x528(0x08)
	struct AENE_StabberVines_C* TentaclesBody_BP; // 0x530(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x538(0x08)
	struct FLinearColor IdleColor; // 0x540(0x10)
	struct FName MaterialColourParamString; // 0x550(0x08)
	char UnknownData_558[0x8]; // 0x558(0x08)
	struct FTransform AttackGoalTransform; // 0x560(0x30)
	struct AActor* CurrentTarget; // 0x590(0x08)
	bool IsDoingMelee; // 0x598(0x01)
	char UnknownData_599[0x3]; // 0x599(0x03)
	float IdleHeadMovementDuration; // 0x59c(0x04)
	float MeleeAttackDuration; // 0x5a0(0x04)
	bool HitGround; // 0x5a4(0x01)

	struct FVector GetTargetCenterMass(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.GetTargetCenterMass
	void GetDistanceToHead(struct FVector InLocation, float Distance); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.GetDistanceToHead
	void OnRep_TentaclesBody_BP(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.OnRep_TentaclesBody_BP
	void HitTerrainAndStop(struct FVector TargetLocation, float Penetration, struct FVector NewTargetLocation, bool HitTerrain); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.HitTerrainAndStop
	void CheckLoS(struct AActor* LoSCheckTargetActor, bool ClearLoSToTarget); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.CheckLoS
	void UserConstructionScript(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.UserConstructionScript
	void DoMeleeAttack(struct AActor* AttackTarget); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.DoMeleeAttack
	void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void HydraMeleeTell(struct FLinearColor NewColor); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.HydraMeleeTell
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	void KillTentacle(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.KillTentacle
	void ReceiveBeginPlay(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.ReceiveBeginPlay
	void Recieve_OnRep_Owner(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.Recieve_OnRep_Owner
	void PlayPreAttackSound(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.PlayPreAttackSound
	void PlayAttackCue(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.PlayAttackCue
	void ReceiveSplineUpdated(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.ReceiveSplineUpdated
	void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(enum class EOutline InOutline); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature
	void All_PlayHitGround(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.All_PlayHitGround
	void PlayHitGround(); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.PlayHitGround
	void ExecuteUbergraph_BP_StabberVine_Tentacle(int32_t EntryPoint); // Function BP_StabberVine_Tentacle.BP_StabberVine_Tentacle_C.ExecuteUbergraph_BP_StabberVine_Tentacle
};

