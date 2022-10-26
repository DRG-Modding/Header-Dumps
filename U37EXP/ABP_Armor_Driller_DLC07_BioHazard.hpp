#ifndef UE4SS_SDK_ABP_Armor_Driller_DLC07_BioHazard_HPP
#define UE4SS_SDK_ABP_Armor_Driller_DLC07_BioHazard_HPP

class UABP_Armor_Driller_DLC07_BioHazard_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Armor_Driller_DLC07_BioHazard(int32 EntryPoint);
};

#endif
