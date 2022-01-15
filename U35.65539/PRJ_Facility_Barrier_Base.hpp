#ifndef UE4SS_SDK_PRJ_Facility_Barrier_Base_HPP
#define UE4SS_SDK_PRJ_Facility_Barrier_Base_HPP

class APRJ_Facility_Barrier_Base_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPlayerImpactCooldownComponent* PlayerImpactCooldown;
    UDamageComponent* Damage;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* BounceBox;
    float Timeline_1_NewTrack_0_75981F9D4B9BA002AD172C81D5266F91;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_75981F9D4B9BA002AD172C81D5266F91;
    UTimelineComponent* Timeline_1;
    float Growth_NewTrack_0_7C9AAAD449A1B186F3E610A47128664F;
    TEnumAsByte<ETimelineDirection::Type> Growth__Direction_7C9AAAD449A1B186F3E610A47128664F;
    UTimelineComponent* Growth;
    float Life;
    FVector ShieldScale;

    void Growth__FinishedFunc();
    void Growth__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CrumbleShield();
    void ExecuteUbergraph_PRJ_Facility_Barrier_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UShieldGeneratorActor* K2Node_DynamicCast_AsShield_Generator_Actor, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetVelocity_ReturnValue, FVector CallFunc_GetActorGroundLocation_ReturnValue, bool CallFunc_CheckCanImpact_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2);
}

#endif
