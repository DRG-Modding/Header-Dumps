#ifndef UE4SS_SDK_BP_DrippingPlant_HPP
#define UE4SS_SDK_BP_DrippingPlant_HPP

class ABP_DrippingPlant_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UPathfinderCollisionComponent* PathfinderCollision;
    UTerrainDetectComponent* TerrainDetect;
    UBillboardComponent* DripOrigin;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleHealthComponent* SimpleHealth;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* SM_DripingPlant_02;
    USceneComponent* DefaultSceneRoot;
    float DripIntervalMin;
    float DripIntervalMax;
    bool DoDrip;
    float BurstIntervalMin;
    float BurstIntervalMax;
    int32 NumDripsInBurstMin;
    int32 NumDripsInBurstMax;
    int32 DripCount;
    int32 NumDripsInCurrentBurst;

    void ReceiveBeginPlay();
    void ProximityChanged(UPlayerCharacter* Player, bool enteredTrigger);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_DrippingPlant(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool Temp_bool_IsClosed_Variable, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
