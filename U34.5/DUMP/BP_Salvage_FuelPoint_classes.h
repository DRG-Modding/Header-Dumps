// BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
// Size: 0x250 (Inherited: 0x231)
struct ABP_Salvage_FuelPoint_C : ABP_Salvage_Point_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	ABP_Salvage_FuelPod_C* Pod; // 0x248(0x08)

	void EnableRepair();
	void OnDefenseStart();
	void OnDefenseComplete();
	void OnDefenseFail();
	void Call In Pod();
	void ExecuteUbergraph_BP_Salvage_FuelPoint(int32_t EntryPoint);
};

