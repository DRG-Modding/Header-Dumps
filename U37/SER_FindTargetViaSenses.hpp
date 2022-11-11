#ifndef UE4SS_SDK_SER_FindTargetViaSenses_HPP
#define UE4SS_SDK_SER_FindTargetViaSenses_HPP

class USER_FindTargetViaSenses_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetKey;
    FGameplayTagContainer AllowedTargets;

    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnSensePawn(class APawn* Pawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_SER_FindTargetViaSenses(int32 EntryPoint);
};

#endif
