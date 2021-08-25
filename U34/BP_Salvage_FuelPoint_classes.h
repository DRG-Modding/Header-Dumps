// BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
// Size: 0x250 (Inherited: 0x231)
struct ABP_Salvage_FuelPoint_C : ABP_Salvage_Point_C {
	char UnknownData_231[0x7]; // 0x231(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x240(0x08)
	struct ABP_Salvage_FuelPod_C* Pod; // 0x248(0x08)

	void EnableRepair(); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.EnableRepair
	void OnDefenseStart(); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseStart
	void OnDefenseComplete(); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseComplete
	void OnDefenseFail(); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.OnDefenseFail
	void Call In Pod(); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.Call In Pod
	void ExecuteUbergraph_BP_Salvage_FuelPoint(int32_t EntryPoint); // Function BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C.ExecuteUbergraph_BP_Salvage_FuelPoint
};

