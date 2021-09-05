// AnimBlueprintGeneratedClass ABP_EyeBase.ABP_EyeBase_C
// Size: 0x481 (Inherited: 0x270)
struct UABP_EyeBase_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f0(0x78)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x368(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x408(0x78)
	bool Closed; // 0x480(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void CustomEvent_1(bool IsClosed);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_EyeBase(int32_t EntryPoint);
};

