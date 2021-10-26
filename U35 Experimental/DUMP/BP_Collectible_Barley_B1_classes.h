// BlueprintGeneratedClass BP_Collectible_Barley_B1.BP_Collectible_Barley_B1_C
// Size: 0x2a0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B1_C : ABP_Collectible_Barley_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewCurveBase_4943D24B4499D90872349BB26D0794FD; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_4943D24B4499D90872349BB26D0794FD; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Barley_B1(int32_t EntryPoint);
};

