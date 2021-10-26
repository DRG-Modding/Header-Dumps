// BlueprintGeneratedClass BP_BossFight_Heartstone.BP_BossFight_Heartstone_C
// Size: 0x30 (Inherited: 0x28)
struct UBP_BossFight_Heartstone_C : UObject {
	UPROPERTY(BlueprintReadWrite) AEscortDestination* HearstoneRef; 

	UFUNCTION(BlueprintCallable) AActor* GetBossActor();
	UFUNCTION(BlueprintCallable) UBossFightWidget* GetWidgetClass();
	UFUNCTION(BlueprintCallable) bool IsStillValid();
};

