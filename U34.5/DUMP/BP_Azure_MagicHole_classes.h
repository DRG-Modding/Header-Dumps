// BlueprintGeneratedClass BP_Azure_MagicHole.BP_Azure_MagicHole_C
// Size: 0x2a4 (Inherited: 0x220)
struct ABP_Azure_MagicHole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStatusEffectTriggerComponent* StatusEffectTrigger; // 0x228(0x08)
	UAudioComponent* AzureMagic_Hole_Cue; // 0x230(0x08)
	UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; // 0x238(0x08)
	UCapsuleComponent* Capsule; // 0x240(0x08)
	UChildActorComponent* BP_MagicHoleBottomDebris; // 0x248(0x08)
	UBillboardComponent* Billboard; // 0x250(0x08)
	UParticleSystemComponent* P_Biome_Azure_MagicHole_Sparks; // 0x258(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_Base; // 0x260(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_Hole; // 0x268(0x08)
	USceneComponent* Carvers; // 0x270(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x278(0x08)
	UPointLightComponent* PointLight; // 0x280(0x08)
	UStaticMeshComponent* SM_Carver_DropPodDrill002; // 0x288(0x08)
	UStaticMeshComponent* SM_Carver_DropPodDrill001; // 0x290(0x08)
	USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float UpwardPush; // 0x2a0(0x04)

	void ReceiveBeginPlay();
	void OnComponentBeginOverlap_Event_1(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void OnComponentEndOverlap_Event_1(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ExecuteUbergraph_BP_Azure_MagicHole(int32_t EntryPoint);
};

