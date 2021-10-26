// BlueprintGeneratedClass OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C
// Size: 0x188 (Inherited: 0x170)
struct UOBJ_2nd_KillFleas_5_C : UKillEnemiesObjective {
	UPROPERTY(BlueprintReadWrite) FText MissionText; 

	UFUNCTION(BlueprintCallable) UTexture2D* GetInMissionCounterIcon();
	UFUNCTION(BlueprintCallable) FText GetInMissionCounterText();
	UFUNCTION(BlueprintCallable) FObjectiveMissionIcon GetMissionIcon();
	UFUNCTION(BlueprintCallable) UTexture2D* GetObjectiveIcon();
	UFUNCTION(BlueprintCallable) int32_t GetObjectiveAmount(float missionLength);
	UFUNCTION(BlueprintCallable) FText GetInMissionText();
	UFUNCTION(BlueprintCallable) FText GetObjectiveDescription(float missionLength);
};

