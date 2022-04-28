#ifndef UE4SS_SDK_ABP_CryoSpray_HPP
#define UE4SS_SDK_ABP_CryoSpray_HPP

class UABP_CryoSpray_C : public UCryoSprayAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CryoSpray(int32 EntryPoint);
};

#endif
