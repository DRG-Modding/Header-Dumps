#ifndef UE4SS_SDK_BP_Phys_BeachBall_HPP
#define UE4SS_SDK_BP_Phys_BeachBall_HPP

class ABP_Phys_BeachBall_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* Spaceballimpact;
    class USingleUsableComponent* SingleUsable;
    class USphereComponent* UseSphere;
    class UStaticMeshComponent* SM_BeachBall_01;
    class USphereComponent* Collision;
    class UCarriableComponent* Carriable;
    class APlayerCharacter* KickedBy;
    FVector ImpactNormal;
    FVector ImpactPoint;
    FVector TraceDirection;
    class USoundBase* ImpactSound;
    FVector throwForce;
    bool HasShowedTutorial;
    class UActorComponent* LastBounce;
    FName LastUseKey;
    bool CanTriggerSound;
    bool test;

    void UsedByClient(EInputKeys Key, class APlayerCharacter* KickedBy);
    void PlayKickAnim(class APlayerCharacter* Kicker);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ShootBall(float ChipValue);
    void ExecuteUbergraph_BP_Phys_BeachBall(int32 EntryPoint);
};

#endif
