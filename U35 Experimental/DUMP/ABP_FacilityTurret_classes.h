// AnimBlueprintGeneratedClass ABP_FacilityTurret.ABP_FacilityTurret_C
// Size: 0x948 (Inherited: 0x2d0)
struct UABP_FacilityTurret_C : UFacilityTurretAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x308(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x330(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x358(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x380(0x28)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3a8(0x108)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4b0(0x20)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4d0(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x4f0(0x108)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x5f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x670(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x6a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x718(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x748(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x868(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x898(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_FacilityTurret(int32_t EntryPoint);
};

