// BlueprintGeneratedClass ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C
// Size: 0x3a0 (Inherited: 0x358)
struct AENE_InsectSwarm_Spawner_C : AInsectSwarmSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UPointLightComponent* PointLight; // 0x360(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x378(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x380(0x08)
	struct UOutlineComponent* outline; // 0x388(0x08)
	float Timeline_0_NewTrack_0_24041E04487F50C14665D9A721366BB3; // 0x390(0x04)
	char Timeline_0__Direction_24041E04487F50C14665D9A721366BB3; // 0x394(0x01)
	char UnknownData_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* Timeline_1; // 0x398(0x08)

	struct UStaticMeshComponent* Receive_GetStaticMesh(); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.Receive_GetStaticMesh
	void Timeline_0__FinishedFunc(); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.Timeline_0__UpdateFunc
	void OnSwarmSpawned(struct AInsectSwarmEnemy* Swarm); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.OnSwarmSpawned
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.OnFrozen
	void OnUnFrozen(); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.OnUnFrozen
	void ExecuteUbergraph_ENE_InsectSwarm_Spawner(int32_t EntryPoint); // Function ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C.ExecuteUbergraph_ENE_InsectSwarm_Spawner
};

