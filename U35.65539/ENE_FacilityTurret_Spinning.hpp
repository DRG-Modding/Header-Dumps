#ifndef UE4SS_SDK_ENE_FacilityTurret_Spinning_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Spinning_HPP

class AENE_FacilityTurret_Spinning_C : USpinningFacilityturret
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    UStaticMeshComponent* ShieldMesh;
    UCapsuleComponent* Capsule;
    UWeakpointGlowComponent* WeakpointGlow;
    UPathfinderCollisionComponent* PathfinderCollision;
    UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_AC7B3F7C4EBC4266A6222DB9EEEB9907;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AC7B3F7C4EBC4266A6222DB9EEEB9907;
    UTimelineComponent* Timeline_0;
    int32 Attacks;
    int32 AttackCounter;
    UNiagaraSystem* Niagra;
    FTimerHandle StaticAnimationTimer;

    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnAttack();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnEngagedChanged(bool engaged);
    void DisableAnimations();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_ENE_FacilityTurret_Spinning(int32 EntryPoint, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UBP_TurretbaseDebris_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_engaged, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2);
}

#endif
