// AnimBlueprintGeneratedClass ABP_Bomber.ABP_Bomber_C
// Size: 0x878 (Inherited: 0x300)
struct UABP_Bomber_C : UBomberAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x338(0x48)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x380(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x420(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x448(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x470(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4e8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x518(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x590(0x30)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5c0(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x660(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6d8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x750(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x780(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x830(0x48)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bomber_AnimGraphNode_TransitionResult_F239EF8F4AA32B7766425792B2B51105();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Bomber_AnimGraphNode_TransitionResult_78B9F9044753BE46DD1F5D974C97755C();
	void ExecuteUbergraph_ABP_Bomber(int32_t EntryPoint);
};

