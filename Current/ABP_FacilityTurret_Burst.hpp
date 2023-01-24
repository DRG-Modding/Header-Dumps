#ifndef UE4SS_SDK_ABP_FacilityTurret_Burst_HPP
#define UE4SS_SDK_ABP_FacilityTurret_Burst_HPP

class UABP_FacilityTurret_Burst_C : public UFacilityTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Burst_AnimGraphNode_ModifyBone_E40A267540EA195106F748AAFC719C86();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Burst_AnimGraphNode_ModifyBone_AEA6FD494598A33DCB2443A5F72B4FB5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Burst_AnimGraphNode_ModifyBone_6D8EBA9940C59C66190121BC8F1D7436();
    void ExecuteUbergraph_ABP_FacilityTurret_Burst(int32 EntryPoint);
};

#endif
