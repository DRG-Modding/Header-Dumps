#ifndef UE4SS_SDK_ABP_FacilityTurret_Sniper_HPP
#define UE4SS_SDK_ABP_FacilityTurret_Sniper_HPP

class UABP_FacilityTurret_Sniper_C : public UFacilityTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_D6F5E12347AE2C6D3286F1900ED2E829();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_2E8B42B149D78372FC80BAA51BA64487();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_8351D46F43B989B3D40125B653D00257();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_9F92B89543D73B0A825D0D958C624B93();
    void ExecuteUbergraph_ABP_FacilityTurret_Sniper(int32 EntryPoint);
};

#endif
