#ifndef UE4SS_SDK_SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_HPP

class USK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_C : public UTentacleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_Tentacle AnimGraphNode_Tentacle;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint(int32 EntryPoint);
};

#endif
