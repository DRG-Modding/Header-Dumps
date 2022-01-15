#ifndef UE4SS_SDK_TSK_SpawnEnemiesAtLocation_HPP
#define UE4SS_SDK_TSK_SpawnEnemiesAtLocation_HPP

class UTSK_SpawnEnemiesAtLocation_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 count;
    UEnemyDescriptor* EnemyToSpawn;
    FBlackboardKeySelector LocationKey;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_SpawnEnemiesAtLocation(int32 EntryPoint, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_GetBlackboardValueAsVector_ReturnValue);
}

#endif
