#ifndef UE4SS_SDK_ITM_CleanupDrop_HPP
#define UE4SS_SDK_ITM_CleanupDrop_HPP

class AITM_CleanupDrop_C : public ACleanupPodItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* MonitorWidget;
    class AItemMarker* Marker;
    class UOnScreenIndicator_CleanupDrop_Order_C* Widget;

    void RecieveCycledItem();
    void RecieveEquipped();
    void OnMarkerSpawned_Event(class AItemMarker* Marker);
    void ReceiveItemPlacerSpawned(class UItemPlacerAggregator* InItemPlacer);
    void UpdateWidget(EPlaceableObstructionType reason, float TimeLeft);
    void SetMarkerAndWidget(class AItemMarker* Marker);
    void ExecuteUbergraph_ITM_CleanupDrop(int32 EntryPoint);
};

#endif
