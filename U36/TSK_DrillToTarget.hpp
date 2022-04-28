#ifndef UE4SS_SDK_TSK_DrillToTarget_HPP
#define UE4SS_SDK_TSK_DrillToTarget_HPP

class UTSK_DrillToTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector StartPosKey;
    FBlackboardKeySelector EndPosKey;
    FBlackboardKeySelector StartTangentKey;
    FBlackboardKeySelector EndTangentKey;
    float Progress;
    float MoveSpeed;
    FVector NewLocation;
    class AEscortMule* MULE;
    float RotateSpeedMod;
    FRotator NewRotation;

    void FindNextLoc(float DeltaSeconds, float& additionalProgress, FVector& NewLoc, FRotator& NewRotation);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_TSK_DrillToTarget(int32 EntryPoint);
};

#endif
