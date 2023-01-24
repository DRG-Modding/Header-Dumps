#ifndef UE4SS_SDK_ASI_Maggot_HPP
#define UE4SS_SDK_ASI_Maggot_HPP

class UASI_Maggot_C : public UAnimSharingTransitionInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_1;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ASI_Maggot(int32 EntryPoint);
};

#endif
