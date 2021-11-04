// BlueprintGeneratedClass OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C
// Size: 0x1b0 (Inherited: 0x198)
struct UOBJ_2nd_KillFleas_C : UKillEnemiesObjective {
	FText MissionText; // 0x198(0x18)

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	FObjectiveMissionIcon GetMissionIcon();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
};

