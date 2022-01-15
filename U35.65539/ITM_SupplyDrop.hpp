#ifndef UE4SS_SDK_ITM_SupplyDrop_HPP
#define UE4SS_SDK_ITM_SupplyDrop_HPP

class AITM_SupplyDrop_C : URessuplyPodItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    AItemMarker* Marker;
    UOnScreenIndicator_SupplyDrop_Order_C* Widget;

    void RecieveCycledItem();
    void RecieveEquipped();
    void OnMarkerSpawned_Event(AItemMarker* Marker);
    void Update Widget();
    void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
    void ExecuteUbergraph_ITM_SupplyDrop(int32 EntryPoint, MarkerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UWidgetComponent* CallFunc_GetComponentByClass_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UOnScreenIndicator_SupplyDrop_Order_C* K2Node_DynamicCast_AsOn_Screen_Indicator_Supply_Drop_Order, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, AItemMarker* K2Node_CustomEvent_Marker, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetResourceCost_ReturnValue, UItemPlacerAggregator* K2Node_Event_InItemPlacer);
}

#endif
