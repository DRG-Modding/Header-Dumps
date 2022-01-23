#ifndef UE4SS_SDK_APB_ShootingPlant_HPP
#define UE4SS_SDK_APB_ShootingPlant_HPP

class UAPB_ShootingPlant_C : public UShootingPlantAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_Slot AnimGraphNode_Slot_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    class AENE_ShootingPlant_C* ShootingPlant;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_APB_ShootingPlant_AnimGraphNode_BlendSpaceEvaluator_692F3A644EEAD213D969A1BBAA314905();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_APB_ShootingPlant_AnimGraphNode_BlendSpaceEvaluator_77E45F0743146413E1A11AAB3CAE15BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_APB_ShootingPlant_AnimGraphNode_TransitionResult_0B9C4E054C5DC803D8D57BADB055B38B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_APB_ShootingPlant_AnimGraphNode_TransitionResult_D6F3B1C944AF580C9DB543BAB7D014A6();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_APB_ShootingPlant(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AENE_ShootingPlant_C* K2Node_DynamicCast_AsENE_Shooting_Plant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1);
};

#endif
