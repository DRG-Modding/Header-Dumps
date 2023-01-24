#ifndef UE4SS_SDK_ABP_Spider_Boss_Adult_HPP
#define UE4SS_SDK_ABP_Spider_Boss_Adult_HPP

class UABP_Spider_Boss_Adult_C : public USpiderAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    float __CustomProperty_MeshScale_4D6B70A748F15E1DE35FEB954FC42998;
    bool PlayDeath;
    class UAnimSequenceBase* DeathAnimation;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetDeathAnimation(class UAnimSequenceBase* Animation);
    void ExecuteUbergraph_ABP_Spider_Boss_Adult(int32 EntryPoint);
};

#endif
