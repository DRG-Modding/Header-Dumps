#ifndef UE4SS_SDK_SK_Defence_Tentacle_01_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_Defence_Tentacle_01_Skeleton_AnimBlueprint_HPP

class USK_Defence_Tentacle_01_Skeleton_AnimBlueprint_C : public UTentacleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;
    FAnimNode_Tentacle AnimGraphNode_Tentacle;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SK_Defence_Tentacle_01_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
