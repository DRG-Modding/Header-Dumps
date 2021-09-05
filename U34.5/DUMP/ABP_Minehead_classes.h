// AnimBlueprintGeneratedClass ABP_Minehead.ABP_Minehead_C
// Size: 0xe68 (Inherited: 0x270)
struct UABP_Minehead_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x348(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x370(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x398(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3c0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3e8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x410(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x438(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x460(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x488(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x4b0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x528(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x558(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x5d0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x600(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x678(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x6a8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x720(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x750(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x7c8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x870(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x8a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x918(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x948(0xb0)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x9f8(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb00(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb20(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xb40(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xc48(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xd50(0x108)
	enum class Minehead_State MineheadState; // 0xe58(0x01)
	FRotator RollersRotation; // 0xe5c(0x0c)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_78A1628248B97F24D5CBE5B118E4D533();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_B1181FA440FA27BF6F5DA9821E82DA5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_B4329DC04A62B9781B0AB1ABAA19A8CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_821F98F54C7110D433237EB16D08B689();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_5DAFECCF45F88AF0D1FD56B267E22F9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_8F870DD44BA6475DA17BBD95DE5FD79D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_6461BC944DB6CAE4CD86BD9975FE4E5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_A974B6D84A59ABAC76AEF3A3DFA96A3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_BE7B4A3A4DB7984B7F8675A7BE9552A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_A186017A44B3CAF4F1C0BB9270058383();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_D36B466A4B2D9BB7B4519380C9A0A3F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minehead_AnimGraphNode_TransitionResult_CD6921CA484552E3ED954095989FAF66();
	void BlueprintInitializeAnimation();
	void MinheadStateChanged(enum class Minehead_State State);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Minehead(int32_t EntryPoint);
};

