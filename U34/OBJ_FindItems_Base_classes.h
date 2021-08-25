// BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C
// Size: 0x180 (Inherited: 0x168)
struct UOBJ_FindItems_Base_C : UGatheItemsObjective {
	struct FText ObjectiveDescription; // 0x168(0x18)

	bool IsObjectiveResource(struct UResourceData* InResource); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource
	struct UTexture2D* GetInMissionCounterIcon(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon
	struct FText GetInMissionCounterText(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText
	struct UTexture2D* GetObjectiveIcon(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon
	int32_t GetObjectiveAmount(float missionLength); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount
	struct FText GetInMissionText(); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText
	struct FText GetObjectiveDescription(float missionLength); // Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription
};

