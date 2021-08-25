// AnimBlueprintGeneratedClass ABP_Spike_B.ABP_Spike_B_C
// Size: 0x639 (Inherited: 0x270)
struct UABP_Spike_B_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3c0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x3f0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x438(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x468(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4e0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x510(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x558(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x588(0xb0)
	bool Is Extruded; // 0x638(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Spike_B.ABP_Spike_B_C.AnimGraph
	void Set is Extruded(bool Is Extruded, bool Is Triggered); // Function ABP_Spike_B.ABP_Spike_B_C.Set is Extruded
	void SetupEvent(struct ABP_SpikeyPlant_C* NewParam); // Function ABP_Spike_B.ABP_Spike_B_C.SetupEvent
	void ExecuteUbergraph_ABP_Spike_B(int32_t EntryPoint); // Function ABP_Spike_B.ABP_Spike_B_C.ExecuteUbergraph_ABP_Spike_B
};

