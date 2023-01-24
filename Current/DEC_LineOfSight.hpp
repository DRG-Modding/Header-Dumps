#ifndef UE4SS_SDK_DEC_LineOfSight_HPP
#define UE4SS_SDK_DEC_LineOfSight_HPP

class UDEC_LineOfSight_C : public UBTDecorator_BlueprintBase
{
    FVector StartOffsetVector;
    FVector EndOffsetVector;
    FBlackboardKeySelector TargetKey;
    FVector TraceToLocation;

    void ActorOrVector();
    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
