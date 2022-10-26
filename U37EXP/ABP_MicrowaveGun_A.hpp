#ifndef UE4SS_SDK_ABP_MicrowaveGun_A_HPP
#define UE4SS_SDK_ABP_MicrowaveGun_A_HPP

class UABP_MicrowaveGun_A_C : public UAmmoDrivenWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    float RotateAmount;
    float RotateSpeed;
    FABP_MicrowaveGun_A_COnStartCharacterOverheat OnStartCharacterOverheat;
    void OnStartCharacterOverheat();

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_C7BC802944DE4B55B4B4BDB20485D581();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F64A336448E91212781B0BB5A0B348FA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MicrowaveGun_A_AnimGraphNode_ModifyBone_F56B78FB4CFB682D3282CA9DE5426AA6();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void AnimNotify_StartCharacterOverheat();
    void ExecuteUbergraph_ABP_MicrowaveGun_A(int32 EntryPoint);
    void OnStartCharacterOverheat__DelegateSignature();
};

#endif
