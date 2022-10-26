#ifndef UE4SS_SDK_BP_HackedPatrolBotComponent_HPP
#define UE4SS_SDK_BP_HackedPatrolBotComponent_HPP

class UBP_HackedPatrolBotComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HackedPatrolBotComponent(int32 EntryPoint);
};

#endif
