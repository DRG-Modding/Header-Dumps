#ifndef UE4SS_SDK_ABP_Refinery_Extractor_HPP
#define UE4SS_SDK_ABP_Refinery_Extractor_HPP

class UABP_Refinery_Extractor_C : public UPipelineExtractorPodAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_5;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_ModifyBone_B28C93DA4A78C9033C919ABA3509B29A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_1C9E8B3148F41E4A3D023384186756A8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_1E91F63C4DD341EFE0EF70BFD70474B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_CBDB7F804758E074687C15BAB7CB4A50();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_B37567804457AB06A11554BE880D1FE8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_EC4C5A81470B844A37825E8EFEF87F4E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_3144F4224BF0A8244A94C3BEABC54276();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_C6E88EA7409F8E1D68CEBEB4C20C6DEF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Refinery_Extractor_AnimGraphNode_TransitionResult_22CA9A17410AFA09FC2251AEE0BD2872();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Refinery_Extractor(int32 EntryPoint);
};

#endif
