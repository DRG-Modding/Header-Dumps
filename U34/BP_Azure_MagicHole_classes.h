// BlueprintGeneratedClass BP_Azure_MagicHole.BP_Azure_MagicHole_C
// Size: 0x2a4 (Inherited: 0x220)
struct ABP_Azure_MagicHole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	struct UAudioComponent* AzureMagic_Hole_Cue; // 0x230(0x08)
	struct UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; // 0x238(0x08)
	struct UCapsuleComponent* Capsule; // 0x240(0x08)
	struct UChildActorComponent* BP_MagicHoleBottomDebris; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UParticleSystemComponent* P_Biome_Azure_MagicHole_Sparks; // 0x258(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver_Base; // 0x260(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver_Hole; // 0x268(0x08)
	struct USceneComponent* Carvers; // 0x270(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	struct UPointLightComponent* PointLight; // 0x280(0x08)
	struct UStaticMeshComponent* SM_Carver_DropPodDrill002; // 0x288(0x08)
	struct UStaticMeshComponent* SM_Carver_DropPodDrill001; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float UpwardPush; // 0x2a0(0x04)

	void ReceiveBeginPlay(); // Function BP_Azure_MagicHole.BP_Azure_MagicHole_C.ReceiveBeginPlay
	void OnComponentBeginOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Azure_MagicHole.BP_Azure_MagicHole_C.OnComponentBeginOverlap_Event_1
	void OnComponentEndOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Azure_MagicHole.BP_Azure_MagicHole_C.OnComponentEndOverlap_Event_1
	void ExecuteUbergraph_BP_Azure_MagicHole(int32_t EntryPoint); // Function BP_Azure_MagicHole.BP_Azure_MagicHole_C.ExecuteUbergraph_BP_Azure_MagicHole
};

