// BlueprintGeneratedClass BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C
// Size: 0x358 (Inherited: 0x321)
struct ABP_RepairTreasureboxItem_C : ABP_Gem_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Chest_BatteryPacks_Distress_Cue; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Distress_Sphere; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDropped Leg();
	UFUNCTION(BlueprintCallable) void OnPickedUpLeg();
	UFUNCTION(BlueprintCallable) void CustomEvent_1();
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_RepairTreasureboxItem(int32_t EntryPoint);
};

