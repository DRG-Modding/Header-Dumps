#ifndef UE4SS_SDK_BP_TentacleGrab_HPP
#define UE4SS_SDK_BP_TentacleGrab_HPP

class UBP_TentacleGrab_C : public UTentacleGrabAttack
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* AttackLocation;
    class AActor* CurrentTarget;
    class ATerminatorTentacle* Tentacle;
    bool InProgress;
    FBP_TentacleGrab_CStarted Started;
    void Started();
    FBP_TentacleGrab_CEnded Ended;
    void Ended();

    void StopAttack();
    void ThrowPlayer(class UObject* Object);
    void FinalCheckRangeTargetLOS(class AActor* CurrentTarget, bool& HaveLOS);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveAttackTarget(class AActor* Target);
    void PlayPreAttackSound();
    void StartHeadTerrainCheck();
    void PlayCancelAttackSound();
    void CustomEvent_1(class AActor* aGrabbedActor);
    void CustomEvent(class AActor* aGrabbedActor, bool fullGrabElapsed);
    void ReceiveCompleteAttack();
    void ExecuteUbergraph_BP_TentacleGrab(int32 EntryPoint);
    void Ended__DelegateSignature();
    void Started__DelegateSignature();
};

#endif
