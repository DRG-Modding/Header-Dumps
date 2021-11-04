// AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C
// Size: 0x630 (Inherited: 0x290)
struct UABP_ChargeBlaster_C : UChargedWeaponAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x310(0x78)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x388(0xc8)
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x450(0x38)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x488(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4d0(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x548(0xa0)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x5e8(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_ChargeBlaster(int32_t EntryPoint);
};

