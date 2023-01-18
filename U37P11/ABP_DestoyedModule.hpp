#ifndef UE4SS_SDK_ABP_DestoyedModule_HPP
#define UE4SS_SDK_ABP_DestoyedModule_HPP

class UABP_DestoyedModule_C : public UGunTowerModuleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DestoyedModule_AnimGraphNode_ModifyBone_56305503412A48937F0CB9A968487685();
    void ExecuteUbergraph_ABP_DestoyedModule(int32 EntryPoint);
};

#endif
