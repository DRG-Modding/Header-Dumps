#ifndef UE4SS_SDK_BP_DamageTriggerComponent_HPP
#define UE4SS_SDK_BP_DamageTriggerComponent_HPP

class UBP_DamageTriggerComponent_C : UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<UHealthComponent*> ActorsInRange;
    bool CanOnlyHurtPlayers;
    FBP_DamageTriggerComponent_CActorEntered ActorEntered;
    void ActorEntered(UHealthComponent* OtherHealthComponent);
    FBP_DamageTriggerComponent_CActorExited ActorExited;
    void ActorExited(UHealthComponent* OtherHealthComponent);
    bool CheckOnClient;

    bool isEmpty(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    void ExecuteUbergraph_BP_DamageTriggerComponent(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, AActor* K2Node_CustomEvent_OverlappedActor_1, AActor* K2Node_CustomEvent_OtherActor_1, AActor* K2Node_CustomEvent_OverlappedActor, AActor* K2Node_CustomEvent_OtherActor, UPlayerHealthComponent* CallFunc_GetComponentByClass_ReturnValue, UHealthComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UHealthComponent* CallFunc_GetComponentByClass_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, ActorBeginOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ActorEndOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_1);
    void ActorExited__DelegateSignature(UHealthComponent* OtherHealthComponent);
    void ActorEntered__DelegateSignature(UHealthComponent* OtherHealthComponent);
}

#endif
