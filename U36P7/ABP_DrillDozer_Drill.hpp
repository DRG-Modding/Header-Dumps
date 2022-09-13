#ifndef UE4SS_SDK_ABP_DrillDozer_Drill_HPP
#define UE4SS_SDK_ABP_DrillDozer_Drill_HPP

class UABP_DrillDozer_Drill_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    float WorldTime;
    float RotateSpeed;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_DrillDozer_Drill(int32 EntryPoint);
};

#endif
