#ifndef UE4SS_SDK_PRJ_ProjectileBarf_HPP
#define UE4SS_SDK_PRJ_ProjectileBarf_HPP

class APRJ_ProjectileBarf_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    float Timeline_0_NewTrack_0_3717E14C4B7CB080E7AA388B3D991446;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3717E14C4B7CB080E7AA388B3D991446;
    class UTimelineComponent* Timeline_0;
    float LockOnTime;
    class USceneComponent* Homing Target;
    float Acceptance;
    FPRJ_ProjectileBarf_COnPuddleSpawned OnPuddleSpawned;
    void OnPuddleSpawned(class ABP_WalkingPlagueheart_SlimeTrailPuddle_C* puddle);
    FVector_NetQuantize ArrivedLocation;

    void OnRep_ArrivedLocation();
    void OnRep_Homing Target();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetHomingTarget(class USceneComponent* HomingTarget);
    void ReceiveTick(float DeltaSeconds);
    void OnArrived(FVector ArrivedLocation);
    void ExecuteUbergraph_PRJ_ProjectileBarf(int32 EntryPoint);
    void OnPuddleSpawned__DelegateSignature(class ABP_WalkingPlagueheart_SlimeTrailPuddle_C* puddle);
};

#endif
