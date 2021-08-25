// AnimBlueprintGeneratedClass ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C
// Size: 0x822 (Inherited: 0x270)
struct UABP_HydraWeed_Hearth_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x348(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3f0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x498(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x510(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x540(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5b8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5e8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x698(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x6e0(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7a8(0x78)
	bool IsOpen; // 0x820(0x01)
	bool IsDormant; // 0x821(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C.AnimGraph
	void BlueprintBeginPlay(); // Function ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C.BlueprintBeginPlay
	void OnOpenChanged_Event_1(bool IsOpen); // Function ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C.OnOpenChanged_Event_1
	void OnDormantChanged_Event_1(bool IsDormant); // Function ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C.OnDormantChanged_Event_1
	void ExecuteUbergraph_ABP_HydraWeed_Hearth(int32_t EntryPoint); // Function ABP_HydraWeed_Hearth.ABP_HydraWeed_Hearth_C.ExecuteUbergraph_ABP_HydraWeed_Hearth
};

