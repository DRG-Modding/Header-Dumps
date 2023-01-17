#ifndef UE4SS_SDK_ABP_MicroMissileLauncher_A_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_MicroMissileLauncher_A_Skeleton_AnimBlueprint_HPP

class UABP_MicroMissileLauncher_A_Skeleton_AnimBlueprint_C : public UMicroMissileLauncherAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_MicroMissileLauncher_A_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
