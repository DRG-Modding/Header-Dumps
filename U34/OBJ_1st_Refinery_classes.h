// BlueprintGeneratedClass OBJ_1st_Refinery.OBJ_1st_Refinery_C
// Size: 0x1e8 (Inherited: 0x1e0)
struct UOBJ_1st_Refinery_C : URefineryObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)

	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveAmount
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveDescription
	struct FText GetInMissionText(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetInMissionText
	struct UOptionalObjectiveWidget* GetOptionalMissionWidget(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetOptionalMissionWidget
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetObjectiveIcon
	struct FObjectiveMissionIcon GetMissionIcon(); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.GetMissionIcon
	void ReceiveRefinerySpawned(struct AFSDRefinery* InRefinery); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ReceiveRefinerySpawned
	void OnRefineryStateChangedBP(enum class ERefineryState InRefineryState); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.OnRefineryStateChangedBP
	void ExecuteUbergraph_OBJ_1st_Refinery(int32_t EntryPoint); // Function OBJ_1st_Refinery.OBJ_1st_Refinery_C.ExecuteUbergraph_OBJ_1st_Refinery
};

