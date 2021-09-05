// BlueprintGeneratedClass BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_ExplodingPlant_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDamageComponent* Damage; // 0x228(0x08)
	UObjectTemperatureComponent* ObjectTemperature; // 0x230(0x08)
	UStaticObjectAfflictionComponent* StaticObjectAffliction; // 0x238(0x08)
	UStatusEffectsComponent* StatusEffects; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x258(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	UPointLightComponent* PointLight; // 0x268(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x270(0x08)
	UOutlineComponent* outline; // 0x278(0x08)
	UStaticMeshComponent* StaticMesh; // 0x280(0x08)
	USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	FVector Timeline_InflateAnim_InflateVector_21E5AF314623B026BED1ED9ADE4D198B; // 0x290(0x0c)
	enum class ETimelineDirection Timeline_InflateAnim__Direction_21E5AF314623B026BED1ED9ADE4D198B; // 0x29c(0x01)
	UTimelineComponent* Timeline_InflateAnim; // 0x2a0(0x08)
	FScaledEffect ExplosionParticles; // 0x2a8(0x10)
	FVector ExplosionOffset; // 0x2b8(0x0c)
	USoundCue* ExplosionAudio; // 0x2c8(0x08)
	float CarveDiamter; // 0x2d0(0x04)
	UMaterialInstanceDynamic* Dynamic Material; // 0x2d8(0x08)
	float InitialHealth; // 0x2e0(0x04)
	FVector MeshScale; // 0x2e4(0x0c)
	float InflationScale; // 0x2f0(0x04)
	float BaseMaterialOffset; // 0x2f4(0x04)
	float BaseMaterialEmissive; // 0x2f8(0x04)
	float BaseLightIntensity; // 0x2fc(0x04)
	UMaterialInterface* Decal; // 0x300(0x08)

	float DistanceToLocalPlayer();
	void UserConstructionScript();
	void Timeline_InflateAnim__FinishedFunc();
	void Timeline_InflateAnim__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void OnTerrainPointRemoved();
	void ExecuteUbergraph_BP_ExplodingPlant_Base(int32_t EntryPoint);
};

