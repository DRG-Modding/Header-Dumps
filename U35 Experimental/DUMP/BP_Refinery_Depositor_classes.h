// BlueprintGeneratedClass BP_Refinery_Depositor.BP_Refinery_Depositor_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_Refinery_Depositor_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AudioDepositing1; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* OpenTrigger; 
	UPROPERTY(BlueprintReadWrite) UResourceBank* ResourceBank; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* ResourceBankCollider; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<APlayerCharacter*> NearbyPlayers; 
	UPROPERTY(BlueprintReadWrite) bool DepositorOpen; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnDepositorOpenChanged; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	UFUNCTION(BlueprintCallable) void UpdateOpenAnim();
	UFUNCTION(BlueprintCallable) void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Refinery_Depositor(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnDepositorOpenChanged__DelegateSignature(bool InOpen);
};

