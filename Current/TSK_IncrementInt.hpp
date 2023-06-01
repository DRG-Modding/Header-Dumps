#ifndef UE4SS_SDK_TSK_IncrementInt_HPP
#define UE4SS_SDK_TSK_IncrementInt_HPP

class UTSK_IncrementInt_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector ValueKey;
    int32 IncrementAmount;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_TSK_IncrementInt(int32 EntryPoint);
};

#endif
