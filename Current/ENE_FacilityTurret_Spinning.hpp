#ifndef UE4SS_SDK_ENE_FacilityTurret_Spinning_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Spinning_HPP

class AENE_FacilityTurret_Spinning_C : public ASpinningFacilityturret
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* ShieldMesh;
    class UCapsuleComponent* Capsule;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_AC7B3F7C4EBC4266A6222DB9EEEB9907;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AC7B3F7C4EBC4266A6222DB9EEEB9907;
    class UTimelineComponent* Timeline_0;
    int32 Attacks;
    int32 AttackCounter;
    class UNiagaraSystem* Niagra;
    FTimerHandle StaticAnimationTimer;

    FVector GetTargetCenterMass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnAttack();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnEngagedChanged(bool engaged);
    void DisableAnimations();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Kill();
    void ExecuteUbergraph_ENE_FacilityTurret_Spinning(int32 EntryPoint);
};

#endif
