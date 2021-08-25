// BlueprintGeneratedClass BP_DropSpike_Base.BP_DropSpike_Base_C
// Size: 0x371 (Inherited: 0x220)
struct ABP_DropSpike_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDamageComponent* DirectDamage; // 0x228(0x08)
	struct UDamageComponent* Damage; // 0x230(0x08)
	struct UExplosionComponent* Explosion; // 0x238(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x240(0x08)
	struct UCapsuleComponent* SpikeCapsule; // 0x248(0x08)
	struct USceneComponent* SpikeScaler; // 0x250(0x08)
	struct UStaticMeshComponent* Spike; // 0x258(0x08)
	struct USphereComponent* DamageTrigger; // 0x260(0x08)
	struct USphereComponent* GrenadeSphere; // 0x268(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x270(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x278(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	float LifespanAfterTrigger; // 0x290(0x04)
	bool IsTriggered; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)
	float MinAcceptableDistanceToFloor; // 0x298(0x04)
	float MaxAcceptableDistanceToFloor; // 0x29c(0x04)
	float DistanceToFloor; // 0x2a0(0x04)
	struct FVector FloorHitLocation; // 0x2a4(0x0c)
	bool DoWarning; // 0x2b0(0x01)
	char UnknownData_2B1[0x3]; // 0x2b1(0x03)
	float TriggerDropProbability; // 0x2b4(0x04)
	float MaxTriggerDelay; // 0x2b8(0x04)
	float BaseDamageAmmount; // 0x2bc(0x04)
	bool DoClearNearbyDebris; // 0x2c0(0x01)
	bool IsSilent; // 0x2c1(0x01)
	char UnknownData_2C2[0x2]; // 0x2c2(0x02)
	struct FVector2D DamageMinMax; // 0x2c4(0x08)
	float ChainReactionProbability; // 0x2cc(0x04)
	float ChainReactionDistance; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct UTerrainMaterial* SpikeCarveMaterial; // 0x2d8(0x08)
	struct UStaticMesh* SpikeCarveMesh; // 0x2e0(0x08)
	struct UMaterialInterface* SpikeStaticMeshMaterial; // 0x2e8(0x08)
	struct UStaticMesh* BaseCarveMesh; // 0x2f0(0x08)
	char UnknownData_2F8[0x8]; // 0x2f8(0x08)
	struct FTransform BaseCarveTransform; // 0x300(0x30)
	struct FVector impactLocation; // 0x330(0x0c)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct UParticleSystem* WarningParticles; // 0x340(0x08)
	struct UParticleSystem* ImpactParticles; // 0x348(0x08)
	bool ExplodeOnImpact; // 0x350(0x01)
	char UnknownData_351[0x7]; // 0x351(0x07)
	struct UParticleSystem* ExplosionParticles; // 0x358(0x08)
	struct USoundBase* SpikeBreakOffSound; // 0x360(0x08)
	struct USoundBase* ImpactSound; // 0x368(0x08)
	bool CheckForGround; // 0x370(0x01)

	void StartChainReaction(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.StartChainReaction
	void OnRep_DistanceToFloor(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.OnRep_DistanceToFloor
	void ClearNearbyDebris(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ClearNearbyDebris
	void OnRep_DoClearNearbyDebris(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.OnRep_DoClearNearbyDebris
	void DoDamageToTarget(struct AActor* DamageReceiver); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.DoDamageToTarget
	void OnRep_DoWarning(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.OnRep_DoWarning
	void OnRep_IsTriggered(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.OnRep_IsTriggered
	void UserConstructionScript(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ReceiveBeginPlay
	void OnMatchStarted(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.OnMatchStarted
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature
	void BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	void ChainReaction(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ChainReaction
	void Explode(); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.Explode
	void ImpactGround(struct FVector HitLocation); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ImpactGround
	void ReceiveTick(float DeltaSeconds); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ReceiveTick
	void ExecuteUbergraph_BP_DropSpike_Base(int32_t EntryPoint); // Function BP_DropSpike_Base.BP_DropSpike_Base_C.ExecuteUbergraph_BP_DropSpike_Base
};

