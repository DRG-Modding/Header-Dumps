#ifndef UE4SS_SDK_TSK_SetInt_HPP
#define UE4SS_SDK_TSK_SetInt_HPP

class UTSK_SetInt_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector ValueKey;
    int32 Amount;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_TSK_SetInt(int32 EntryPoint);
};

#endif
