#ifndef UE4SS_SDK_SER_FindAlly_HPP
#define UE4SS_SDK_SER_FindAlly_HPP

class USER_FindAlly_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    float MaxRange;
    FGameplayTagQuery AllyQuery;
    float RangeToReCheck;
    bool MustBeAlive;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindAlly(int32 EntryPoint);
};

#endif
