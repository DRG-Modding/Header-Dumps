#ifndef UE4SS_SDK_TSK_RandomPointFromOrigin_HPP
#define UE4SS_SDK_TSK_RandomPointFromOrigin_HPP

class UTSK_RandomPointFromOrigin_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool FindAtDistance;
    FBlackboardKeySelector Origin;
    float Distance;
    FBlackboardKeySelector LocationKey;
    FVector OriginVec;
    FVector Vector;

    void ActorOrVector();
    void snap(bool snap, class UDeepPathfinderMovement* Path, FVector Origin);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_RandomPointFromOrigin(int32 EntryPoint);
};

#endif
