// BlueprintGeneratedClass WPN_PipelineBuilder.WPN_PipelineBuilder_C
// Size: 0x429 (Inherited: 0x3c8)
struct AWPN_PipelineBuilder_C : APipelineBuilderItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	UFirstPersonWidgetComponent* SmallScreenWidget; // 0x3d0(0x08)
	UFirstPersonWidgetComponent* LargeScreenWidget; // 0x3d8(0x08)
	FTransform EndTransform; // 0x3e0(0x30)
	UTrackBuilderConnectPoint* ConnectPoint; // 0x410(0x08)
	FTimerHandle ConnectorTraceHandle; // 0x418(0x08)
	UUI_PipelineBuilder_Crosshair_C* Crosshair; // 0x420(0x08)
	bool PlacementValid; // 0x428(0x01)

	void GetCrosshair(UUI_PipelineBuilder_Crosshair_C* Result);
	void Update Placement Transform(bool OutSuccess, FTransform OutTransform);
	void RecieveStartUsing();
	void BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, FTransform InPlacement);
	void ReceiveBeginPlaceSegment();
	void RecieveEquipped();
	void RecieveUnequipped();
	void TraceForConnector();
	void AddedToInventory(APlayerCharacter* ItemOwner);
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	void ExecuteUbergraph_WPN_PipelineBuilder(int32_t EntryPoint);
};

