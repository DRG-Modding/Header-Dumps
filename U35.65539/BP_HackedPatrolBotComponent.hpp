#ifndef UE4SS_SDK_BP_HackedPatrolBotComponent_HPP
#define UE4SS_SDK_BP_HackedPatrolBotComponent_HPP

class UBP_HackedPatrolBotComponent_C : UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HackedPatrolBotComponent(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, UPatrolBot* K2Node_DynamicCast_AsPatrol_Bot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveGameplayTag_ReturnValue);
}

#endif
