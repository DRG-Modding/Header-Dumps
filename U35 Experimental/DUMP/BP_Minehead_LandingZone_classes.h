// BlueprintGeneratedClass BP_Minehead_LandingZone.BP_Minehead_LandingZone_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_Minehead_LandingZone_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Opacity_814ACDB147BE4FC050CAA2ADBE2674C9; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_814ACDB147BE4FC050CAA2ADBE2674C9; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_Opacity_9715CE204D350BB8464289A30A16CA29; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_9715CE204D350BB8464289A30A16CA29; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) bool FadingOut; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> Materials; 

	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Minehead_LandingZone(int32_t EntryPoint);
};

