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

    bool isEmpty(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_DamageTriggerComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_OverlappedActor_1, class AActor* K2Node_CustomEvent_OtherActor_1, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class UPlayerHealthComponent* CallFunc_GetComponentByClass_ReturnValue, class UHealthComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UHealthComponent* CallFunc_GetComponentByClass_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_BP_DamageTriggerComponentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_DamageTriggerComponentK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_1);
    void ActorExited__DelegateSignature(class UHealthComponent* OtherHealthComponent);
    void ActorEntered__DelegateSignature(class UHealthComponent* OtherHealthComponent);
};

#endif
