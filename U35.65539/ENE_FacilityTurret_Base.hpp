#ifndef UE4SS_SDK_ENE_FacilityTurret_Base_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Base_HPP

class AENE_FacilityTurret_Base_C : UAimingFacilityTurret
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* StaticMesh;
    UWeakpointGlowComponent* WeakpointGlow;
    UAudioComponent* FacilityTurretGenericDormant_Cue;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* Carver;
    UOutlineComponent* outline;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UNiagaraSystem* Niagra;
    FTimerHandle StaticAnimationTimer;

    USkeletalMeshComponent* GetMesh();
    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnEngagedChanged(bool engaged);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void Kill();
    void Carve();
    void DisableAnimations();
    void RemoveAll();
    void ExecuteUbergraph_ENE_FacilityTurret_Base(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_engaged, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_TurretbaseDebris_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
