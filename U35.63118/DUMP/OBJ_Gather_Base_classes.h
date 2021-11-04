// BlueprintGeneratedClass OBJ_Gather_Base.OBJ_Gather_Base_C
// Size: 0x1a8 (Inherited: 0x190)
struct UOBJ_Gather_Base_C : UGatherGemsObjective {
	FText ObjectiveDescription; // 0x190(0x18)

	bool IsObjectiveResource(UResourceData* InResource);
	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
};

