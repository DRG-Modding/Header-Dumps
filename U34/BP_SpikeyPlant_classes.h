// BlueprintGeneratedClass BP_SpikeyPlant.BP_SpikeyPlant_C
// Size: 0x309 (Inherited: 0x220)
struct ABP_SpikeyPlant_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDamageComponent* Damage; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct UOutlineComponent* outline; // 0x238(0x08)
	struct USkeletalMeshComponent* Plant; // 0x240(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x248(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	struct USphereComponent* Spike Free Area; // 0x258(0x08)
	struct USphereComponent* Spike Spawn Area; // 0x260(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Retract_spikes_extract_12C035484D9FA60A9729318F1FE2B43F; // 0x278(0x04)
	char Retract_spikes__Direction_12C035484D9FA60A9729318F1FE2B43F; // 0x27c(0x01)
	char UnknownData_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Retract spikes; // 0x280(0x08)
	float Extrude_spikes_extract_506BA7914733C21AE25E36ACEB72E417; // 0x288(0x04)
	char Extrude_spikes__Direction_506BA7914733C21AE25E36ACEB72E417; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	struct UTimelineComponent* Extrude spikes; // 0x290(0x08)
	int32_t Max Amount Of Spikes; // 0x298(0x04)
	int32_t Min amount Of Spikes; // 0x29c(0x04)
	bool IsExtruded; // 0x2a0(0x01)
	char UnknownData_2A1[0x3]; // 0x2a1(0x03)
	float Seconds Between Extrusion; // 0x2a4(0x04)
	bool IsActive; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct FTimerHandle ActiveTimer; // 0x2b0(0x08)
	struct TArray<struct USkeletalMeshComponent*> AnimatedSpikeMeshes; // 0x2b8(0x10)
	struct FMulticastInlineDelegate Change state; // 0x2c8(0x10)
	struct TArray<struct UCapsuleComponent*> Capsule colliders; // 0x2d8(0x10)
	float SpikeScale; // 0x2e8(0x04)
	bool PlayerIsNearby; // 0x2ec(0x01)
	char UnknownData_2ED[0x3]; // 0x2ed(0x03)
	int32_t SpikeSeed; // 0x2f0(0x04)
	char UnknownData_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<struct FTransform> SpikeTransforms; // 0x2f8(0x10)
	bool SpikesAreSet; // 0x308(0x01)

	void OnRep_SpikesAreSet(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.OnRep_SpikesAreSet
	void OnRep_SpikeSeed(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.OnRep_SpikeSeed
	void Set Spikes to terrain(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Set Spikes to terrain
	void OnRep_IsExtruded(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.OnRep_IsExtruded
	void UserConstructionScript(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.UserConstructionScript
	void Extrude spikes__FinishedFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Extrude spikes__FinishedFunc
	void Extrude spikes__UpdateFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Extrude spikes__UpdateFunc
	void Extrude spikes__HitActors__EventFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Extrude spikes__HitActors__EventFunc
	void Retract spikes__FinishedFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Retract spikes__FinishedFunc
	void Retract spikes__UpdateFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Retract spikes__UpdateFunc
	void Retract spikes__DeactivateHit__EventFunc(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Retract spikes__DeactivateHit__EventFunc
	void ReceiveBeginPlay(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.ReceiveBeginPlay
	void Spike extrusion(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Spike extrusion
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	void ExtrudeSpikes(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.ExtrudeSpikes
	void Retract Spike event(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Retract Spike event
	void Raytrace for terrain placement(); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Raytrace for terrain placement
	void On Spike Capsule Overlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.On Spike Capsule Overlap
	void PlayerNearby(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.PlayerNearby
	void ExecuteUbergraph_BP_SpikeyPlant(int32_t EntryPoint); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.ExecuteUbergraph_BP_SpikeyPlant
	void Change state__DelegateSignature(bool Is Extruded, bool Is Triggered); // Function BP_SpikeyPlant.BP_SpikeyPlant_C.Change state__DelegateSignature
};

