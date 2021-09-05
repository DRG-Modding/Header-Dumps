// BlueprintGeneratedClass DefencePointActor_Base.DefencePointActor_Base_C
// Size: 0x298 (Inherited: 0x260)
struct ADefencePointActor_Base_C : ADefensePointActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x268(0x08)
	UStaticMeshComponent* Terrain scanner mesh; // 0x270(0x08)
	UStaticMeshComponent* DistressSphere; // 0x278(0x08)
	UCapsuleComponent* UseableCollider; // 0x280(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x288(0x08)
	USceneComponent* DefaultSceneRoot; // 0x290(0x08)

	void DefenseStart();
	void OnDefenseSucceed();
	void OnDefenceFailed();
	void DefenseComplete();
	void DefenseFail();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DefencePointActor_Base(int32_t EntryPoint);
};

