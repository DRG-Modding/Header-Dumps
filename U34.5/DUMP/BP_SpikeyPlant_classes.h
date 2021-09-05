// BlueprintGeneratedClass BP_SpikeyPlant.BP_SpikeyPlant_C
// Size: 0x309 (Inherited: 0x220)
struct ABP_SpikeyPlant_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDamageComponent* Damage; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	UOutlineComponent* outline; // 0x238(0x08)
	USkeletalMeshComponent* Plant; // 0x240(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	USphereComponent* Spike Free Area; // 0x258(0x08)
	USphereComponent* Spike Spawn Area; // 0x260(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Retract_spikes_extract_12C035484D9FA60A9729318F1FE2B43F; // 0x278(0x04)
	enum class ETimelineDirection Retract_spikes__Direction_12C035484D9FA60A9729318F1FE2B43F; // 0x27c(0x01)
	UTimelineComponent* Retract spikes; // 0x280(0x08)
	float Extrude_spikes_extract_506BA7914733C21AE25E36ACEB72E417; // 0x288(0x04)
	enum class ETimelineDirection Extrude_spikes__Direction_506BA7914733C21AE25E36ACEB72E417; // 0x28c(0x01)
	UTimelineComponent* Extrude spikes; // 0x290(0x08)
	int32_t Max Amount Of Spikes; // 0x298(0x04)
	int32_t Min amount Of Spikes; // 0x29c(0x04)
	bool IsExtruded; // 0x2a0(0x01)
	float Seconds Between Extrusion; // 0x2a4(0x04)
	bool IsActive; // 0x2a8(0x01)
	FTimerHandle ActiveTimer; // 0x2b0(0x08)
	TArray<USkeletalMeshComponent*> AnimatedSpikeMeshes; // 0x2b8(0x10)
	FMulticastInlineDelegate Change state; // 0x2c8(0x10)
	TArray<UCapsuleComponent*> Capsule colliders; // 0x2d8(0x10)
	float SpikeScale; // 0x2e8(0x04)
	bool PlayerIsNearby; // 0x2ec(0x01)
	int32_t SpikeSeed; // 0x2f0(0x04)
	TArray<FTransform> SpikeTransforms; // 0x2f8(0x10)
	bool SpikesAreSet; // 0x308(0x01)

	void OnRep_SpikesAreSet();
	void OnRep_SpikeSeed();
	void Set Spikes to terrain();
	void OnRep_IsExtruded();
	void UserConstructionScript();
	void Extrude spikes__FinishedFunc();
	void Extrude spikes__UpdateFunc();
	void Extrude spikes__HitActors__EventFunc();
	void Retract spikes__FinishedFunc();
	void Retract spikes__UpdateFunc();
	void Retract spikes__DeactivateHit__EventFunc();
	void ReceiveBeginPlay();
	void Spike extrusion();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void ExtrudeSpikes();
	void Retract Spike event();
	void Raytrace for terrain placement();
	void On Spike Capsule Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void PlayerNearby(APlayerCharacter* Player, bool enteredTrigger);
	void ExecuteUbergraph_BP_SpikeyPlant(int32_t EntryPoint);
	void Change state__DelegateSignature(bool Is Extruded, bool Is Triggered);
};

