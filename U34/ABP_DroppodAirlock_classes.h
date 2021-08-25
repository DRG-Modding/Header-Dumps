// AnimBlueprintGeneratedClass ABP_DroppodAirlock.ABP_DroppodAirlock_C
// Size: 0x922 (Inherited: 0x270)
struct UABP_DroppodAirlock_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x438(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x460(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x4a8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4d8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x550(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x580(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x5f8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x628(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x670(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6a0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x718(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x748(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7c0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x7f0(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x838(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x868(0xb0)
	struct ABP_DropPod_Base_C* DropPod; // 0x918(0x08)
	bool OuterOpen; // 0x920(0x01)
	bool InnerOpen; // 0x921(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.AnimGraph
	void BlueprintInitializeAnimation(); // Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.BlueprintInitializeAnimation
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.BlueprintUpdateAnimation
	void ExecuteUbergraph_ABP_DroppodAirlock(int32_t EntryPoint); // Function ABP_DroppodAirlock.ABP_DroppodAirlock_C.ExecuteUbergraph_ABP_DroppodAirlock
};

