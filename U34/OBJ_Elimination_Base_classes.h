// BlueprintGeneratedClass OBJ_Elimination_Base.OBJ_Elimination_Base_C
// Size: 0x228 (Inherited: 0x1f0)
struct UOBJ_Elimination_Base_C : UEliminationObjective {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct FText Title; // 0x1f8(0x18)
	struct FText Description; // 0x210(0x18)

	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
	struct FText GetInMissionCounterText(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
	struct FObjectiveMissionIcon GetMissionIcon(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetMissionIcon
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
	struct FText GetInMissionText(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
	void ReceiveTargetKilled(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
	void ReceiveTargetSpawned(); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetSpawned
	void ExecuteUbergraph_OBJ_Elimination_Base(int32_t EntryPoint); // Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
};

