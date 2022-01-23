#ifndef UE4SS_SDK_BP_GlowingPlant_HPP
#define UE4SS_SDK_BP_GlowingPlant_HPP

class ABP_GlowingPlant_C : public AGlowPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* MainLightComponent;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight5;
    class USphereComponent* Collider5;
    class USphereComponent* Collider4;
    class USphereComponent* Collider3;
    class USphereComponent* Collider2;
    class USphereComponent* Collider1;
    class UStaticMeshComponent* GlowPart5;
    class UStaticMeshComponent* GlowPart4;
    class UStaticMeshComponent* GlowPart3;
    class UStaticMeshComponent* GlowPart2;
    class UStaticMeshComponent* GlowPart1;

    void UserConstructionScript();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_GlowingPlant(int32 EntryPoint, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
};

#endif
