// BlueprintGeneratedClass BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C
// Size: 0x280 (Inherited: 0x258)
struct ABP_FuelLine_StartPoint_C : AFuelLineStart {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* WidgetStartFuelLine; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* UsableCollider; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> DefaultMaterials; 

	UFUNCTION(BlueprintCallable) void SetMaterial(FName InSlotName, UMaterialInterface* InMaterial);
	UFUNCTION(BlueprintCallable) void UpdateState();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void FuelPodLanded();
	UFUNCTION(BlueprintCallable) void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_FuelLine_StartPoint(int32_t EntryPoint);
};

