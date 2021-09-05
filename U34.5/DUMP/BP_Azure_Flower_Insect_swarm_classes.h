// BlueprintGeneratedClass BP_Azure_Flower_Insect_swarm.BP_Azure_Flower_Insect_swarm_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_Azure_Flower_Insect_swarm_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x228(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x230(0x08)
	UPointLightComponent* PointLight; // 0x238(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_Azure_Flower_Insect_swarm(int32_t EntryPoint);
};

