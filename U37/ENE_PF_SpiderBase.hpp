#ifndef UE4SS_SDK_ENE_PF_SpiderBase_HPP
#define UE4SS_SDK_ENE_PF_SpiderBase_HPP

class AENE_PF_SpiderBase_C : public ASpiderEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPawnAlertComponent* PawnAlert;
    class UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UFXSystemAsset* Death Particles;
    class USoundCue* Death Sound;
    float DeathDuration;
    float AlertOthersRadius;
    float MeshScale;
    class UAnimMontage* SpawnMontage;
    float DecalSize;
    class USoundCue* FleeSound;
    class USoundBase* AlertedScream;
    class UMaterialInterface* DeathSplatDecal;

    void EndSpecialAttack();
    void BeginSpecialAttack(int32 SpecialAttackIndex, class UAnimMontage*& Montage);
    void ChangeVisibility(bool bNewVisibility);
    void ActivateSpider(class AActor* Target);
    void InitBlackboard();
    void PlayDeathEffects();
    void OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnDeathBase();
    void Spawn();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnStartedFleeing();
    void PlayFleeSound();
    void All_PlayAlertScream();
    void Receive_Alerted();
    void CancelSpecialAttack();
    void StopMontagesOnDeath();
    void ExecuteUbergraph_ENE_PF_SpiderBase(int32 EntryPoint);
};

#endif
