#ifndef UE4SS_SDK_BP_DamageTriggerComponent_HPP
#define UE4SS_SDK_BP_DamageTriggerComponent_HPP

class UBP_DamageTriggerComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UHealthComponent*> ActorsInRange;
    bool CanOnlyHurtPlayers;
    FBP_DamageTriggerComponent_CActorEntered ActorEntered;
    void ActorEntered(class UHealthComponent* OtherHealthComponent);
    FBP_DamageTriggerComponent_CActorExited ActorExited;
    void ActorExited(class UHealthComponent* OtherHealthComponent);
    bool CheckOnClient;

    bool isEmpty();
    void ReceiveBeginPlay();
    void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_DamageTriggerComponent(int32 EntryPoint);
    void ActorExited__DelegateSignature(class UHealthComponent* OtherHealthComponent);
    void ActorEntered__DelegateSignature(class UHealthComponent* OtherHealthComponent);
};

#endif
