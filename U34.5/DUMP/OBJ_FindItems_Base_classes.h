// BlueprintGeneratedClass OBJ_FindItems_Base.OBJ_FindItems_Base_C
// Size: 0x180 (Inherited: 0x168)
struct UOBJ_FindItems_Base_C : UGatheItemsObjective {
	FText ObjectiveDescription; // 0x168(0x18)

	bool IsObjectiveResource(UResourceData* InResource);
	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
};

