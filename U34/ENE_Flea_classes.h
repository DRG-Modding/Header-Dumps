// BlueprintGeneratedClass ENE_Flea.ENE_Flea_C
// Size: 0x404 (Inherited: 0x398)
struct AENE_Flea_C : AEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UParticleSystemComponent* Trail; // 0x3a0(0x08)
	struct UAudioComponent* Audio Flying; // 0x3a8(0x08)
	struct UAudioComponent* Audio Idle; // 0x3b0(0x08)
	struct UPointLightComponent* PointLight; // 0x3b8(0x08)
	struct USkeletalMeshComponent* Wings; // 0x3c0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3c8(0x08)
	struct UInDangerComponent* InDanger; // 0x3d0(0x08)
	struct UOutlineComponent* outline; // 0x3d8(0x08)
	struct UEnemyComponent* enemy; // 0x3e0(0x08)
	struct USphereComponent* Sphere; // 0x3e8(0x08)
	struct UGroundToAirComponent* GroundToAir; // 0x3f0(0x08)
	float FleeFromplayerRange; // 0x3f8(0x04)
	float MinWalkTIme; // 0x3fc(0x04)
	float MaxWalkTime; // 0x400(0x04)

	void SetWantstoFly(bool Fly); // Function ENE_Flea.ENE_Flea_C.SetWantstoFly
	void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature(); // Function ENE_Flea.ENE_Flea_C.BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature
	void OnMessageAI(struct FName TriggerName); // Function ENE_Flea.ENE_Flea_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Flea.ENE_Flea_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature(); // Function ENE_Flea.ENE_Flea_C.BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature
	void ReceiveBeginPlay(); // Function ENE_Flea.ENE_Flea_C.ReceiveBeginPlay
	void LookforPlayers(); // Function ENE_Flea.ENE_Flea_C.LookforPlayers
	void RandomFlight(); // Function ENE_Flea.ENE_Flea_C.RandomFlight
	void OnFrozen(struct AActor* Source); // Function ENE_Flea.ENE_Flea_C.OnFrozen
	void ExecuteUbergraph_ENE_Flea(int32_t EntryPoint); // Function ENE_Flea.ENE_Flea_C.ExecuteUbergraph_ENE_Flea
};

