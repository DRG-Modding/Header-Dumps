// BlueprintGeneratedClass DefencePointActor_Base.DefencePointActor_Base_C
// Size: 0x298 (Inherited: 0x260)
struct ADefencePointActor_Base_C : ADefensePointActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x268(0x08)
	struct UStaticMeshComponent* Terrain scanner mesh; // 0x270(0x08)
	struct UStaticMeshComponent* DistressSphere; // 0x278(0x08)
	struct UCapsuleComponent* UseableCollider; // 0x280(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void DefenseStart(); // Function DefencePointActor_Base.DefencePointActor_Base_C.DefenseStart
	void OnDefenseSucceed(); // Function DefencePointActor_Base.DefencePointActor_Base_C.OnDefenseSucceed
	void OnDefenceFailed(); // Function DefencePointActor_Base.DefencePointActor_Base_C.OnDefenceFailed
	void DefenseComplete(); // Function DefencePointActor_Base.DefencePointActor_Base_C.DefenseComplete
	void DefenseFail(); // Function DefencePointActor_Base.DefencePointActor_Base_C.DefenseFail
	void ReceiveBeginPlay(); // Function DefencePointActor_Base.DefencePointActor_Base_C.ReceiveBeginPlay
	void ExecuteUbergraph_DefencePointActor_Base(int32_t EntryPoint); // Function DefencePointActor_Base.DefencePointActor_Base_C.ExecuteUbergraph_DefencePointActor_Base
};

