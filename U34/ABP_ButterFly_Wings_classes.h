// AnimBlueprintGeneratedClass ABP_ButterFly_Wings.ABP_ButterFly_Wings_C
// Size: 0xad1 (Inherited: 0x270)
struct UABP_ButterFly_Wings_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	char UnknownData_2A8[0x8]; // 0x2a8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2b0(0x590)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x840(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x860(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x880(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x8a8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8d0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x948(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x978(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9f0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa20(0xb0)
	bool IsFlying; // 0xad0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ButterFly_Wings.ABP_ButterFly_Wings_C.AnimGraph
	void SetFlying(bool SetFlying); // Function ABP_ButterFly_Wings.ABP_ButterFly_Wings_C.SetFlying
	void ExecuteUbergraph_ABP_ButterFly_Wings(int32_t EntryPoint); // Function ABP_ButterFly_Wings.ABP_ButterFly_Wings_C.ExecuteUbergraph_ABP_ButterFly_Wings
};

