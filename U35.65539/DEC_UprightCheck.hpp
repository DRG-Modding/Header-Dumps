#ifndef UE4SS_SDK_DEC_UprightCheck_HPP
#define UE4SS_SDK_DEC_UprightCheck_HPP

class UDEC_UprightCheck_C : UBTDecorator_BlueprintBase
{
    float ZComponent;

    bool PerformConditionCheckAI(UAIController* OwnerController, APawn* ControlledPawnFVector CallFunc_GetActorUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
}

#endif
