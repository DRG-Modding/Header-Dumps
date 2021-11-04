// AnimBlueprintGeneratedClass ABP_Facility_TurretDrone.ABP_Facility_TurretDrone_C
// Size: 0x6c1 (Inherited: 0x2c0)
struct UABP_Facility_TurretDrone_C : UEnemyAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x370(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3e8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x418(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x490(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4c0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x538(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x568(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x5e0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x610(0xb0)
	bool CloseToGoal; // 0x6c0(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_ABP_Facility_TurretDrone(int32_t EntryPoint);
};

