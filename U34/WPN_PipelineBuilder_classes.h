// BlueprintGeneratedClass WPN_PipelineBuilder.WPN_PipelineBuilder_C
// Size: 0x429 (Inherited: 0x3c8)
struct AWPN_PipelineBuilder_C : APipelineBuilderItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UFirstPersonWidgetComponent* SmallScreenWidget; // 0x3d0(0x08)
	struct UFirstPersonWidgetComponent* LargeScreenWidget; // 0x3d8(0x08)
	struct FTransform EndTransform; // 0x3e0(0x30)
	struct UTrackBuilderConnectPoint* ConnectPoint; // 0x410(0x08)
	struct FTimerHandle ConnectorTraceHandle; // 0x418(0x08)
	struct UUI_PipelineBuilder_Crosshair_C* Crosshair; // 0x420(0x08)
	bool PlacementValid; // 0x428(0x01)

	void GetCrosshair(struct UUI_PipelineBuilder_Crosshair_C* Result); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.GetCrosshair
	void Update Placement Transform(bool OutSuccess, struct FTransform OutTransform); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.Update Placement Transform
	void RecieveStartUsing(); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.RecieveStartUsing
	void BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, struct FTransform InPlacement); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature
	void ReceiveBeginPlaceSegment(); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.ReceiveBeginPlaceSegment
	void RecieveEquipped(); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.RecieveEquipped
	void RecieveUnequipped(); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.RecieveUnequipped
	void TraceForConnector(); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.TraceForConnector
	void AddedToInventory(struct APlayerCharacter* ItemOwner); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.AddedToInventory
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.OnCharacterStateChanged_Event
	void ExecuteUbergraph_WPN_PipelineBuilder(int32_t EntryPoint); // Function WPN_PipelineBuilder.WPN_PipelineBuilder_C.ExecuteUbergraph_WPN_PipelineBuilder
};

