#ifndef UE4SS_SDK_BP_Azure_UmbraSeeker_HPP
#define UE4SS_SDK_BP_Azure_UmbraSeeker_HPP

class ABP_Azure_UmbraSeeker_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule3;
    UCapsuleComponent* Capsule2;
    UCapsuleComponent* Capsule1;
    USphereComponent* Sphere;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Godetia;
    UTerrainDetectComponent* TerrainDetect;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UPathfinderCollisionComponent* PathfinderCollision;
    UParticleSystemComponent* ParticleSystem;
    UAudioComponent* AzureFlowerIdle_Cue;
    UPointLightComponent* PointLight;
    USimpleHealthComponent* SimpleHealth;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* SM_Biome_AzureWeald_Flower_01;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_UmbraSeeker(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
