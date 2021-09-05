// BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C
// Size: 0x231 (Inherited: 0x220)
struct ABP_Salvage_Point_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	char SalvageState; // 0x230(0x01)

	void SetSalvagePointState(char State);
	void OnRep_State();
	void OnDefenseComplete();
	void OnDefenseStart();
	void EnableRepair();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_Point(int32_t EntryPoint);
};

