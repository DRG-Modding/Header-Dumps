// BlueprintGeneratedClass BP_Collectible_Barley_B2.BP_Collectible_Barley_B2_C
// Size: 0x2c0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B2_C : ABP_Collectible_Barley_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem1; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_NewCurveBase_3E1FA8E34B81F0D665577BA1BED94342; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_3E1FA8E34B81F0D665577BA1BED94342; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewCurveBase_CE04641D46E6DB9696536A9342C5DBD1; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_CE04641D46E6DB9696536A9342C5DBD1; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Barley_B2(int32_t EntryPoint);
};

