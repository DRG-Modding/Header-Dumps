#ifndef UE4SS_SDK_ABP_Prospector_Shield_HPP
#define UE4SS_SDK_ABP_Prospector_Shield_HPP

class UABP_Prospector_Shield_C : UProspectorAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    USkeletalMeshComponent* ProspectorMesh;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Prospector_Shield(int32 EntryPoint);
}

#endif
