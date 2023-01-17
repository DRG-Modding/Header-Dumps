#ifndef UE4SS_SDK_EVENT_DropPodDefense_Base_HPP
#define UE4SS_SDK_EVENT_DropPodDefense_Base_HPP

class AEVENT_DropPodDefense_Base_C : public AGameEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class UStaticMeshComponent* SphereInner1;
    class UStaticMeshComponent* SphereInner2;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Sphere1;
    float Progress;
    float Duration;
    float InitialProgress;
    TArray<class APlayerCharacter*> DefendingPlayers;
    FEVENT_DropPodDefense_Base_CDefendSucceded DefendSucceded;
    void DefendSucceded();
    FEVENT_DropPodDefense_Base_CDefendFailed DefendFailed;
    void DefendFailed();
    FEVENT_DropPodDefense_Base_CProgressUpdated ProgressUpdated;
    void ProgressUpdated(float NewProgress);
    class UEWC_Salvage_Defend_C* Wave;
    class UHUD_Salvage_Defend_C* Event Widget;
    FText EventText;
    float ExtraDefenderBonus;
    int32 DefendingPlayerCount;
    FEVENT_DropPodDefense_Base_CDefenderCountUpdated DefenderCountUpdated;
    void DefenderCountUpdated(int32 DefenderCount);
    FText EventSuccedText;
    class UDialogDataAsset* EventStartShout;
    class UDialogDataAsset* EventFailWarningShout;
    class UDialogDataAsset* 75pProgressShout;
    class UDialogDataAsset* 50pProgressShout;

    void OnRep_DefendingPlayerCount();
    void UpdateDefenderCount();
    float GetDefenderBonus(int32 DefendingPlayers);
    bool AnyPlayersDefending();
    void OnRep_Progress();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void EventSucceded();
    void EventFailed();
    void ExecuteUbergraph_EVENT_DropPodDefense_Base(int32 EntryPoint);
    void DefenderCountUpdated__DelegateSignature(int32 DefenderCount);
    void ProgressUpdated__DelegateSignature(float NewProgress);
    void DefendFailed__DelegateSignature();
    void DefendSucceded__DelegateSignature();
};

#endif
