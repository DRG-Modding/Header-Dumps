// BlueprintGeneratedClass WPN_FuelLine_Builder.WPN_FuelLine_Builder_C
// Size: 0x3e0 (Inherited: 0x3d0)
struct AWPN_FuelLine_Builder_C : AFuelLineBuilderItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	UFirstPersonWidgetComponent* MonitorWidget; // 0x3d8(0x08)

	void GetMonitorWidget(UUI_FuelLine_Builder_C* MonitorUI);
	void ReceiveBeginPlaceSegment();
	void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
	void ExecuteUbergraph_WPN_FuelLine_Builder(int32_t EntryPoint);
};

