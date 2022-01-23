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

    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnAttack();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnEngagedChanged(bool engaged);
    void DisableAnimations();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_ENE_FacilityTurret_Spinning(int32 EntryPoint, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FExecuteUbergraph_ENE_FacilityTurret_SpinningK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_TurretbaseDebris_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_engaged, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2);
};

#endif
