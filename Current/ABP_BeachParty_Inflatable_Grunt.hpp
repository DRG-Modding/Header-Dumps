#ifndef UE4SS_SDK_ABP_BeachParty_Inflatable_Grunt_HPP
#define UE4SS_SDK_ABP_BeachParty_Inflatable_Grunt_HPP

class UABP_BeachParty_Inflatable_Grunt_C : public UVanityAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_RigidBody AnimGraphNode_RigidBody;
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_BeachParty_Inflatable_Grunt(int32 EntryPoint);
};

#endif
