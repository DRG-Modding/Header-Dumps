// BlueprintGeneratedClass WPN_FuelLine_Builder.WPN_FuelLine_Builder_C
// Size: 0x3e0 (Inherited: 0x3d0)
struct AWPN_FuelLine_Builder_C : AFuelLineBuilderItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UFirstPersonWidgetComponent* MonitorWidget; // 0x3d8(0x08)

	void GetMonitorWidget(struct UUI_FuelLine_Builder_C* MonitorUI); // Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.GetMonitorWidget
	void ReceiveBeginPlaceSegment(); // Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceiveBeginPlaceSegment
	void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress); // Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ReceivePlacementUpdated
	void ExecuteUbergraph_WPN_FuelLine_Builder(int32_t EntryPoint); // Function WPN_FuelLine_Builder.WPN_FuelLine_Builder_C.ExecuteUbergraph_WPN_FuelLine_Builder
};

