#ifndef UE4SS_SDK_ABP_EyeBase_HPP
#define UE4SS_SDK_ABP_EyeBase_HPP

class UABP_EyeBase_C : UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    bool Closed;

    void AnimGraph(FPoseLink& AnimGraph);
    void CustomEvent_0(bool IsClosed);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_EyeBase(int32 EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, OnBeingHurt__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ABP_CreepyEyes_C* K2Node_DynamicCast_AsBP_Creepy_Eyes, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_IsClosed);
}

#endif
