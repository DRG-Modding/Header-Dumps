#ifndef UE4SS_SDK_ENE_SmallShootingPlant_RegenPod_HPP
#define UE4SS_SDK_ENE_SmallShootingPlant_RegenPod_HPP

class AENE_SmallShootingPlant_RegenPod_C : public AHydraWeedHealer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UParticleSystemComponent* P_Hydra_Healing_Seed;
    class UPointLightComponent* PointLight;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UWeakpointGlowComponent* WeakpointGlow;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SkeletalMesh;
    class UEnemyBufferComponent* EnemyBuffer;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_1_NewTrack_0_E713C7134F9737E0824F80801E2D3B4E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_E713C7134F9737E0824F80801E2D3B4E;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Size_74F2544C4A1361E2EE80E89D85FD7033;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74F2544C4A1361E2EE80E89D85FD7033;
    class UTimelineComponent* Timeline_0;
    bool IsPupating;
    float RegenPodLifetime;
    float MaxLightIntensity;
    class UAudioComponent* BuffingSound;

    FVector GetTargetCenterMass();
    class USkeletalMeshComponent* GetMesh();
    class UMeshComponent* Receive_GetMeshComponent();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ToggleHealing(bool CanHeal);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void ContinuePupating();
    void PausePupating();
    void ExecuteUbergraph_ENE_SmallShootingPlant_RegenPod(int32 EntryPoint);
};

#endif
