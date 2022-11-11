#ifndef UE4SS_SDK_BTTask_ConsiderRepositioningByRNG_HPP
#define UE4SS_SDK_BTTask_ConsiderRepositioningByRNG_HPP

class UBTTask_ConsiderRepositioningByRNG_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float probabilityOfShift;
    bool newResultOnRNGSuccess;
    FName blackboardBoolKeyName;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_ConsiderRepositioningByRNG(int32 EntryPoint);
};

#endif
