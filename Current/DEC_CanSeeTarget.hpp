#ifndef UE4SS_SDK_DEC_CanSeeTarget_HPP
#define UE4SS_SDK_DEC_CanSeeTarget_HPP

class UDEC_CanSeeTarget_C : public UBTDecorator_BlueprintBase
{
    float MaxDistance;
    FBlackboardKeySelector TargetKey;
    FVector EyeLocationOffset;
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    FName FromSocket;

    void GetStartLocation(class AActor* FromActor, FVector& NewParam);
    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

#endif
