// BlueprintGeneratedClass BP_ReturningPromotionKey.BP_ReturningPromotionKey_C
// Size: 0x3ec (Inherited: 0x378)
struct ABP_ReturningPromotionKey_C : ADeepPathfinderCharacter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* MovingAudioComponent; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* KeyMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* KeyMover; 
	UPROPERTY(BlueprintReadWrite) FTransform KeyTransform; 
	UPROPERTY(BlueprintReadWrite) float alpha; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* Target; 
	UPROPERTY(BlueprintReadWrite) FVector StartLocation; 

	UFUNCTION(BlueprintCallable) void MoveTowardsCamera(bool Finished);
	UFUNCTION(BlueprintCallable) void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
	UFUNCTION(BlueprintCallable) void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
	UFUNCTION(BlueprintCallable) void MoveToCharacter(APlayerCharacter* InTarget);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool success);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ReturningPromotionKey(int32_t EntryPoint);
};

