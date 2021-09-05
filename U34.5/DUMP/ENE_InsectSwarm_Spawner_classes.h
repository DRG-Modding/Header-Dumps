// BlueprintGeneratedClass ENE_InsectSwarm_Spawner.ENE_InsectSwarm_Spawner_C
// Size: 0x3a0 (Inherited: 0x358)
struct AENE_InsectSwarm_Spawner_C : AInsectSwarmSpawner {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UPointLightComponent* PointLight; // 0x360(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x378(0x08)
	UStaticMeshComponent* StaticMesh; // 0x380(0x08)
	UOutlineComponent* outline; // 0x388(0x08)
	float Timeline_0_NewTrack_0_24041E04487F50C14665D9A721366BB3; // 0x390(0x04)
	enum class ETimelineDirection Timeline_0__Direction_24041E04487F50C14665D9A721366BB3; // 0x394(0x01)
	UTimelineComponent* Timeline_1; // 0x398(0x08)

	UStaticMeshComponent* Receive_GetStaticMesh();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void ExecuteUbergraph_ENE_InsectSwarm_Spawner(int32_t EntryPoint);
};

