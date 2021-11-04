// BlueprintGeneratedClass BP_DropToTerrainDebris_Base.BP_DropToTerrainDebris_Base_C
// Size: 0x260 (Inherited: 0x220)
struct ABP_DropToTerrainDebris_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	UStaticMeshComponent* SM_Turret_Drone_Base; // 0x238(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	USoundBase* FallImpactSound; // 0x258(0x08)

	void ReceiveBeginPlay();
	void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	void ExecuteUbergraph_BP_DropToTerrainDebris_Base(int32_t EntryPoint);
};

