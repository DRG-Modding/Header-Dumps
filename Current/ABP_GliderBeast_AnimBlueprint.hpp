#ifndef UE4SS_SDK_ABP_GliderBeast_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_GliderBeast_AnimBlueprint_HPP

class UABP_GliderBeast_AnimBlueprint_C : public UGliderBeastAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_BC0D72494C9ED072EE15DA86E9DF88FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_3D6ADBC64EF0B34D6873389D64254D68();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_TwoWayBlend_7D1547C14C3333D452753297E1616686();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint(int32 EntryPoint);
};

#endif
