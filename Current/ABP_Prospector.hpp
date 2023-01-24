#ifndef UE4SS_SDK_ABP_Prospector_HPP
#define UE4SS_SDK_ABP_Prospector_HPP

class UABP_Prospector_C : public UProspectorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FVector NewVar_0;
    FVector External force;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prospector_AnimGraphNode_ModifyBone_F0657A5644715BBC7E5BE5A2E64FD1DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prospector_AnimGraphNode_BlendListByInt_12F6F3B34348AA6B90DA3687DBCE4E7F();
    void ExecuteUbergraph_ABP_Prospector(int32 EntryPoint);
};

#endif
