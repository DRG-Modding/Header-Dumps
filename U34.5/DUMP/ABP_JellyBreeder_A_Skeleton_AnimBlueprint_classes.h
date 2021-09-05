// AnimBlueprintGeneratedClass ABP_JellyBreeder_A_Skeleton_AnimBlueprint.ABP_JellyBreeder_A_Skeleton_AnimBlueprint_C
// Size: 0xef8 (Inherited: 0x300)
struct UABP_JellyBreeder_A_Skeleton_AnimBlueprint_C : UJellyBreederAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x338(0xa0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3d8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x400(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x428(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x450(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x478(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4f0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x520(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x598(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x5c8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x640(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x670(0xb0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x720(0x48)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x768(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x830(0x78)
	FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x8b0(0x590)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xe40(0x78)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xeb8(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xed8(0x20)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_JellyBreeder_A_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

