// BlueprintGeneratedClass BP_Salvage_FuelPod.BP_Salvage_FuelPod_C
// Size: 0x380 (Inherited: 0x2b0)
struct ABP_Salvage_FuelPod_C : ASalvageFuelPod {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTerrainScannerStaticMesh* TerrainScannerFuelConnection; 
	UPROPERTY(BlueprintReadWrite) UTerrainScannerStaticMesh* TerrainScannerPod; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* WidgetActivate; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* FuelLineConnector; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect; 
	UPROPERTY(BlueprintReadWrite) UDropToTerrainComponent* DropToTerrain; 
	UPROPERTY(BlueprintReadWrite) UOxygenSourceComponent* OxygenSource; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* FuelCell; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* FuelCellCharge_Cue; 
	UPROPERTY(BlueprintReadWrite) URadarPointComponent* radarPoint; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DistressSphere; 
	UPROPERTY(BlueprintReadWrite) USingleUsableComponent* UsableActivate; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* Usable; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio1; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UAutoCarverComponent* AutoCarver; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* DrillAudio; 
	UPROPERTY(BlueprintReadWrite) bool FuelLineConnected; 
	UPROPERTY(BlueprintReadWrite) AFuelLineSegment* FirstFuelLineSegment; 

	UFUNCTION(BlueprintCallable) void UpdateDistressSphere();
	UFUNCTION(BlueprintCallable) void OnDroppodImpact();
	UFUNCTION(BlueprintCallable) void OnDropStarted();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void OnDefenseStart();
	UFUNCTION(BlueprintCallable) void OnDefenseComplete();
	UFUNCTION(BlueprintCallable) void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	UFUNCTION(BlueprintCallable) void OnDefenseFailed();
	UFUNCTION(BlueprintCallable) void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void SignalFuelLineStart();
	UFUNCTION(BlueprintCallable) void ReceiveFuelLineStarted(bool InFuelLineStarted);
	UFUNCTION(BlueprintCallable) void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
	UFUNCTION(BlueprintCallable) void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Salvage_FuelPod(int32_t EntryPoint);
};

