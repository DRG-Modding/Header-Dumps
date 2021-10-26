// BlueprintGeneratedClass BP_Refinery_LandingZone.BP_Refinery_LandingZone_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Refinery_LandingZone_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_Opacity_8C6DF8B84585B4B9E8DB819DF676DC1F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_8C6DF8B84585B4B9E8DB819DF676DC1F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_Opacity_C78A9FAB4BAA9C550373C2B47F9E0A4F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_C78A9FAB4BAA9C550373C2B47F9E0A4F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> Materials; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_LandingZone(int32_t EntryPoint);
};

