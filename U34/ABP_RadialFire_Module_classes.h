// AnimBlueprintGeneratedClass ABP_RadialFire_Module.ABP_RadialFire_Module_C
// Size: 0x978 (Inherited: 0x290)
struct UABP_RadialFire_Module_C : UGunTowerModuleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x298(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2b8(0x108)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3c0(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3f0(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x438(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x460(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4d8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x508(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x580(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x5b0(0xb0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x660(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x688(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6b0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x728(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x758(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7d0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x800(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x8b0(0xc8)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_RadialFire_Module.ABP_RadialFire_Module_C.AnimGraph
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RadialFire_Module_AnimGraphNode_ModifyBone_344C01BF492B33A3033AF2859B0C5F1F(); // Function ABP_RadialFire_Module.ABP_RadialFire_Module_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RadialFire_Module_AnimGraphNode_ModifyBone_344C01BF492B33A3033AF2859B0C5F1F
	void ExecuteUbergraph_ABP_RadialFire_Module(int32_t EntryPoint); // Function ABP_RadialFire_Module.ABP_RadialFire_Module_C.ExecuteUbergraph_ABP_RadialFire_Module
};

