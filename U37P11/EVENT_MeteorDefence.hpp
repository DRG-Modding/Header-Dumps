#ifndef UE4SS_SDK_EVENT_MeteorDefence_HPP
#define UE4SS_SDK_EVENT_MeteorDefence_HPP

class AEVENT_MeteorDefence_C : public AMeteorDefenseEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    TArray<class APlayerCharacter*> DefendingPlayers;
    FEVENT_MeteorDefence_CDefendSucceded DefendSucceded;
    void DefendSucceded();
    FEVENT_MeteorDefence_CDefendFailed DefendFailed;
    void DefendFailed();
    FEVENT_MeteorDefence_CProgressUpdated ProgressUpdated;
    void ProgressUpdated(float NewProgress);
    class UEWC_PlagueMeteorDefence_C* Wave;
    class UHUD_RockCracker_Event_C* Event Widget;
    FText EventText;
    int32 ActivePodCount;
    FEVENT_MeteorDefence_CBrokenCountUpdated BrokenCountUpdated;
    void BrokenCountUpdated(int32 DefenderCount);
    FText EventSuccedText;
    class UDialogDataAsset* EventStartShout;
    class UDialogDataAsset* EventFailWarningShout;
    class APlagueMeteor* Event;
    int32 NumberToSpawn;

    void OnRep_ActivePodCount();
    void IsPodBroken(int32& WorkingCount);
    void UpdateActivePodCount();
    float GetDefenderBonus(int32 DefendingPlayers);
    bool AnyPodsActive();
    void OnRep_Progress();
    void ReceiveBeginPlay();
    void PodDied(class UHealthComponentBase* HealthComponent);
    void PodRevived(class APlayerCharacter* User, EInputKeys Key);
    void OnEventFinished(bool eventSuccess);
    void ExecuteUbergraph_EVENT_MeteorDefence(int32 EntryPoint);
    void BrokenCountUpdated__DelegateSignature(int32 DefenderCount);
    void ProgressUpdated__DelegateSignature(float NewProgress);
    void DefendFailed__DelegateSignature();
    void DefendSucceded__DelegateSignature();
};

#endif
