#ifndef UE4SS_SDK_ABP_GunTower_LMG_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_ABP_GunTower_LMG_Skeleton_AnimBlueprint_HPP

class UABP_GunTower_LMG_Skeleton_AnimBlueprint_C : public UGunTowerModuleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    float MaxAimYaw;
    float MaxAimPitch;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2F5B8FD14C70B219912417B56C99F4B7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3C2D263449A3644B777F87B659FCBAD8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_F4C555BB48539FD39673A89D07C2A337();
    void ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_ClampAngle_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_ClampAngle_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue_2);
};

#endif
