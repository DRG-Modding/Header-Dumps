// BlueprintGeneratedClass BP_GlowingPlant.BP_GlowingPlant_C
// Size: 0x340 (Inherited: 0x290)
struct ABP_GlowingPlant_C : AGlowPlant {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UPointLightComponent* MainLightComponent; // 0x298(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x2a8(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x2b0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2b8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2c0(0x08)
	UPointLightComponent* PointLight4; // 0x2c8(0x08)
	UPointLightComponent* PointLight3; // 0x2d0(0x08)
	UPointLightComponent* PointLight2; // 0x2d8(0x08)
	UPointLightComponent* PointLight1; // 0x2e0(0x08)
	UPointLightComponent* PointLight5; // 0x2e8(0x08)
	USphereComponent* Collider5; // 0x2f0(0x08)
	USphereComponent* Collider4; // 0x2f8(0x08)
	USphereComponent* Collider3; // 0x300(0x08)
	USphereComponent* Collider2; // 0x308(0x08)
	USphereComponent* Collider1; // 0x310(0x08)
	UStaticMeshComponent* GlowPart5; // 0x318(0x08)
	UStaticMeshComponent* GlowPart4; // 0x320(0x08)
	UStaticMeshComponent* GlowPart3; // 0x328(0x08)
	UStaticMeshComponent* GlowPart2; // 0x330(0x08)
	UStaticMeshComponent* GlowPart1; // 0x338(0x08)

	void UserConstructionScript();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void ExecuteUbergraph_BP_GlowingPlant(int32_t EntryPoint);
};

