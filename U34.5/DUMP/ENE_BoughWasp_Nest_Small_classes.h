// BlueprintGeneratedClass ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C
// Size: 0x3b8 (Inherited: 0x358)
struct AENE_BoughWasp_Nest_Small_C : AInsectSwarmSpawner {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UPointLightComponent* PointLight; // 0x360(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x378(0x08)
	UStaticMeshComponent* SM_HollowboughWaspNest_01; // 0x380(0x08)
	USceneComponent* Scene; // 0x388(0x08)
	UOutlineComponent* outline; // 0x390(0x08)
	float Timeline_0_NewTrack_0_8FDE92A940E0DE45F55F4885FCDF9646; // 0x398(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8FDE92A940E0DE45F55F4885FCDF9646; // 0x39c(0x01)
	UTimelineComponent* Timeline_1; // 0x3a0(0x08)
	UParticleSystem* DeathParticle_2; // 0x3a8(0x08)
	UParticleSystem* DeathParticle_3; // 0x3b0(0x08)

	UStaticMeshComponent* Receive_GetStaticMesh();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnSwarmSpawned(AInsectSwarmEnemy* Swarm);
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void OnNestDeath();
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32_t EntryPoint);
};

