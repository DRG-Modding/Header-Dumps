// BlueprintGeneratedClass BP_Heartstone_Claw.BP_Heartstone_Claw_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_Heartstone_Claw_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationDebris* LevelGenerationDebris; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Spike_Carver; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) bool NoGround; 
	UPROPERTY(BlueprintReadWrite) float RelativeScaleMin; 
	UPROPERTY(BlueprintReadWrite) float RelativeScaleMax; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void CheckForGroundAndCarve();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Heartstone_Claw(int32_t EntryPoint);
};

