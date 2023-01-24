#ifndef UE4SS_SDK_EVENT_Defense_Base_HPP
#define UE4SS_SDK_EVENT_Defense_Base_HPP

class AEVENT_Defense_Base_C : public AGameEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* audio;
    class UStaticMeshComponent* SphereMesh;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* OuterSphereMesh;
    class UStaticMeshComponent* InnerSphereMesh;
    float Progress;
    float Duration;
    float InitialProgress;
    TArray<class APlayerCharacter*> DefendingPlayers;
    class UEWC_Salvage_Defend_C* Wave;
    class UHUD_Defend_Event_C* Event Widget;
    FText Event Text;
    FText Event Succeed Text;
    FText Event Failed Text;
    float Extra Defender Bonus;
    int32 Defending player count;
    class UDialogDataAsset* 75p Progress Shout;
    class UDialogDataAsset* 50p Progress Shout;
    class UDialogDataAsset* Event Start Shout;
    class UDialogDataAsset* Event Fail Warning Shout;
    FEVENT_Defense_Base_CDefendSucceded DefendSucceded;
    void DefendSucceded();
    FEVENT_Defense_Base_CDefendFailed DefendFailed;
    void DefendFailed();
    FEVENT_Defense_Base_CProgressUpdated ProgressUpdated;
    void ProgressUpdated(float NewProgress);
    FEVENT_Defense_Base_CDefenderCountUpdate DefenderCountUpdate;
    void DefenderCountUpdate(int32 DefenderCount);

    void UpdateDefenderCount();
    void GetDefenderBonus(int32 DefendingPlayerCount, float& DefenseBonus);
    void AnyPlayersDefending(bool& IsPlayersDefending);
    void OnRep_Defending player count();
    void OnRep_Progress();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EventFailed();
    void EventSucceded();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_EVENT_Defense_Base(int32 EntryPoint);
    void DefenderCountUpdate__DelegateSignature(int32 DefenderCount);
    void ProgressUpdated__DelegateSignature(float NewProgress);
    void DefendFailed__DelegateSignature();
    void DefendSucceded__DelegateSignature();
};

#endif
