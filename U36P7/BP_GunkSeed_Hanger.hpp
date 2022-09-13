#ifndef UE4SS_SDK_BP_GunkSeed_Hanger_HPP
#define UE4SS_SDK_BP_GunkSeed_Hanger_HPP

class ABP_GunkSeed_Hanger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* AoeOverlapSphere;
    class UHealthDamageTracker* HealthDamageTracker;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Root;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    float MinForce;
    float MaxForce;
    FVector EndPointOffset;
    bool HasSeed;
    class ABP_GunkSeed_C* GunkSeed;
    FVector SlapForce;

    bool GetIsTargetable();
    FVector GetTargetCenterMass();
    class UHealthComponentBase* GetTargetHealthComponent();
    void OnRep_SlapForce();
    void OnRep_HasSeed();
    void DropSeed();
    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, const FDamageData& DamageData);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_BP_GunkSeed_Hanger(int32 EntryPoint);
};

#endif
