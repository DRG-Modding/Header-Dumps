// BlueprintGeneratedClass BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_ExplodingPlant_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDamageComponent* Damage; // 0x228(0x08)
	struct UObjectTemperatureComponent* ObjectTemperature; // 0x230(0x08)
	struct UStaticObjectAfflictionComponent* StaticObjectAffliction; // 0x238(0x08)
	struct UStatusEffectsComponent* StatusEffects; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x258(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x270(0x08)
	struct UOutlineComponent* outline; // 0x278(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct FVector Timeline_InflateAnim_InflateVector_21E5AF314623B026BED1ED9ADE4D198B; // 0x290(0x0c)
	char Timeline_InflateAnim__Direction_21E5AF314623B026BED1ED9ADE4D198B; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Timeline_InflateAnim; // 0x2a0(0x08)
	struct FScaledEffect ExplosionParticles; // 0x2a8(0x10)
	struct FVector ExplosionOffset; // 0x2b8(0x0c)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)
	struct USoundCue* ExplosionAudio; // 0x2c8(0x08)
	float CarveDiamter; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x2d8(0x08)
	float InitialHealth; // 0x2e0(0x04)
	struct FVector MeshScale; // 0x2e4(0x0c)
	float InflationScale; // 0x2f0(0x04)
	float BaseMaterialOffset; // 0x2f4(0x04)
	float BaseMaterialEmissive; // 0x2f8(0x04)
	float BaseLightIntensity; // 0x2fc(0x04)
	struct UMaterialInterface* Decal; // 0x300(0x08)

	float DistanceToLocalPlayer(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.DistanceToLocalPlayer
	void UserConstructionScript(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.UserConstructionScript
	void Timeline_InflateAnim__FinishedFunc(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.Timeline_InflateAnim__FinishedFunc
	void Timeline_InflateAnim__UpdateFunc(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.Timeline_InflateAnim__UpdateFunc
	void ReceiveTick(float DeltaSeconds); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.ReceiveTick
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float amount); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_ExplodingPlant_Base(int32_t EntryPoint); // Function BP_ExplodingPlant_Base.BP_ExplodingPlant_Base_C.ExecuteUbergraph_BP_ExplodingPlant_Base
};

