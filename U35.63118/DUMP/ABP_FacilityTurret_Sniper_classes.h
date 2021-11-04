// AnimBlueprintGeneratedClass ABP_FacilityTurret_Sniper.ABP_FacilityTurret_Sniper_C
// Size: 0xb58 (Inherited: 0x2d0)
struct UABP_FacilityTurret_Sniper_C : UFacilityTurretAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x308(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x330(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x358(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x380(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3a8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x420(0x30)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x450(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x558(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x660(0x108)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x768(0x78)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7e0(0x20)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x800(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x820(0x108)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x928(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x958(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x9d0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa00(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa78(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xaa8(0xb0)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_2E8B42B149D78372FC80BAA51BA64487();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_D6F5E12347AE2C6D3286F1900ED2E829();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_9F92B89543D73B0A825D0D958C624B93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityTurret_Sniper_AnimGraphNode_ModifyBone_8351D46F43B989B3D40125B653D00257();
	void ExecuteUbergraph_ABP_FacilityTurret_Sniper(int32_t EntryPoint);
};

