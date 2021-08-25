// BlueprintGeneratedClass BP_PoisonGasFungus.BP_PoisonGasFungus_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_PoisonGasFungus_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct USphereComponent* Collider; // 0x230(0x08)
	struct USkeletalMeshComponent* AnimatedBody; // 0x238(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	struct UBillboardComponent* GasReleasePoint; // 0x258(0x08)
	struct USphereComponent* SporesTrigger; // 0x260(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct AActor* GasCloudClass; // 0x278(0x08)
	bool CanTrigger; // 0x280(0x01)
	char UnknownData_281[0x3]; // 0x281(0x03)
	float ResetTime; // 0x284(0x04)

	void SetCanAnimate(bool CanAnimate); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.SetCanAnimate
	void BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_PoisonGasFungus(int32_t EntryPoint); // Function BP_PoisonGasFungus.BP_PoisonGasFungus_C.ExecuteUbergraph_BP_PoisonGasFungus
};

