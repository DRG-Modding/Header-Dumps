#ifndef UE4SS_SDK_TSK_SpawnEnemiesAtLocation_HPP
#define UE4SS_SDK_TSK_SpawnEnemiesAtLocation_HPP

class UTSK_SpawnEnemiesAtLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 count;
    class UEnemyDescriptor* EnemyToSpawn;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue);
};

#endif
