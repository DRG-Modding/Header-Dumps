// AnimBlueprintGeneratedClass ABP_Refinery_Depositor.ABP_Refinery_Depositor_C
// Size: 0x5f9 (Inherited: 0x270)
struct UABP_Refinery_Depositor_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x348(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x3c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3f0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x498(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x510(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x540(0xb0)
	struct ABP_Refinery_Depositor_C* Depositor; // 0x5f0(0x08)
	bool DepositorOpen; // 0x5f8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Refinery_Depositor.ABP_Refinery_Depositor_C.AnimGraph
	void BlueprintBeginPlay(); // Function ABP_Refinery_Depositor.ABP_Refinery_Depositor_C.BlueprintBeginPlay
	void OnDepositorOpenChanged(bool InOpen); // Function ABP_Refinery_Depositor.ABP_Refinery_Depositor_C.OnDepositorOpenChanged
	void ExecuteUbergraph_ABP_Refinery_Depositor(int32_t EntryPoint); // Function ABP_Refinery_Depositor.ABP_Refinery_Depositor_C.ExecuteUbergraph_ABP_Refinery_Depositor
};

