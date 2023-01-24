#ifndef UE4SS_SDK_BP_SentryGun_Moveable_HPP
#define UE4SS_SDK_BP_SentryGun_Moveable_HPP

class ABP_SentryGun_Moveable_C : public ARecallableSentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_SentryGunMovementTrail;
    class UAudioComponent* AudioMoving;
    class UChildActorComponent* SentryGunActor;
    bool ReturnOnNoAmmo;
    class ARecallableSentryGunItem* Item;
    bool ShowAllOutlines;

    void GetStateDescription(FText& Description);
    void SpawnAudioOnPlayer(class USoundBase* audio);
    TSubclassOf<class ASentryGun> GetSentryGunClass();
    void GetSentryOwner(class APlayerCharacter*& AsPlayer Character);
    class ASentryGun* GetSentryGun();
    void ReceiveBeginPlay();
    void OnMoveRequested();
    void OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter);
    void OnAmmoCountChanged_Event_0(int32 AmmoCount, int32 Change);
    void AudioReadyToBuild();
    void OnMoving();
    void OnMoveFinished(bool returnedHome);
    void AudioBeginMove();
    void AudioMoveFinished();
    void AudioReturnedHome();
    void ReceiveOnStateChanged();
    void Update Outline And Icon();
    void OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnToggleNameplatesEvent_Event_0(bool boolValue);
    void OnItemEquipped_Event(class AItem* Item);
    void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
    void ExecuteUbergraph_BP_SentryGun_Moveable(int32 EntryPoint);
};

#endif
