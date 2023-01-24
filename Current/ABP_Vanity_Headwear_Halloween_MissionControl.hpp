#ifndef UE4SS_SDK_ABP_Vanity_Headwear_Halloween_MissionControl_HPP
#define UE4SS_SDK_ABP_Vanity_Headwear_Halloween_MissionControl_HPP

class UABP_Vanity_Headwear_Halloween_MissionControl_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    class ABP_MissionControlPointlight_C* Point Light;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_Vanity_Headwear_Halloween_MissionControl(int32 EntryPoint);
};

#endif
