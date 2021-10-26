// BlueprintGeneratedClass WPN_FuelLine_Builder.WPN_FuelLine_Builder_C
// Size: 0x3e0 (Inherited: 0x3d0)
struct AWPN_FuelLine_Builder_C : AFuelLineBuilderItem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UFirstPersonWidgetComponent* MonitorWidget; 

	UFUNCTION(BlueprintCallable) void GetMonitorWidget(UUI_FuelLine_Builder_C* MonitorUI);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlaceSegment();
	UFUNCTION(BlueprintCallable) void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_WPN_FuelLine_Builder(int32_t EntryPoint);
};

