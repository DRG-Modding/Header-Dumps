// BlueprintGeneratedClass BP_Geyser_Frost.BP_Geyser_Frost_C
// Size: 0x2e0 (Inherited: 0x228)
struct ABP_Geyser_Frost_C : ABP_Geyser_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UAudioComponent* GeyserSandIdle_Cue; // 0x230(0x08)
	UAudioComponent* GeyserSandErupt_Cue; // 0x238(0x08)
	UCapsuleComponent* Capsule-Inside; // 0x240(0x08)
	UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver-Outside; // 0x250(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver-Inside; // 0x258(0x08)
	UStaticMeshComponent* Cylender; // 0x260(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x268(0x08)
	UCapsuleComponent* Capsule-Outside; // 0x270(0x08)
	UParticleSystemComponent* Particle_Erupt; // 0x278(0x08)
	UParticleSystemComponent* Particle_Idle; // 0x280(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x288(0x08)
	USceneComponent* SharedRoot; // 0x290(0x08)
	FVector2D  Max; // 0x298(0x08)
	FVector2D  Max; // 0x2a0(0x08)
	float TraceDown; // 0x2a8(0x04)
	bool VolcanoEruptionDanger; // 0x2ac(0x01)
	float AirPush; // 0x2b0(0x04)
	FVector StartScale; // 0x2b4(0x0c)
	TArray<APlayerCharacter*> PlayersInside; // 0x2c0(0x10)
	TArray<APlayerCharacter*> PlayersOutside; // 0x2d0(0x10)

	void OnRep_Explode();
	void OnRep_VolcanoEruptionDanger();
	void ReceiveBeginPlay();
	void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void InternalAirPush();
	void ExecuteUbergraph_BP_Geyser_Frost(int32_t EntryPoint);
};

