// BlueprintGeneratedClass BP_Ebonut.BP_Ebonut_C
// Size: 0x302 (Inherited: 0x268)
struct ABP_Ebonut_C : ABP_Collectible_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UPointLightComponent* PointLight1; // 0x270(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	UPathfinderCollisionComponent* PathfinderWalkable; // 0x280(0x08)
	UPointLightComponent* PointLight; // 0x288(0x08)
	USceneComponent* PickupParticleSpawnPoint; // 0x290(0x08)
	UAudioComponent* OpenHit; // 0x298(0x08)
	UAudioComponent* 2ndHit; // 0x2a0(0x08)
	UAudioComponent* 1stHit; // 0x2a8(0x08)
	UStaticMeshComponent* Shell3; // 0x2b0(0x08)
	UStaticMeshComponent* Shell2; // 0x2b8(0x08)
	UStaticMeshComponent* Shell1; // 0x2c0(0x08)
	UStaticMeshComponent* CoreMesh; // 0x2c8(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x2d0(0x08)
	UStaticMeshComponent* BaseMesh; // 0x2d8(0x08)
	float ScaleDown_NewTrack_0_F8D011474F43755B827C2BB8FCF9590F; // 0x2e0(0x04)
	enum class ETimelineDirection ScaleDown__Direction_F8D011474F43755B827C2BB8FCF9590F; // 0x2e4(0x01)
	UTimelineComponent* ScaleDown; // 0x2e8(0x08)
	float FirstThreshold; // 0x2f0(0x04)
	float SecondThreshold; // 0x2f4(0x04)
	UStaticMeshComponent* NewVar_1; // 0x2f8(0x08)
	enum class EEbonutState State; // 0x300(0x01)
	bool CunksAreLoose; // 0x301(0x01)

	void ShowOpen2();
	void SetState(enum class EEbonutState State);
	void OnRep_State();
	void ScaleDown__FinishedFunc();
	void ScaleDown__UpdateFunc();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	void RemoveChunks();
	void PickedUp();
	void FirstHit();
	void SecondHit();
	void CrackOpen();
	void PlayDeath();
	void ExecuteUbergraph_BP_Ebonut(int32_t EntryPoint);
};

