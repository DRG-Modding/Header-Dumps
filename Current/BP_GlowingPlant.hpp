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
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, const FDamageData& DamageData);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_GlowingPlant(int32 EntryPoint);
};

#endif
