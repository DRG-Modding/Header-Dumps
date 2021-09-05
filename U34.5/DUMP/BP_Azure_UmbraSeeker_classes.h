// BlueprintGeneratedClass BP_Azure_UmbraSeeker.BP_Azure_UmbraSeeker_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_Azure_UmbraSeeker_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UCapsuleComponent* Capsule3; // 0x228(0x08)
	UCapsuleComponent* Capsule2; // 0x230(0x08)
	UCapsuleComponent* Capsule1; // 0x238(0x08)
	USphereComponent* Sphere; // 0x240(0x08)
	UCapsuleComponent* Capsule; // 0x248(0x08)
	USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Godetia; // 0x250(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x258(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x260(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x268(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x270(0x08)
	UAudioComponent* AzureFlowerIdle_Cue; // 0x278(0x08)
	UPointLightComponent* PointLight; // 0x280(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x288(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x290(0x08)
	UStaticMeshComponent* SM_Biome_AzureWeald_Flower_01; // 0x298(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_Azure_UmbraSeeker(int32_t EntryPoint);
};

