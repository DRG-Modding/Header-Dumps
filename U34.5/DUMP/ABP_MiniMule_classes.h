// AnimBlueprintGeneratedClass ABP_MiniMule.ABP_MiniMule_C
// Size: 0xb5c (Inherited: 0x2f0)
struct UABP_MiniMule_C : USimpleMovingEnemyAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x328(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x350(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x378(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3a0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c8(0x28)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x3f0(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x4f8(0x108)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x600(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x620(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x728(0x20)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x748(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x7f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x868(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x898(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x910(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x940(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x9b8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9e8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa60(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa90(0xb0)
	ABP_MiniMule_Salvage_C* MULE; // 0xb40(0x08)
	float LegTwist; // 0xb48(0x04)
	bool IsDown; // 0xb4c(0x01)
	bool IsRepaired; // 0xb4d(0x01)
	FRotator Progress; // 0xb50(0x0c)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_MiniMule(int32_t EntryPoint);
};

