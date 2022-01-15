#ifndef UE4SS_SDK_ABP_Spider_Boss_Twin_HPP
#define UE4SS_SDK_ABP_Spider_Boss_Twin_HPP

class UABP_Spider_Boss_Twin_C : USpiderAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Slot AnimGraphNode_Slot_2;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_Root AnimGraphNode_Root;
    float __CustomProperty_MeshScale_2736D6F143DF40E6119A3C80493609FF;
    FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;
    bool PlayDeath;
    UAnimSequenceBase* DeathAnimation;

    void AnimGraph(FPoseLink& AnimGraph);
    void SetDeathAnimation(UAnimSequenceBase* Animation);
    void ExecuteUbergraph_ABP_Spider_Boss_Twin(int32 EntryPoint, UAnimSequenceBase* K2Node_Event_animation);
}

#endif
