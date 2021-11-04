// AnimBlueprintGeneratedClass ABP_TentacleHatch.ABP_TentacleHatch_C
// Size: 0x439 (Inherited: 0x270)
struct UABP_TentacleHatch_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2a8(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3c0(0x78)
	bool IsOpen; // 0x438(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_TentacleHatch(int32_t EntryPoint);
};

