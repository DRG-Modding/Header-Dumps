// BlueprintGeneratedClass BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C
// Size: 0x259 (Inherited: 0x220)
struct ABP_Refinery_ProgressBar_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* ProgressMaterial; 
	UPROPERTY(BlueprintReadWrite) float Progress; 
	UPROPERTY(BlueprintReadWrite) AFSDRefinery* Refinery; 
	UPROPERTY(BlueprintReadWrite) enum class ERefineryState State; 

	UFUNCTION(BlueprintCallable) void SetColors(FLinearColor InStartColor, FLinearColor InEndColor, FLinearColor InBackgroundColor);
	UFUNCTION(BlueprintCallable) void SetProgress(float InProgress01);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void OnTick_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
	UFUNCTION(BlueprintCallable) void Completed_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_ProgressBar(int32_t EntryPoint);
};

