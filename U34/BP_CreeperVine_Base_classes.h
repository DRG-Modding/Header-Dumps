// BlueprintGeneratedClass BP_CreeperVine_Base.BP_CreeperVine_Base_C
// Size: 0x4b8 (Inherited: 0x448)
struct ABP_CreeperVine_Base_C : ASplinePlant {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UAudioComponent* HurtAudioComponent; // 0x450(0x08)
	struct UParticleSystemComponent* Trail; // 0x458(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x460(0x08)
	struct UStaticMeshComponent* SM_brokenFloor_01; // 0x468(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x470(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x478(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x480(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x488(0x08)
	struct FTimerHandle CheckPlayersTimer; // 0x490(0x08)
	bool IsRetracted; // 0x498(0x01)
	char UnknownData_499[0x3]; // 0x499(0x03)
	float SplineNodeRandomOffset; // 0x49c(0x04)
	struct USoundBase* HurtAudio; // 0x4a0(0x08)
	float SpeedRetraction; // 0x4a8(0x04)
	float SpeedExtending; // 0x4ac(0x04)
	float LengthRetracted; // 0x4b0(0x04)
	float LastPlayerHitTime; // 0x4b4(0x04)

	void HandleActorOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.HandleActorOverlap
	void HandleActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.HandleActorHit
	void PrepareSpline(struct USplineComponent* InSplineComponent, int32_t InSeed); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.PrepareSpline
	void OnRep_IsRetracted(); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.OnRep_IsRetracted
	void ReceiveBeginPlay(); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature
	void ReceivePrepareSpline(struct USplineComponent* InSplineComponent, int32_t InSeed); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.ReceivePrepareSpline
	void InitiateChainRetract(); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.InitiateChainRetract
	void PlayHurtAudio(float InDamage); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.PlayHurtAudio
	void Retract(); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.Retract
	void ReceiveMovementFinished(float InDistanceProgress); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.ReceiveMovementFinished
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature
	void ExecuteUbergraph_BP_CreeperVine_Base(int32_t EntryPoint); // Function BP_CreeperVine_Base.BP_CreeperVine_Base_C.ExecuteUbergraph_BP_CreeperVine_Base
};

