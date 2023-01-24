#ifndef UE4SS_SDK_BP_DropPod_Landing_HPP
#define UE4SS_SDK_BP_DropPod_Landing_HPP

class ABP_DropPod_Landing_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* BoscoSpawningPoint;
    class UAudioComponent* audio_0;
    class UParticleSystemComponent* ParticleSystem_DroppodDoorRocks;
    class UBoxComponent* LeaveDropShipTrigger;
    bool SkipSequence;
    TArray<class UAudioComponent*> AudioArray;

    void FadeToBlack();
    void AttachCharacter(class APlayerCharacter* PlayerCharacter);
    bool IsOwnedPlayerStart(class APlayerController* Controller, class UChildActorComponent* Component);
    void FindSpawnPoint(class APlayerController* Controller, class UChildActorComponent*& Start);
    void DetachAll();
    void SpawnAndStoreAudio(class USoundBase* Sound, class USceneComponent* AttachToComponent, class UAudioComponent*& AudioComponent);
    void OnAllPlayersLeftPod();
    void OnDroppodImpact();
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LeaveDropShipTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDeparting();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
    void StopListeningToNewPlayers();
    void OnFirstPlayerLeftPod();
    void ExecuteUbergraph_BP_DropPod_Landing(int32 EntryPoint);
};

#endif
