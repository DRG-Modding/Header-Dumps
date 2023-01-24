#ifndef UE4SS_SDK_BP_Spacerig_Spaceball_Goal_HPP
#define UE4SS_SDK_BP_Spacerig_Spaceball_Goal_HPP

class ABP_Spacerig_Spaceball_Goal_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget1;
    class UWidgetComponent* Widget;
    class UBoxComponent* GoalBox;
    class USphereComponent* UseSphere;
    class UParticleSystemComponent* ParticleSystem2;
    class UParticleSystemComponent* ParticleSystem1;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* Goal;
    class UStaticMeshComponent* SM_GoalEmitter_01;
    class UBoxComponent* Box;
    class UCarriableComponent* Carriable;
    FVector throwForce;
    int32 GoalsScored;
    float StartYaw;
    class USoundBase* GoalScoredSound;
    class USoundBase* ThrowSound;
    float StartedDeploying;
    bool HasReachedPeak;
    float SmoothCoff;
    bool BeginActive;
    bool HasBounced;
    float GoalClosedTimer;

    void OnRep_GoalClosedTimer();
    void HandlePopUp(float DeltaTime);
    void OnRep_GoalsScored();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void SetGoalVisible();
    void Throw(FVector force);
    void BndEvt__GoalBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Countdown Completed();
    void ExecuteUbergraph_BP_Spacerig_Spaceball_Goal(int32 EntryPoint);
};

#endif
