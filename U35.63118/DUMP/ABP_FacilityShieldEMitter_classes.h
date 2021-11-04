// AnimBlueprintGeneratedClass ABP_FacilityShieldEMitter.ABP_FacilityShieldEmitter_C
// Size: 0x9f2 (Inherited: 0x270)
struct UABP_FacilityShieldEmitter_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x320(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x398(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x440(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x470(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4e8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x518(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x5c8(0x48)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x610(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x638(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x660(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x688(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x700(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x730(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7a8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7d8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x850(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x880(0xb0)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x930(0xc0)
	bool L_Activated; // 0x9f0(0x01)
	bool R_Activated; // 0x9f1(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_FacilityShieldEmitter(int32_t EntryPoint);
};

