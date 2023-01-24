#ifndef UE4SS_SDK_PRJ_Facility_Barrier_Base_HPP
#define UE4SS_SDK_PRJ_Facility_Barrier_Base_HPP

class APRJ_Facility_Barrier_Base_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPlayerImpactCooldownComponent* PlayerImpactCooldown;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* BounceBox;
    float Timeline_1_NewTrack_0_75981F9D4B9BA002AD172C81D5266F91;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_75981F9D4B9BA002AD172C81D5266F91;
    class UTimelineComponent* Timeline_1;
    float Growth_NewTrack_0_7C9AAAD449A1B186F3E610A47128664F;
    TEnumAsByte<ETimelineDirection::Type> Growth__Direction_7C9AAAD449A1B186F3E610A47128664F;
    class UTimelineComponent* Growth;
    float Life;
    FVector ShieldScale;

    void Growth__FinishedFunc();
    void Growth__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CrumbleShield();
    void ExecuteUbergraph_PRJ_Facility_Barrier_Base(int32 EntryPoint);
};

#endif
