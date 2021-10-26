// BlueprintGeneratedClass OBJ_2nd_KillFleas.OBJ_2nd_KillFleas_C
// Size: 0x188 (Inherited: 0x170)
struct UOBJ_2nd_KillFleas_C : UKillEnemiesObjective {
	FText MissionText; // 0x170(0x18)

	UTexture2D* GetInMissionCounterIcon();
	FText GetInMissionCounterText();
	FObjectiveMissionIcon GetMissionIcon();
	UTexture2D* GetObjectiveIcon();
	int32_t GetObjectiveAmount(float missionLength);
	FText GetInMissionText();
	FText GetObjectiveDescription(float missionLength);
};

