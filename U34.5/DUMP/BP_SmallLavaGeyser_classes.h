// BlueprintGeneratedClass BP_SmallLavaGeyser.BP_SmallLavaGeyser_C
// Size: 0x304 (Inherited: 0x220)
struct ABP_SmallLavaGeyser_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UParticleSystemComponent* ParticleSystemTell; // 0x228(0x08)
	UActorStateComponent* EndErruptionState; // 0x230(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	UBillboardComponent* Billboard; // 0x240(0x08)
	UStaticMeshComponent* SM_Carver_DropPodDrill001; // 0x248(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_HotRockCore; // 0x258(0x08)
	UStaticMeshComponent* SM_Carver_DropPodDrill002; // 0x260(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver_Slag; // 0x268(0x08)
	UPointLightComponent* PointLight; // 0x270(0x08)
	UActorStateComponent* ErruptState; // 0x278(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x280(0x08)
	UStaticMeshComponent* SM_Carver_Rock21; // 0x288(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x290(0x08)
	UCapsuleComponent* Capsule; // 0x298(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float LightIntensity_Intensity_6E1A640541026D247C6B3FA0FE340F1B; // 0x2a8(0x04)
	enum class ETimelineDirection LightIntensity__Direction_6E1A640541026D247C6B3FA0FE340F1B; // 0x2ac(0x01)
	UTimelineComponent* LightIntensity; // 0x2b0(0x08)
	FVector2D ErruptionDurrationMinMax; // 0x2b8(0x08)
	float LightIntensityErrupt; // 0x2c0(0x04)
	float ChainReactionRadius; // 0x2c4(0x04)
	UHealthComponentBase* TargetHealthComponent; // 0x2c8(0x08)
	float ErruptionDelay; // 0x2d0(0x04)
	float OverallErruptionCycleLength; // 0x2d4(0x04)
	float IdleLength; // 0x2d8(0x04)
	int32_t ErruptionDelayMin; // 0x2dc(0x04)
	int32_t ErruptionDelayMax; // 0x2e0(0x04)
	int32_t ErruptionDelayMultiplier; // 0x2e4(0x04)
	float TellLength; // 0x2e8(0x04)
	int32_t NumLoopsInErruptionCycle; // 0x2ec(0x04)
	int32_t NumLoops; // 0x2f0(0x04)
	float TimeBetweenCycles; // 0x2f4(0x04)
	float ErruptionDelayVariation; // 0x2f8(0x04)
	FVector2D ErruptionVariationDellayMinMax; // 0x2fc(0x08)

	void LightIntensity__FinishedFunc();
	void LightIntensity__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__ErruptState_K2Node_ComponentBoundEvent_0_StateDelegate__DelegateSignature(UActorStateComponent* State);
	void PlayErruptionAudio();
	void ShowErruptionGFX();
	void HideErruptionGFX();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__EndErruptionState_K2Node_ComponentBoundEvent_1_StateDelegate__DelegateSignature(UActorStateComponent* State);
	void ErruptionCycleLoop();
	void ExecuteUbergraph_BP_SmallLavaGeyser(int32_t EntryPoint);
};

