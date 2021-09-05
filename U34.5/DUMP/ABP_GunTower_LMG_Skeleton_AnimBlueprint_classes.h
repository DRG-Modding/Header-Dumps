// AnimBlueprintGeneratedClass ABP_GunTower_LMG_Skeleton_AnimBlueprint.ABP_GunTower_LMG_Skeleton_AnimBlueprint_C
// Size: 0xc18 (Inherited: 0x290)
struct UABP_GunTower_LMG_Skeleton_AnimBlueprint_C : UGunTowerModuleAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x298(0x108)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x3a0(0x20)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3c0(0x48)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x408(0x108)
	FAnimNode_Root AnimGraphNode_Root; // 0x510(0x30)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x540(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x560(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x668(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x688(0x20)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x6a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x6d0(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x6f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x770(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x818(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x848(0xb0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x8f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x920(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x948(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x9c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa68(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa98(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xb48(0xc8)
	float MaxAimYaw; // 0xc10(0x04)
	float MaxAimPitch; // 0xc14(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2F5B8FD14C70B219912417B56C99F4B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3C2D263449A3644B777F87B659FCBAD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_F4C555BB48539FD39673A89D07C2A337();
	void ExecuteUbergraph_ABP_GunTower_LMG_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

