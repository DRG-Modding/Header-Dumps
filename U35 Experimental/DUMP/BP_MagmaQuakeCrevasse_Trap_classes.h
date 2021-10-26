// BlueprintGeneratedClass BP_MagmaQuakeCrevasse_Trap.BP_MagmaQuakeCrevasse_Trap_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_MagmaQuakeCrevasse_Trap_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* P_Tell_05; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* P_Tell_04; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* P_Tell_03; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* P_Tell_02; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* P_Tell_01; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step11; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step8; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* CrevasseHotRockFill; 
	UPROPERTY(BlueprintReadWrite) UActorStateComponent* CrevasseOpen; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step6; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step5; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step1; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Crevasse; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> ParticleLocations; 
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> TellTransforms; 
	UPROPERTY(BlueprintReadWrite) int32_t TellIndex; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMeshComponent*> RockSteps; 
	UPROPERTY(BlueprintReadWrite) float ChanceOfRockSteps; 
	UPROPERTY(BlueprintReadWrite) int32_t MinNumRockSteps; 
	UPROPERTY(BlueprintReadWrite) TArray<USceneComponent*> Tells; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(UActorStateComponent* State);
	UFUNCTION(BlueprintCallable) void SetCrevasseActive(bool IsActive);
	UFUNCTION(BlueprintCallable) void Test_Crevasse();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int32_t EntryPoint);
};

