#ifndef UE4SS_SDK_WPN_RockCracker_Builder_HPP
#define UE4SS_SDK_WPN_RockCracker_Builder_HPP

class AWPN_RockCracker_Builder_C : public AFuelLineBuilderItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* MonitorWidget;

    void GetMonitorWidget(class UUI_RockCracker_Builder_C*& MonitorUI);
    void ReceiveBeginPlaceSegment();
    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
    void ExecuteUbergraph_WPN_RockCracker_Builder(int32 EntryPoint);
};

#endif
