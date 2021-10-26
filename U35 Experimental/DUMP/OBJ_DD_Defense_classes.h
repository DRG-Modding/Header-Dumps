// BlueprintGeneratedClass OBJ_DD_Defense.OBJ_DD_Defense_C
// Size: 0x180 (Inherited: 0x180)
struct UOBJ_DD_Defense_C : UDefenseObjective {

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	FObjectiveMissionIcon GetMissionIcon();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
};

