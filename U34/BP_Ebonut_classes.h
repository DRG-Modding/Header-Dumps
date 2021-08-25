// BlueprintGeneratedClass BP_Ebonut.BP_Ebonut_C
// Size: 0x302 (Inherited: 0x268)
struct ABP_Ebonut_C : ABP_Collectible_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UPointLightComponent* PointLight1; // 0x270(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	struct UPathfinderCollisionComponent* PathfinderWalkable; // 0x280(0x08)
	struct UPointLightComponent* PointLight; // 0x288(0x08)
	struct USceneComponent* PickupParticleSpawnPoint; // 0x290(0x08)
	struct UAudioComponent* OpenHit; // 0x298(0x08)
	struct UAudioComponent* 2ndHit; // 0x2a0(0x08)
	struct UAudioComponent* 1stHit; // 0x2a8(0x08)
	struct UStaticMeshComponent* Shell3; // 0x2b0(0x08)
	struct UStaticMeshComponent* Shell2; // 0x2b8(0x08)
	struct UStaticMeshComponent* Shell1; // 0x2c0(0x08)
	struct UStaticMeshComponent* CoreMesh; // 0x2c8(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x2d0(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x2d8(0x08)
	float ScaleDown_NewTrack_0_F8D011474F43755B827C2BB8FCF9590F; // 0x2e0(0x04)
	char ScaleDown__Direction_F8D011474F43755B827C2BB8FCF9590F; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* ScaleDown; // 0x2e8(0x08)
	float FirstThreshold; // 0x2f0(0x04)
	float SecondThreshold; // 0x2f4(0x04)
	struct UStaticMeshComponent* NewVar_1; // 0x2f8(0x08)
	char State; // 0x300(0x01)
	bool CunksAreLoose; // 0x301(0x01)

	void ShowOpen2(); // Function BP_Ebonut.BP_Ebonut_C.ShowOpen2
	void SetState(char State); // Function BP_Ebonut.BP_Ebonut_C.SetState
	void OnRep_State(); // Function BP_Ebonut.BP_Ebonut_C.OnRep_State
	void ScaleDown__FinishedFunc(); // Function BP_Ebonut.BP_Ebonut_C.ScaleDown__FinishedFunc
	void ScaleDown__UpdateFunc(); // Function BP_Ebonut.BP_Ebonut_C.ScaleDown__UpdateFunc
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_Ebonut.BP_Ebonut_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount); // Function BP_Ebonut.BP_Ebonut_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature
	void RemoveChunks(); // Function BP_Ebonut.BP_Ebonut_C.RemoveChunks
	void PickedUp(); // Function BP_Ebonut.BP_Ebonut_C.PickedUp
	void FirstHit(); // Function BP_Ebonut.BP_Ebonut_C.FirstHit
	void SecondHit(); // Function BP_Ebonut.BP_Ebonut_C.SecondHit
	void CrackOpen(); // Function BP_Ebonut.BP_Ebonut_C.CrackOpen
	void PlayDeath(); // Function BP_Ebonut.BP_Ebonut_C.PlayDeath
	void ExecuteUbergraph_BP_Ebonut(int32_t EntryPoint); // Function BP_Ebonut.BP_Ebonut_C.ExecuteUbergraph_BP_Ebonut
};

