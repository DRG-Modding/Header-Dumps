// BlueprintGeneratedClass WPN_PipelineBuilder.WPN_PipelineBuilder_C
// Size: 0x429 (Inherited: 0x3c8)
struct AWPN_PipelineBuilder_C : APipelineBuilderItem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonWidgetComponent* SmallScreenWidget; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonWidgetComponent* LargeScreenWidget; 
	UPROPERTY(BlueprintReadWrite) FTransform EndTransform; 
	UPROPERTY(BlueprintReadWrite) UTrackBuilderConnectPoint* ConnectPoint; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle ConnectorTraceHandle; 
	UPROPERTY(BlueprintReadWrite) UUI_PipelineBuilder_Crosshair_C* Crosshair; 
	UPROPERTY(BlueprintReadWrite) bool PlacementValid; 

	UFUNCTION(BlueprintCallable) void GetCrosshair(UUI_PipelineBuilder_Crosshair_C* Result);
	UFUNCTION(BlueprintCallable) void Update Placement Transform(bool OutSuccess, FTransform OutTransform);
	UFUNCTION(BlueprintCallable) void RecieveStartUsing();
	UFUNCTION(BlueprintCallable) void BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, FTransform InPlacement);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlaceSegment();
	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void RecieveUnequipped();
	UFUNCTION(BlueprintCallable) void TraceForConnector();
	UFUNCTION(BlueprintCallable) void AddedToInventory(APlayerCharacter* ItemOwner);
	UFUNCTION(BlueprintCallable) void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_WPN_PipelineBuilder(int32_t EntryPoint);
};

