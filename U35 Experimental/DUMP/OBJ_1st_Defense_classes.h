// BlueprintGeneratedClass OBJ_1st_Defense.OBJ_1st_Defense_C
// Size: 0x180 (Inherited: 0x180)
struct UOBJ_1st_Defense_C : UDefenseObjective {

	UFUNCTION(BlueprintCallable) UTexture2D* GetInMissionCounterIcon();
	UFUNCTION(BlueprintCallable) FText GetInMissionCounterText();
	UFUNCTION(BlueprintCallable) FObjectiveMissionIcon GetMissionIcon();
	UFUNCTION(BlueprintCallable) UTexture2D* GetObjectiveIcon();
	UFUNCTION(BlueprintCallable) int32_t GetObjectiveAmount(float missionLength);
	UFUNCTION(BlueprintCallable) FText GetInMissionText();
	UFUNCTION(BlueprintCallable) FText GetObjectiveDescription(float missionLength);
};

