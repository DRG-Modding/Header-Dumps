// BlueprintGeneratedClass BP_Geyser_Frost.BP_Geyser_Frost_C
// Size: 0x2e0 (Inherited: 0x228)
struct ABP_Geyser_Frost_C : ABP_Geyser_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UAudioComponent* GeyserSandIdle_Cue; // 0x230(0x08)
	struct UAudioComponent* GeyserSandErupt_Cue; // 0x238(0x08)
	struct UCapsuleComponent* Capsule-Inside; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x248(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver-Outside; // 0x250(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver-Inside; // 0x258(0x08)
	struct UStaticMeshComponent* Cylender; // 0x260(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x268(0x08)
	struct UCapsuleComponent* Capsule-Outside; // 0x270(0x08)
	struct UParticleSystemComponent* Particle_Erupt; // 0x278(0x08)
	struct UParticleSystemComponent* Particle_Idle; // 0x280(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x288(0x08)
	struct USceneComponent* SharedRoot; // 0x290(0x08)
	struct FVector2D  Max; // 0x298(0x08)
	struct FVector2D  Max; // 0x2a0(0x08)
	float TraceDown; // 0x2a8(0x04)
	bool VolcanoEruptionDanger; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	float AirPush; // 0x2b0(0x04)
	struct FVector StartScale; // 0x2b4(0x0c)
	struct TArray<struct APlayerCharacter*> PlayersInside; // 0x2c0(0x10)
	struct TArray<struct APlayerCharacter*> PlayersOutside; // 0x2d0(0x10)

	void OnRep_Explode(); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.OnRep_Explode
	void OnRep_VolcanoEruptionDanger(); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.OnRep_VolcanoEruptionDanger
	void ReceiveBeginPlay(); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.ReceiveBeginPlay
	void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.BndEvt__Capsule-Outside_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.BndEvt__Capsule-Inside_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	void InternalAirPush(); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.InternalAirPush
	void ExecuteUbergraph_BP_Geyser_Frost(int32_t EntryPoint); // Function BP_Geyser_Frost.BP_Geyser_Frost_C.ExecuteUbergraph_BP_Geyser_Frost
};

