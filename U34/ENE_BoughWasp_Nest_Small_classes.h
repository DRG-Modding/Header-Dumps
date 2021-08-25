// BlueprintGeneratedClass ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C
// Size: 0x3b8 (Inherited: 0x358)
struct AENE_BoughWasp_Nest_Small_C : AInsectSwarmSpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UPointLightComponent* PointLight; // 0x360(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x368(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x378(0x08)
	struct UStaticMeshComponent* SM_HollowboughWaspNest_01; // 0x380(0x08)
	struct USceneComponent* Scene; // 0x388(0x08)
	struct UOutlineComponent* outline; // 0x390(0x08)
	float Timeline_0_NewTrack_0_8FDE92A940E0DE45F55F4885FCDF9646; // 0x398(0x04)
	char Timeline_0__Direction_8FDE92A940E0DE45F55F4885FCDF9646; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3a0(0x08)
	struct UParticleSystem* DeathParticle_2; // 0x3a8(0x08)
	struct UParticleSystem* DeathParticle_3; // 0x3b0(0x08)

	struct UStaticMeshComponent* Receive_GetStaticMesh(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.Receive_GetStaticMesh
	void Timeline_0__FinishedFunc(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.Timeline_0__UpdateFunc
	void OnSwarmSpawned(struct AInsectSwarmEnemy* Swarm); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.OnSwarmSpawned
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.OnFrozen
	void OnUnFrozen(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.OnUnFrozen
	void OnNestDeath(); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.OnNestDeath
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.BndEvt__Health_K2Node_ComponentBoundEvent_2_DeathSigDetailed__DelegateSignature
	void ExecuteUbergraph_ENE_BoughWasp_Nest_Small(int32_t EntryPoint); // Function ENE_BoughWasp_Nest_Small.ENE_BoughWasp_Nest_Small_C.ExecuteUbergraph_ENE_BoughWasp_Nest_Small
};

