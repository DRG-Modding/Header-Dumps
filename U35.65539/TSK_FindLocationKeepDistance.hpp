#ifndef UE4SS_SDK_TSK_FindLocationKeepDistance_HPP
#define UE4SS_SDK_TSK_FindLocationKeepDistance_HPP

class UTSK_FindLocationKeepDistance_C : UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MinDistance;
    float MaxDistance;
    FBlackboardKeySelector TargetToAvoid;
    float IdealDistance;
    FBlackboardKeySelector TargetLocation;

    void ReceiveExecuteAI(UAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_FindLocationKeepDistance(int32 EntryPoint, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, UDeepPathfinderCharacter* K2Node_DynamicCast_AsDeep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, DeepPathFinderSize CallFunc_GetPathfinderSize_ReturnValue, FVector CallFunc_FindPointKeepingDistance_outPos, bool CallFunc_FindPointKeepingDistance_ReturnValue, DeepPathFinderType CallFunc_GetPathfinderType_ReturnValue, FVector CallFunc_SnapToGrid_ReturnValue);
}

#endif
