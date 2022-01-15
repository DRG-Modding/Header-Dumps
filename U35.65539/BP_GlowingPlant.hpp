#ifndef UE4SS_SDK_BP_GlowingPlant_HPP
#define UE4SS_SDK_BP_GlowingPlant_HPP

class ABP_GlowingPlant_C : AGlowPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* MainLightComponent;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UPathfinderCollisionComponent* PathfinderCollision;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight5;
    USphereComponent* Collider5;
    USphereComponent* Collider4;
    USphereComponent* Collider3;
    USphereComponent* Collider2;
    USphereComponent* Collider1;
    UStaticMeshComponent* GlowPart5;
    UStaticMeshComponent* GlowPart4;
    UStaticMeshComponent* GlowPart3;
    UStaticMeshComponent* GlowPart2;
    UStaticMeshComponent* GlowPart1;

    void UserConstructionScript();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_GlowingPlant(int32 EntryPoint, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
