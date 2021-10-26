// AnimBlueprintGeneratedClass ABP_GooCannon_B_Skeleton_AnimBlueprint.ABP_GooCannon_B_Skeleton_AnimBlueprint_C
// Size: 0xc78 (Inherited: 0x280)
struct UABP_GooCannon_B_Skeleton_AnimBlueprint_C : UGooGunAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2b8(0x48)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x300(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x3c8(0x78)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x440(0xc8)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x508(0x48)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x550(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x618(0x78)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x690(0xc8)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x758(0x78)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x7d0(0x48)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x818(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x840(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x868(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x890(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8b8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x930(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x960(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x9a8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9d8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xa50(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xa80(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xac8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xaf8(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xba8(0xc8)
	UAnimMontage* BarrelBoostMontage; // 0xc70(0x08)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B74B9364BCD8EE1EE5CF1B04A9D384F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E259F76345A0B619B66F21BD90BAE003();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint_AnimGraphNode_ApplyAdditive_7E5D13D445D959147B41D991B0367056();
	void AnimNotify_BarrelBoostBegin();
	void AnimNotify_BarrelBoostEnd();
	void BlueprintBeginPlay();
	void OnMontageEnded_Event_1(UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_ABP_GooCannon_B_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

