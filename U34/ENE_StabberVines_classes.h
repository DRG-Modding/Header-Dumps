// BlueprintGeneratedClass ENE_StabberVines.ENE_StabberVines_C
// Size: 0x400 (Inherited: 0x338)
struct AENE_StabberVines_C : AEnemyPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UOutlineComponent* outline; // 0x340(0x08)
	struct UBillboardComponent* AttackPosition; // 0x348(0x08)
	struct UStaticMeshComponent* U33_BiomPlant_ThornBlob_003; // 0x350(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x358(0x08)
	struct UBillboardComponent* HeadSpawnPosition1; // 0x360(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x368(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x370(0x08)
	struct UBillboardComponent* HeadSpawnPosition3; // 0x378(0x08)
	struct UBillboardComponent* HeadSpawnPosition2; // 0x380(0x08)
	struct UStaticMeshComponent* Body; // 0x388(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	float HeadMovementDuration; // 0x398(0x04)
	char UnknownData_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct ABP_StabberVine_Tentacle_C*> TentaclesCPP; // 0x3a0(0x10)
	bool IsBusy; // 0x3b0(0x01)
	char UnknownData_3B1[0x7]; // 0x3b1(0x07)
	struct TArray<struct FTransform> HydraHeadsSpawnRelativeTransforms; // 0x3b8(0x10)
	struct FName MaterialColourParamString; // 0x3c8(0x08)
	struct FLinearColor IdleColor; // 0x3d0(0x10)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x3e0(0x08)
	float NormalHeadMovementDurration; // 0x3e8(0x04)
	float AttackTimer; // 0x3ec(0x04)
	float AttackDistance; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)
	struct FTimerHandle AttackTimerHandle; // 0x3f8(0x08)

	void TryStartMeleeAttack(); // Function ENE_StabberVines.ENE_StabberVines_C.TryStartMeleeAttack
	void AreAllTentaclesDead(bool OutAllDead); // Function ENE_StabberVines.ENE_StabberVines_C.AreAllTentaclesDead
	void GenerateRandomSpikePositions(int32_t SpikeIndex, struct FVector SpikeLocation, struct FRotator SpikeRotation); // Function ENE_StabberVines.ENE_StabberVines_C.GenerateRandomSpikePositions
	void ReceiveBeginPlay(); // Function ENE_StabberVines.ENE_StabberVines_C.ReceiveBeginPlay
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_StabberVines.ENE_StabberVines_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void RemoveHead(struct ABP_StabberVine_Tentacle_C* HeadRef); // Function ENE_StabberVines.ENE_StabberVines_C.RemoveHead
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function ENE_StabberVines.ENE_StabberVines_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void SetupTargetDetection(); // Function ENE_StabberVines.ENE_StabberVines_C.SetupTargetDetection
	void SetupTentacles(); // Function ENE_StabberVines.ENE_StabberVines_C.SetupTentacles
	void Kill Root(); // Function ENE_StabberVines.ENE_StabberVines_C.Kill Root
	void BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature(enum class EOutline InOutline); // Function ENE_StabberVines.ENE_StabberVines_C.BndEvt__Outline_K2Node_ComponentBoundEvent_1_OutlineChanged__DelegateSignature
	void ExecuteUbergraph_ENE_StabberVines(int32_t EntryPoint); // Function ENE_StabberVines.ENE_StabberVines_C.ExecuteUbergraph_ENE_StabberVines
};

