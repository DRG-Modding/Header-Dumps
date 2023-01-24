#ifndef UE4SS_SDK_BP_RepairTreasureboxItem_HPP
#define UE4SS_SDK_BP_RepairTreasureboxItem_HPP

class ABP_RepairTreasureboxItem_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDestinationActorComponent* DestinationActor;
    class UAudioComponent* AudioPingWhenPickedUp;
    class UAudioComponent* AudioPingWhenNotPickedUp;
    class UStaticMeshComponent* StaticMesh;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* Distress_Sphere;
    class UPointLightComponent* PointLight;
    bool IsPickedUp;

    float GetPingDelay(float MinDist, float MaxDist, float MinDelay, float MaxDelay);
    void ReceiveBeginPlay();
    void OnDropped Leg();
    void OnPickedUpLeg();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
    void Ping();
    void ExecuteUbergraph_BP_RepairTreasureboxItem(int32 EntryPoint);
};

#endif
