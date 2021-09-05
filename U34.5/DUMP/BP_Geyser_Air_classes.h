// BlueprintGeneratedClass BP_Geyser_Air.BP_Geyser_Air_C
// Size: 0x321 (Inherited: 0x220)
struct ABP_Geyser_Air_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDamageComponent* Damage; // 0x228(0x08)
	UAudioComponent* BublingAudio; // 0x230(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser; // 0x238(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x240(0x08)
	UStaticMeshComponent* Cube_1-1-1; // 0x248(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x250(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x258(0x08)
	UStaticMeshComponent* StaticMesh; // 0x260(0x08)
	UStaticMeshComponent* Sphere; // 0x268(0x08)
	UStaticMeshComponent* PreviewMesh; // 0x270(0x08)
	UExplosionComponent* Explosion; // 0x278(0x08)
	UTerrainDetectComponent* TerrainDetect4; // 0x280(0x08)
	UTerrainDetectComponent* TerrainDetect3; // 0x288(0x08)
	UTerrainDetectComponent* TerrainDetect2; // 0x290(0x08)
	UTerrainDetectComponent* TerrainDetect1; // 0x298(0x08)
	UBillboardComponent* Billboard; // 0x2a0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2a8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2b0(0x08)
	UCapsuleComponent* Capsule; // 0x2b8(0x08)
	UParticleSystemComponent* Particle_Erupt; // 0x2c0(0x08)
	UParticleSystemComponent* Particle_Idle; // 0x2c8(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x2d0(0x08)
	UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; // 0x2d8(0x08)
	USceneComponent* SharedRoot; // 0x2e0(0x08)
	float Shake_Scale_3CF492A746BF10F4696B82A05FBA1A02; // 0x2e8(0x04)
	enum class ETimelineDirection Shake__Direction_3CF492A746BF10F4696B82A05FBA1A02; // 0x2ec(0x01)
	UTimelineComponent* Shake; // 0x2f0(0x08)
	FVector2D  Max; // 0x2f8(0x08)
	FVector2D  Max; // 0x300(0x08)
	float TraceDown; // 0x308(0x04)
	bool VolcanoEruptionDanger; // 0x30c(0x01)
	float AirPush; // 0x310(0x04)
	FVector StartScale; // 0x314(0x0c)
	bool Explode; // 0x320(0x01)

	void OnRep_Explode();
	void OnRep_VolcanoEruptionDanger();
	void Shake__FinishedFunc();
	void Shake__UpdateFunc();
	void ReceiveBeginPlay();
	void EnterGeyser();
	void PlayDamageSound(FVector Location);
	void OpenGeyser();
	void CloseGeyser();
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
	void BOOM();
	void ExecuteUbergraph_BP_Geyser_Air(int32_t EntryPoint);
};

