// AnimBlueprintGeneratedClass ABP_CryoSpray.ABP_CryoSpray_C
// Size: 0x650 (Inherited: 0x290)
struct UABP_CryoSpray_C : UCryoSprayAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x298(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x310(0x78)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x388(0xc0)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x448(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x490(0x78)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x508(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x528(0x108)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x630(0x20)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_CryoSpray(int32_t EntryPoint);
};

