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
    void ExecuteUbergraph_ITM_SupplyDrop(int32 EntryPoint, FExecuteUbergraph_ITM_SupplyDropK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UWidgetComponent* CallFunc_GetComponentByClass_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UOnScreenIndicator_SupplyDrop_Order_C* K2Node_DynamicCast_AsOn_Screen_Indicator_Supply_Drop_Order, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AItemMarker* K2Node_CustomEvent_Marker, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetResourceCost_ReturnValue, class UItemPlacerAggregator* K2Node_Event_InItemPlacer);
};

#endif
