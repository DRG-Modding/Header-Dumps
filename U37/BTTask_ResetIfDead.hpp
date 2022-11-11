#ifndef UE4SS_SDK_BTTask_ResetIfDead_HPP
#define UE4SS_SDK_BTTask_ResetIfDead_HPP

class UBTTask_ResetIfDead_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTTask_ResetIfDead(int32 EntryPoint);
};

#endif
