// BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C
// Size: 0x231 (Inherited: 0x220)
struct ABP_Salvage_Point_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	char SalvageState; // 0x230(0x01)

	void SetSalvagePointState(char State); // Function BP_Salvage_Point.BP_Salvage_Point_C.SetSalvagePointState
	void OnRep_State(); // Function BP_Salvage_Point.BP_Salvage_Point_C.OnRep_State
	void OnDefenseComplete(); // Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseComplete
	void OnDefenseStart(); // Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseStart
	void EnableRepair(); // Function BP_Salvage_Point.BP_Salvage_Point_C.EnableRepair
	void OnDefenseFail(); // Function BP_Salvage_Point.BP_Salvage_Point_C.OnDefenseFail
	void ExecuteUbergraph_BP_Salvage_Point(int32_t EntryPoint); // Function BP_Salvage_Point.BP_Salvage_Point_C.ExecuteUbergraph_BP_Salvage_Point
};

