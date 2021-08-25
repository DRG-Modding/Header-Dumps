// BlueprintGeneratedClass BP_Geyser_Air.BP_Geyser_Air_C
// Size: 0x321 (Inherited: 0x220)
struct ABP_Geyser_Air_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDamageComponent* Damage; // 0x228(0x08)
	struct UAudioComponent* BublingAudio; // 0x230(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser; // 0x238(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x240(0x08)
	struct UStaticMeshComponent* Cube_1-1-1; // 0x248(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x250(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x260(0x08)
	struct UStaticMeshComponent* Sphere; // 0x268(0x08)
	struct UStaticMeshComponent* PreviewMesh; // 0x270(0x08)
	struct UExplosionComponent* Explosion; // 0x278(0x08)
	struct UTerrainDetectComponent* TerrainDetect4; // 0x280(0x08)
	struct UTerrainDetectComponent* TerrainDetect3; // 0x288(0x08)
	struct UTerrainDetectComponent* TerrainDetect2; // 0x290(0x08)
	struct UTerrainDetectComponent* TerrainDetect1; // 0x298(0x08)
	struct UBillboardComponent* Billboard; // 0x2a0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2a8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2b0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2b8(0x08)
	struct UParticleSystemComponent* Particle_Erupt; // 0x2c0(0x08)
	struct UParticleSystemComponent* Particle_Idle; // 0x2c8(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x2d0(0x08)
	struct UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; // 0x2d8(0x08)
	struct USceneComponent* SharedRoot; // 0x2e0(0x08)
	float Shake_Scale_3CF492A746BF10F4696B82A05FBA1A02; // 0x2e8(0x04)
	char Shake__Direction_3CF492A746BF10F4696B82A05FBA1A02; // 0x2ec(0x01)
	char UnknownData_2ED[0x3]; // 0x2ed(0x03)
	struct UTimelineComponent* Shake; // 0x2f0(0x08)
	struct FVector2D  Max; // 0x2f8(0x08)
	struct FVector2D  Max; // 0x300(0x08)
	float TraceDown; // 0x308(0x04)
	bool VolcanoEruptionDanger; // 0x30c(0x01)
	char UnknownData_30D[0x3]; // 0x30d(0x03)
	float AirPush; // 0x310(0x04)
	struct FVector StartScale; // 0x314(0x0c)
	bool Explode; // 0x320(0x01)

	void OnRep_Explode(); // Function BP_Geyser_Air.BP_Geyser_Air_C.OnRep_Explode
	void OnRep_VolcanoEruptionDanger(); // Function BP_Geyser_Air.BP_Geyser_Air_C.OnRep_VolcanoEruptionDanger
	void Shake__FinishedFunc(); // Function BP_Geyser_Air.BP_Geyser_Air_C.Shake__FinishedFunc
	void Shake__UpdateFunc(); // Function BP_Geyser_Air.BP_Geyser_Air_C.Shake__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Geyser_Air.BP_Geyser_Air_C.ReceiveBeginPlay
	void EnterGeyser(); // Function BP_Geyser_Air.BP_Geyser_Air_C.EnterGeyser
	void PlayDamageSound(struct FVector Location); // Function BP_Geyser_Air.BP_Geyser_Air_C.PlayDamageSound
	void OpenGeyser(); // Function BP_Geyser_Air.BP_Geyser_Air_C.OpenGeyser
	void CloseGeyser(); // Function BP_Geyser_Air.BP_Geyser_Air_C.CloseGeyser
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(); // Function BP_Geyser_Air.BP_Geyser_Air_C.BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(); // Function BP_Geyser_Air.BP_Geyser_Air_C.BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(); // Function BP_Geyser_Air.BP_Geyser_Air_C.BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(); // Function BP_Geyser_Air.BP_Geyser_Air_C.BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature
	void Boom(); // Function BP_Geyser_Air.BP_Geyser_Air_C.Boom
	void ExecuteUbergraph_BP_Geyser_Air(int32_t EntryPoint); // Function BP_Geyser_Air.BP_Geyser_Air_C.ExecuteUbergraph_BP_Geyser_Air
};

