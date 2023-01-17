#ifndef UE4SS_SDK_ABP_FlameThrower_A_HPP
#define UE4SS_SDK_ABP_FlameThrower_A_HPP

class UABP_FlameThrower_A_C : public UAmmoDrivenWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_Slot AnimGraphNode_Slot;
    FRandomStream RandoStream;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FlameThrower_A_AnimGraphNode_ModifyBone_FF8B823A4EF687E5EFCD9D9060A550B8();
    void ExecuteUbergraph_ABP_FlameThrower_A(int32 EntryPoint);
};

#endif
