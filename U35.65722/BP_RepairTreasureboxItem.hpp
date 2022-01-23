#ifndef UE4SS_SDK_BP_RepairTreasureboxItem_HPP
#define UE4SS_SDK_BP_RepairTreasureboxItem_HPP

class ABP_RepairTreasureboxItem_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDestinationActorComponent* DestinationActor;
    class UAudioComponent* Chest_BatteryDrop_Cue;
    class UAudioComponent* Chest_BatteryPickUp_Cue;
    class UAudioComponent* AudioPingWhenPickedUp;
    class UAudioComponent* AudioPingWhenNotPickedUp;
    class UStaticMeshComponent* StaticMesh;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* Distress_Sphere;
    class UPointLightComponent* PointLight;
    bool IsPickedUp;

    float GetPingDelay(float MinDist, float MaxDist, float MinDelay, float MaxDelayfloat Dist, float CallFunc_GetDistToDestinationActor_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
    void ReceiveBeginPlay();
    void OnDropped Leg();
    void OnPickedUpLeg();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
    void Ping();
    void ExecuteUbergraph_BP_RepairTreasureboxItem(int32 EntryPoint, FExecuteUbergraph_BP_RepairTreasureboxItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_RepairTreasureboxItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetPingDelay_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

#endif
