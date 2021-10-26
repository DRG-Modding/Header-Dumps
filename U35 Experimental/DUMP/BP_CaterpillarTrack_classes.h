// BlueprintGeneratedClass BP_CaterpillarTrack.BP_CaterpillarTrack_C
// Size: 0x2b4 (Inherited: 0x248)
struct ABP_CaterpillarTrack_C : AEscortMuleTrack {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UInstancedMeshOnSpline* InstancedMeshOnSpline1; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_DrillDozer_Threads_Shape_Template; 
	UPROPERTY(BlueprintReadWrite) USplineComponent* SourceSpline; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USplineComponent* TargetSpline; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) FVector LastTrace; 
	UPROPERTY(BlueprintReadWrite) FVector CurrTrace; 
	UPROPERTY(BlueprintReadWrite) float DeltaTime; 
	UPROPERTY(BlueprintReadWrite) float Speed; 
	UPROPERTY(BlueprintReadWrite) float JointSpeedFactor; 

	UFUNCTION(BlueprintCallable) void Line Trace(FVector Start, FVector End, FVector Hit, bool DidHit);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void UpdateTrackSpeed();
	UFUNCTION(BlueprintCallable) void ParentOutlineChanged(enum class EOutline InOutline);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_CaterpillarTrack(int32_t EntryPoint);
};

