#ifndef UE4SS_SDK_ABP_Coilgun_C_HPP
#define UE4SS_SDK_ABP_Coilgun_C_HPP

class UABP_Coilgun_C_C : public UCoilGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_47411E17468213778CE3CE90FB18B314();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_A234B9AB4187E4A72FF01880C8DF0BD1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_D52000684142EB812F43BBB2086C2382();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_93D5A0324101FDB427C876A962A971C3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_320E84354C147DA7739F42BD90C518D9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Coilgun_C_AnimGraphNode_ModifyBone_EC77A07D4B86C19CD1E3239DD8B86070();
    void ExecuteUbergraph_ABP_Coilgun_C(int32 EntryPoint);
};

#endif
