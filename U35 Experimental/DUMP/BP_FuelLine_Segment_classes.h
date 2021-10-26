// BlueprintGeneratedClass BP_FuelLine_Segment.BP_FuelLine_Segment_C
// Size: 0x304 (Inherited: 0x2c8)
struct ABP_FuelLine_Segment_C : AFuelLineSegment {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio_Placeing; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* UsableSphere; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> MaterialsDefaultEndPost; 
	UPROPERTY(BlueprintReadWrite) FVector EndLocation; 

	UFUNCTION(BlueprintCallable) void OverrideMaterialByIndex(UPrimitiveComponent* InMesh, TArray<UMaterialInterface*> InDefaultMaterials, int32_t InIndex, UMaterialInterface* InMaterial);
	UFUNCTION(BlueprintCallable) void OverrideMaterialByName(UMeshComponent* InMesh, TArray<UMaterialInterface*> InDefaultMaterials, FName InMaterialSlotName, UMaterialInterface* InMaterial);
	UFUNCTION(BlueprintCallable) void UpdateVisualState();
	UFUNCTION(BlueprintCallable) bool ReceiveCanPlaceAt(FTransform InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState);
	UFUNCTION(BlueprintCallable) void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceivPlacementValidChanged(bool InIsValid);
	UFUNCTION(BlueprintCallable) void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
	UFUNCTION(BlueprintCallable) void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_FuelLine_Segment(int32_t EntryPoint);
};

