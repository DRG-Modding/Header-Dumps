#ifndef UE4SS_SDK_ABP_Prospector_HPP
#define UE4SS_SDK_ABP_Prospector_HPP

class UABP_Prospector_C : public UProspectorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FVector NewVar_0;
    FVector External force;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prospector_AnimGraphNode_BlendListByInt_12F6F3B34348AA6B90DA3687DBCE4E7F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prospector_AnimGraphNode_ModifyBone_F0657A5644715BBC7E5BE5A2E64FD1DF();
    void ExecuteUbergraph_ABP_Prospector(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FRotator CallFunc_MakeRotator_ReturnValue);
};

#endif
