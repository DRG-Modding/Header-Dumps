// BlueprintGeneratedClass BP_PoisonGasFungus.BP_PoisonGasFungus_C
// Size: 0x288 (Inherited: 0x220)
struct ABP_PoisonGasFungus_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	USphereComponent* Collider; // 0x230(0x08)
	USkeletalMeshComponent* AnimatedBody; // 0x238(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	UBillboardComponent* GasReleasePoint; // 0x258(0x08)
	USphereComponent* SporesTrigger; // 0x260(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	AActor* GasCloudClass; // 0x278(0x08)
	bool CanTrigger; // 0x280(0x01)
	float ResetTime; // 0x284(0x04)

	void SetCanAnimate(bool CanAnimate);
	void BndEvt__SporesTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void OnTerrainPointRemoved();
	void ExecuteUbergraph_BP_PoisonGasFungus(int32_t EntryPoint);
};

