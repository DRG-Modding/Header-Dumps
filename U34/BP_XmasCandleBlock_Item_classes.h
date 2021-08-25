// BlueprintGeneratedClass BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C
// Size: 0x2dc (Inherited: 0x220)
struct ABP_XmasCandleBlock_Item_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* MainLight; // 0x228(0x08)
	struct UPointLightComponent* PointLight3; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x238(0x08)
	struct UPointLightComponent* PointLight2; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x248(0x08)
	struct UPointLightComponent* PointLight1; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x258(0x08)
	struct UPointLightComponent* PointLight; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x268(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x278(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x280(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float CandleFlicker_LightIntensityMod_9FFB83D746EE53EE1A830883D2DC356F; // 0x2a0(0x04)
	char CandleFlicker__Direction_9FFB83D746EE53EE1A830883D2DC356F; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* CandleFlicker; // 0x2a8(0x08)
	struct UParticleSystem* deathParticles; // 0x2b0(0x08)
	struct USoundCue* deathSound; // 0x2b8(0x08)
	struct TArray<struct UMaterialInterface*> Mats; // 0x2c0(0x10)
	int32_t NumHits; // 0x2d0(0x04)
	float Originalintensity; // 0x2d4(0x04)
	float TargetIntensity; // 0x2d8(0x04)

	void CandleFlicker__FinishedFunc(); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.CandleFlicker__FinishedFunc
	void CandleFlicker__UpdateFunc(); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.CandleFlicker__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.ReceiveBeginPlay
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.OnTerrainPointRemoved
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void ExecuteUbergraph_BP_XmasCandleBlock_Item(int32_t EntryPoint); // Function BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C.ExecuteUbergraph_BP_XmasCandleBlock_Item
};

