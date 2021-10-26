// BlueprintGeneratedClass BP_IceCrevasse_Trap.BP_IceCrevasse_Trap_C
// Size: 0x2e5 (Inherited: 0x220)
struct ABP_IceCrevasse_Trap_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step6; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step5; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Step1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Tell4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Tell3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Tell2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Tell1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Box; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Crevasse; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_warning; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<FVector> ParticleLocations; 
	UPROPERTY(BlueprintReadWrite) TArray<FTransform> TellTransforms; 
	UPROPERTY(BlueprintReadWrite) int32_t TellIndex; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMeshComponent*> RockSteps; 
	UPROPERTY(BlueprintReadWrite) float ChanceOfRockSteps; 
	UPROPERTY(BlueprintReadWrite) bool IsOpen; 

	UFUNCTION(BlueprintCallable) void OnRep_IsOpen();
	UFUNCTION(BlueprintCallable) void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	UFUNCTION(BlueprintCallable) void OpenCrevasse();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_IceCrevasse_Trap(int32_t EntryPoint);
};

