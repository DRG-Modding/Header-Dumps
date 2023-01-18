#ifndef UE4SS_SDK_ABP_Armor_Dlc04_Engineer_HPP
#define UE4SS_SDK_ABP_Armor_Dlc04_Engineer_HPP

class UABP_Armor_Dlc04_Engineer_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Armor_Dlc04_Engineer(int32 EntryPoint);
};

#endif
