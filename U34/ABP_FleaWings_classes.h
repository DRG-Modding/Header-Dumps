// AnimBlueprintGeneratedClass ABP_FleaWings.ABP_FleaWings_C
// Size: 0x4f9 (Inherited: 0x270)
struct UABP_FleaWings_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2d0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x370(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x418(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x448(0xb0)
	bool Flying; // 0x4f8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_FleaWings.ABP_FleaWings_C.AnimGraph
	void SetFlying(bool SetFlying); // Function ABP_FleaWings.ABP_FleaWings_C.SetFlying
	void ExecuteUbergraph_ABP_FleaWings(int32_t EntryPoint); // Function ABP_FleaWings.ABP_FleaWings_C.ExecuteUbergraph_ABP_FleaWings
};

