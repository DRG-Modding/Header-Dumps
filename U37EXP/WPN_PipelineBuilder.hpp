#ifndef UE4SS_SDK_WPN_PipelineBuilder_HPP
#define UE4SS_SDK_WPN_PipelineBuilder_HPP

class AWPN_PipelineBuilder_C : public APipelineBuilderItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* SmallScreenWidget;
    class UFirstPersonWidgetComponent* LargeScreenWidget;
    FTransform EndTransform;
    class UTrackBuilderConnectPoint* ConnectPoint;
    FTimerHandle ConnectorTraceHandle;
    class UUI_PipelineBuilder_Crosshair_C* Crosshair;
    bool PlacementValid;

    void GetCrosshair(class UUI_PipelineBuilder_Crosshair_C*& Result);
    void Update Placement Transform(bool& OutSuccess, FTransform& OutTransform);
    void RecieveStartUsing();
    void BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, const FTransform& InPlacement);
    void ReceiveBeginPlaceSegment();
    void RecieveEquipped();
    void RecieveUnequipped();
    void TraceForConnector();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void ExecuteUbergraph_WPN_PipelineBuilder(int32 EntryPoint);
};

#endif
