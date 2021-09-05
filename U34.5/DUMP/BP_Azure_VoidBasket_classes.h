// BlueprintGeneratedClass BP_Azure_VoidBasket.BP_Azure_VoidBasket_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_Azure_VoidBasket_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	UAudioComponent* HollowBall Idle Sound; // 0x238(0x08)
	UPointLightComponent* PointLight; // 0x240(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	UParticleSystemComponent* P_Flower_HollowBall_lightdust; // 0x258(0x08)
	UStaticMeshComponent* SM_LightCone; // 0x260(0x08)
	UStaticMeshComponent* SM_HollowBall; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)

	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_Azure_VoidBasket(int32_t EntryPoint);
};

