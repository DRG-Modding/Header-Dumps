#ifndef UE4SS_SDK_BTTask_SetEnemyOffsetPositionForTrackingMovement_HPP
#define UE4SS_SDK_BTTask_SetEnemyOffsetPositionForTrackingMovement_HPP

class UBTTask_SetEnemyOffsetPositionForTrackingMovement_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_SetEnemyOffsetPositionForTrackingMovement(int32 EntryPoint);
};

#endif
