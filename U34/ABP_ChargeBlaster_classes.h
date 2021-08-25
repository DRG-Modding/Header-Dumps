// AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C
// Size: 0x630 (Inherited: 0x290)
struct UABP_ChargeBlaster_C : UChargedWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x310(0x78)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x388(0xc8)
	struct FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x450(0x38)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x488(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4d0(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x548(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x5e8(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ChargeBlaster.ABP_ChargeBlaster_C.AnimGraph
	void ExecuteUbergraph_ABP_ChargeBlaster(int32_t EntryPoint); // Function ABP_ChargeBlaster.ABP_ChargeBlaster_C.ExecuteUbergraph_ABP_ChargeBlaster
};

