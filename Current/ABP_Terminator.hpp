#ifndef UE4SS_SDK_ABP_Terminator_HPP
#define UE4SS_SDK_ABP_Terminator_HPP

class UABP_Terminator_C : public UTerminatorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_3;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Terminator_AnimGraphNode_ModifyBone_8166DB9F4A3C82394A0B4899791B9939();
    void ExecuteUbergraph_ABP_Terminator(int32 EntryPoint);
};

#endif
