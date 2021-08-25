// BlueprintGeneratedClass ENE_FlyingCritterBase.ENE_FlyingCritterBase_C
// Size: 0x448 (Inherited: 0x3c8)
struct AENE_FlyingCritterBase_C : AFlyingEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UParticleSystemComponent* Trail; // 0x3d0(0x08)
	struct UAudioComponent* Audio Flying; // 0x3d8(0x08)
	struct UAudioComponent* Audio Idle; // 0x3e0(0x08)
	struct UPointLightComponent* PointLight; // 0x3e8(0x08)
	struct USkeletalMeshComponent* Wings; // 0x3f0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3f8(0x08)
	struct UInDangerComponent* InDanger; // 0x400(0x08)
	struct UOutlineComponent* outline; // 0x408(0x08)
	struct UEnemyComponent* enemy; // 0x410(0x08)
	struct USphereComponent* Sphere; // 0x418(0x08)
	struct UGroundToAirComponent* GroundToAir; // 0x420(0x08)
	float FleeFromplayerRange; // 0x428(0x04)
	float MinWalkTIme; // 0x42c(0x04)
	float MaxWalkTime; // 0x430(0x04)
	char UnknownData_434[0x4]; // 0x434(0x04)
	struct USoundCue* deathSound; // 0x438(0x08)
	struct UFXSystemAsset* deathParticles; // 0x440(0x08)

	void SetWantstoFly(bool Fly); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.SetWantstoFly
	void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature(); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature
	void OnMessageAI(struct FName TriggerName); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature(); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature
	void ReceiveBeginPlay(); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.ReceiveBeginPlay
	void LookforPlayers(); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.LookforPlayers
	void RandomFlight(); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.RandomFlight
	void OnFrozen(struct AActor* Source); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.OnFrozen
	void ExecuteUbergraph_ENE_FlyingCritterBase(int32_t EntryPoint); // Function ENE_FlyingCritterBase.ENE_FlyingCritterBase_C.ExecuteUbergraph_ENE_FlyingCritterBase
};

