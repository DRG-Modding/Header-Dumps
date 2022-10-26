#ifndef UE4SS_SDK_BP_BurrowComponent_HPP
#define UE4SS_SDK_BP_BurrowComponent_HPP

class UBP_BurrowComponent_C : public UBurrowComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* BurrowAnimation;
    class UAnimMontage* UnBurrowAnimation;
    FBP_BurrowComponent_COnBurrow OnBurrow;
    void OnBurrow();
    FBP_BurrowComponent_COnUnBurrow OnUnBurrow;
    void OnUnBurrow();
    FBP_BurrowComponent_COnBurrowComplete OnBurrowComplete;
    void OnBurrowComplete(bool IsEmerging);
    FTimerHandle TimerHandle;

    void GetPawn(class AEnemyDeepPathfinderCharacter*& AsEnemy Deep Pathfinder Character);
    void PlayBurrow(class UAnimMontage* MontageToPlay);
    void PlayUnburrow(class UAnimMontage* MontageToPlay);
    void Unburrow(class UAnimMontage* customMontage);
    void Burrow(class UAnimMontage* customMontage);
    void BurrowComplete();
    void UnburrowComplete();
    void ReceiveBeginPlay();
    void OnFrozenEvent_Event_0(bool boolValue);
    void OnDeath_Event_0(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_BurrowComponent(int32 EntryPoint);
    void OnBurrowComplete__DelegateSignature(bool IsEmerging);
    void OnUnBurrow__DelegateSignature();
    void OnBurrow__DelegateSignature();
};

#endif
