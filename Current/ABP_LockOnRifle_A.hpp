#ifndef UE4SS_SDK_ABP_LockOnRifle_A_HPP
#define UE4SS_SDK_ABP_LockOnRifle_A_HPP

class UABP_LockOnRifle_A_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    FAnimNode_Slot AnimGraphNode_Slot;
    FRotator FrontRotation;
    bool HasLockedTarget;
    class ALockOnWeapon* test;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetHasLockedTarget(bool HasLockedTarget);
    void SetRotation(FRotator WorldRotation);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockOnRifle_A_AnimGraphNode_ModifyBone_74E00D924E9336DBFBD36EA357389206();
    void BlueprintBeginPlay();
    void OnRotationUpdated(bool hasTargetLockon, FRotator socketRotation);
    void ExecuteUbergraph_ABP_LockOnRifle_A(int32 EntryPoint);
};

#endif
