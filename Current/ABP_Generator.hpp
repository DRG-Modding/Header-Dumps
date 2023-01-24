#ifndef UE4SS_SDK_ABP_Generator_HPP
#define UE4SS_SDK_ABP_Generator_HPP

class UABP_Generator_C : public UAnchorTurnerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Generator_AnimGraphNode_ModifyBone_2987C6BF4EF9F5B6D208E192A792E914();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Generator_AnimGraphNode_SequenceEvaluator_2DD504D04D3C106DCBE8F2AABB3EE19A();
    void ExecuteUbergraph_ABP_Generator(int32 EntryPoint);
};

#endif
