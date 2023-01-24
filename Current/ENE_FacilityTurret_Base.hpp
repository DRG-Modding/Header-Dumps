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
    FVector GetTargetCenterMass();
    void ReceiveBeginPlay();
    void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnEngagedChanged(bool engaged);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void Kill();
    void Carve();
    void DisableAnimations();
    void RemoveAll();
    void ExecuteUbergraph_ENE_FacilityTurret_Base(int32 EntryPoint);
};

#endif
