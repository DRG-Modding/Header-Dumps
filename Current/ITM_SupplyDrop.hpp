#ifndef UE4SS_SDK_ITM_SupplyDrop_HPP
#define UE4SS_SDK_ITM_SupplyDrop_HPP

class AITM_SupplyDrop_C : public ARessuplyPodItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AItemMarker* Marker;
    class UOnScreenIndicator_SupplyDrop_Order_C* Widget;

    void RecieveCycledItem();
    void RecieveEquipped();
    void OnMarkerSpawned_Event(class AItemMarker* Marker);
    void Update Widget();
    void ReceiveItemPlacerSpawned(class UItemPlacerAggregator* InItemPlacer);
    void ExecuteUbergraph_ITM_SupplyDrop(int32 EntryPoint);
};

#endif
