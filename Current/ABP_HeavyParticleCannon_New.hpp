#ifndef UE4SS_SDK_ABP_HeavyParticleCannon_New_HPP
#define UE4SS_SDK_ABP_HeavyParticleCannon_New_HPP

class UABP_HeavyParticleCannon_New_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    bool IsBeamActive;
    float SpinUpTime;
    float SpinDownTime;
    float MaxSpinsPerSecond;
    float CurrSpinRate;
    float RotateAmount;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyParticleCannon_New_AnimGraphNode_ModifyBone_85473E5045359258D3E4E5ACAD5B2E19();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyParticleCannon_New_AnimGraphNode_ModifyBone_019CE2C0444891B887ABFB82CA0B9117();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_HeavyParticleCannon_New(int32 EntryPoint);
};

#endif
