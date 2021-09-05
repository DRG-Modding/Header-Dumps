// AnimBlueprintGeneratedClass ABP_Spike_B.ABP_Spike_B_C
// Size: 0x639 (Inherited: 0x270)
struct UABP_Spike_B_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3c0(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x3f0(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x438(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x468(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x4e0(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x510(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x558(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x588(0xb0)
	bool Is Extruded; // 0x638(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void Set is Extruded(bool Is Extruded, bool Is Triggered);
	void SetupEvent(ABP_SpikeyPlant_C* NewParam);
	void ExecuteUbergraph_ABP_Spike_B(int32_t EntryPoint);
};

