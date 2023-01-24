#ifndef UE4SS_SDK_BP_Azure_UmbraSeeker_HPP
#define UE4SS_SDK_BP_Azure_UmbraSeeker_HPP

class ABP_Azure_UmbraSeeker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule3;
    class UCapsuleComponent* Capsule2;
    class UCapsuleComponent* Capsule1;
    class USphereComponent* Sphere;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Godetia;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UParticleSystemComponent* ParticleSystem;
    class UAudioComponent* AzureFlowerIdle_Cue;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* SM_Biome_AzureWeald_Flower_01;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_UmbraSeeker(int32 EntryPoint);
};

#endif
