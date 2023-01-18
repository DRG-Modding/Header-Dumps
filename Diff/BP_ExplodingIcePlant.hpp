#ifndef UE4SS_SDK_BP_ExplodingIcePlant_HPP
#define UE4SS_SDK_BP_ExplodingIcePlant_HPP

class ABP_ExplodingIcePlant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainDetectComponent* TerrainDetect;
    class UOutlineComponent* outline;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* Body;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ExecuteUbergraph_BP_ExplodingIcePlant(int32 EntryPoint);
};

#endif
