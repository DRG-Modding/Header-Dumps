// BlueprintGeneratedClass BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C
// Size: 0x4dc (Inherited: 0x360)
struct ABP_ExplosiveBarrelsEvent_C : AExplosiveBarrelEvent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UCapsuleComponent* Capsule1; // 0x368(0x08)
	struct USceneComponent* Beam4; // 0x370(0x08)
	struct UChildActorComponent* Starter8; // 0x378(0x08)
	struct UChildActorComponent* Starter7; // 0x380(0x08)
	struct UChildActorComponent* Starter1; // 0x388(0x08)
	struct UChildActorComponent* Starter2; // 0x390(0x08)
	struct USceneComponent* Beam3; // 0x398(0x08)
	struct USceneComponent* Beam2; // 0x3a0(0x08)
	struct USceneComponent* Beam1; // 0x3a8(0x08)
	struct UStaticMeshComponent* Beam05; // 0x3b0(0x08)
	struct UStaticMeshComponent* Beam01_Detail010; // 0x3b8(0x08)
	struct UStaticMeshComponent* Beam01_Detail09; // 0x3c0(0x08)
	struct UStaticMeshComponent* Beam03; // 0x3c8(0x08)
	struct UStaticMeshComponent* Beam01_Detail08; // 0x3d0(0x08)
	struct UStaticMeshComponent* Beam01_Detail07; // 0x3d8(0x08)
	struct UStaticMeshComponent* Beam02; // 0x3e0(0x08)
	struct UStaticMeshComponent* Beam01_Detail06; // 0x3e8(0x08)
	struct UStaticMeshComponent* Beam01_Detail05; // 0x3f0(0x08)
	struct UStaticMeshComponent* Beam01; // 0x3f8(0x08)
	struct UStaticMeshComponent* Beam01_Detail04; // 0x400(0x08)
	struct UStaticMeshComponent* Beam01_Detail03; // 0x408(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x410(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x418(0x08)
	struct URoomCarverComponent* RoomCarver; // 0x420(0x08)
	struct UOutlineComponent* outline; // 0x428(0x08)
	struct UCapsuleComponent* Capsule; // 0x430(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x438(0x08)
	struct UEnemyComponent* enemy; // 0x440(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x448(0x08)
	struct UEnemyHealthComponent* EnemyHealth; // 0x450(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x458(0x08)
	struct FVector PodSpawnLocation; // 0x460(0x0c)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x470(0x08)
	struct FLinearColor InitialColor; // 0x478(0x10)
	struct FLinearColor FinalColor; // 0x488(0x10)
	struct FLinearColor InitialEdgeColor; // 0x498(0x10)
	struct FLinearColor FinalEdgeColor; // 0x4a8(0x10)
	struct TArray<struct FName> BoneNames; // 0x4b8(0x10)
	float InitialEmissive; // 0x4c8(0x04)
	float MaxSpawnRadius; // 0x4cc(0x04)
	float MaxRadiusSolo; // 0x4d0(0x04)
	float MaxPathLengthSolo; // 0x4d4(0x04)
	float MaxPathLegth; // 0x4d8(0x04)

	void UserConstructionScript(); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.UserConstructionScript
	void OnEventTriggered(); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.OnEventTriggered
	void OnEventFinished(bool eventSuccess); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.OnEventFinished
	void ReceiveBeginPlay(); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.ReceiveBeginPlay
	void SpawnEnemies(); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.SpawnEnemies
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature(float Health); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_0_HealthChangedSig__DelegateSignature
	void BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.BndEvt__EnemyHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void EndExplosion(); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.EndExplosion
	void ExecuteUbergraph_BP_ExplosiveBarrelsEvent(int32_t EntryPoint); // Function BP_ExplosiveBarrelsEvent.BP_ExplosiveBarrelsEvent_C.ExecuteUbergraph_BP_ExplosiveBarrelsEvent
};

