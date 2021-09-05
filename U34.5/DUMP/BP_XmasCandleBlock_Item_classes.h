// BlueprintGeneratedClass BP_XmasCandleBlock_Item.BP_XmasCandleBlock_Item_C
// Size: 0x2dc (Inherited: 0x220)
struct ABP_XmasCandleBlock_Item_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* MainLight; // 0x228(0x08)
	UPointLightComponent* PointLight3; // 0x230(0x08)
	UStaticMeshComponent* StaticMesh4; // 0x238(0x08)
	UPointLightComponent* PointLight2; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh3; // 0x248(0x08)
	UPointLightComponent* PointLight1; // 0x250(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x258(0x08)
	UPointLightComponent* PointLight; // 0x260(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x268(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x278(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x280(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x288(0x08)
	UStaticMeshComponent* StaticMesh; // 0x290(0x08)
	USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float CandleFlicker_LightIntensityMod_9FFB83D746EE53EE1A830883D2DC356F; // 0x2a0(0x04)
	enum class ETimelineDirection CandleFlicker__Direction_9FFB83D746EE53EE1A830883D2DC356F; // 0x2a4(0x01)
	UTimelineComponent* CandleFlicker; // 0x2a8(0x08)
	UParticleSystem* deathParticles; // 0x2b0(0x08)
	USoundCue* deathSound; // 0x2b8(0x08)
	TArray<UMaterialInterface*> Mats; // 0x2c0(0x10)
	int32_t NumHits; // 0x2d0(0x04)
	float Originalintensity; // 0x2d4(0x04)
	float TargetIntensity; // 0x2d8(0x04)

	void CandleFlicker__FinishedFunc();
	void CandleFlicker__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void ExecuteUbergraph_BP_XmasCandleBlock_Item(int32_t EntryPoint);
};

