#ifndef UE4SS_SDK_BP_ExplodingIcePlant_HPP
#define UE4SS_SDK_BP_ExplodingIcePlant_HPP

class ABP_ExplodingIcePlant_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainDetectComponent* TerrainDetect;
    UOutlineComponent* outline;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UPointLightComponent* PointLight;
    USimpleHealthComponent* SimpleHealth;
    UStaticMeshComponent* Body;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_ExplodingIcePlant(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
