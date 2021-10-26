// BlueprintGeneratedClass OBJ_Resource_Base.OBJ_Resource_Base_C
// Size: 0x198 (Inherited: 0x198)
struct UOBJ_Resource_Base_C : UResourceObjective {

	UFUNCTION(BlueprintCallable) UTexture2D* GetInMissionCounterIcon();
	UFUNCTION(BlueprintCallable) FText GetInMissionCounterText();
	UFUNCTION(BlueprintCallable) FObjectiveMissionIcon GetMissionIcon();
	UFUNCTION(BlueprintCallable) UTexture2D* GetObjectiveIcon();
	UFUNCTION(BlueprintCallable) int32_t GetObjectiveAmount(float missionLength);
	UFUNCTION(BlueprintCallable) FText GetInMissionText();
	UFUNCTION(BlueprintCallable) FText GetObjectiveDescription(float missionLength);
};

