#ifndef UE4SS_SDK_WPN_FuelLine_Builder_HPP
#define UE4SS_SDK_WPN_FuelLine_Builder_HPP

class AWPN_FuelLine_Builder_C : public AFuelLineBuilderItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* MonitorWidget;

    void GetMonitorWidget(class UUI_FuelLine_Builder_C*& MonitorUI, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_FuelLine_Builder_C* K2Node_DynamicCast_AsUI_Fuel_Line_Builder, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlaceSegment();
    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
    void ExecuteUbergraph_WPN_FuelLine_Builder(int32 EntryPoint, bool K2Node_Event_InCanPlace, bool K2Node_Event_InConnecting, float K2Node_Event_InDistanceProgress, class UUI_FuelLine_Builder_C* CallFunc_GetMonitorWidget_MonitorUI);
};

#endif
