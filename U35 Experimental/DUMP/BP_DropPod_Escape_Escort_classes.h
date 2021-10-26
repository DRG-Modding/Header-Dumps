// BlueprintGeneratedClass BP_DropPod_Escape_Escort.BP_DropPod_Escape_Escort_C
// Size: 0xa40 (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Escort_C : ABP_DropPod_Escape_Normal_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Doretta_Broken; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* DorettaCollision; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* DorettaHeadChecker; 
	UPROPERTY(BlueprintReadWrite) float DorettaHeadMove_Alpha_C2033C6740443751B5AF4294D2EFCD51; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection DorettaHeadMove__Direction_C2033C6740443751B5AF4294D2EFCD51; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* DorettaHeadMove; 
	UPROPERTY(BlueprintReadWrite) bool IsDorettaHeadInside; 
	UPROPERTY(BlueprintReadWrite) FTransform DorettaStart; 
	UPROPERTY(BlueprintReadWrite) FTransform DorettaEnd; 

	UFUNCTION(BlueprintCallable) void OnRep_IsDorettaHeadInside();
	UFUNCTION(BlueprintCallable) void DorettaHeadMove__FinishedFunc();
	UFUNCTION(BlueprintCallable) void DorettaHeadMove__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnPrepForTakeOff();
	UFUNCTION(BlueprintCallable) void Transfer Doretta(FTransform DorettaHeadTransform);
	UFUNCTION(BlueprintCallable) void ServerHandleDorettaHead(ADorrettaHead* DorettaHead);
	UFUNCTION(BlueprintCallable) void BndEvt__DorettaHeadChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_DropPod_Escape_Escort(int32_t EntryPoint);
};

