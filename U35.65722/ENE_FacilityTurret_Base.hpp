#ifndef UE4SS_SDK_ENE_FacilityTurret_Base_HPP
#define UE4SS_SDK_ENE_FacilityTurret_Base_HPP

class AENE_FacilityTurret_Base_C : public AAimingFacilityTurret
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UAudioComponent* FacilityTurretGenericDormant_Cue;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* Carver;
    class UOutlineComponent* outline;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UNiagaraSystem* Niagra;
    FTimerHandle StaticAnimationTimer;

    class USkeletalMeshComponent* GetMesh();
    FVector GetTargetCenterMass(FVector CallFunc_GetSocketLocation_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEngagedChanged(bool engaged);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void Kill();
    void Carve();
    void DisableAnimations();
    void RemoveAll();
    void ExecuteUbergraph_ENE_FacilityTurret_Base(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_engaged, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, FExecuteUbergraph_ENE_FacilityTurret_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsAlive_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_TurretbaseDebris_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
