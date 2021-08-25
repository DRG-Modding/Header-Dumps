// AnimBlueprintGeneratedClass ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C
// Size: 0x1000 (Inherited: 0x2f0)
struct UABP_GliderBeast_AnimBlueprint_C : UGliderBeastAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	char UnknownData_328[0x8]; // 0x328(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x330(0x590)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8c0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8e0(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x900(0x48)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x948(0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0xa10(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xad8(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb50(0x78)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0xbc8(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0xc10(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xc58(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xca0(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xce8(0xc8)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xdb0(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xdf8(0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xec0(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xf60(0xa0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_BC0D72494C9ED072EE15DA86E9DF88FB(); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_BC0D72494C9ED072EE15DA86E9DF88FB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_3D6ADBC64EF0B34D6873389D64254D68(); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_3D6ADBC64EF0B34D6873389D64254D68
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_TwoWayBlend_7D1547C14C3333D452753297E1616686(); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_TwoWayBlend_7D1547C14C3333D452753297E1616686
	void BlueprintBeginPlay(); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.BlueprintBeginPlay
	void ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint(int32_t EntryPoint); // Function ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C.ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint
};

