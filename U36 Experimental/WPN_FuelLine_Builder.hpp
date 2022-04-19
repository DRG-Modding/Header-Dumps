#ifndef UE4SS_SDK_WPN_FuelLine_Builder_HPP
#define UE4SS_SDK_WPN_FuelLine_Builder_HPP

class AWPN_FuelLine_Builder_C : public AFuelLineBuilderItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* MonitorWidget;

    void GetMonitorWidget(class UUI_FuelLine_Builder_C*& MonitorUI);
    void ReceiveBeginPlaceSegment();
    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
    void ExecuteUbergraph_WPN_FuelLine_Builder(int32 EntryPoint);
};

#endif
