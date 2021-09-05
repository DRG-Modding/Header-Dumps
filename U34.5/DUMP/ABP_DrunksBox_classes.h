// AnimBlueprintGeneratedClass ABP_DrunksBox.ABP_DrunksBox_C
// Size: 0x741 (Inherited: 0x270)
struct UABP_DrunksBox_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x370(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3e8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x418(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x490(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4c0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x538(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x568(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5e0(0x30)
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x610(0x48)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x658(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x688(0xb0)
	ABP_DrinksBox_C* DrinkBox; // 0x738(0x08)
	bool State; // 0x740(0x01)

	void AnimGraph(FPoseLink AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60();
	void BlueprintBeginPlay();
	void OnStateChanged_Event_1(char State);
	void ExecuteUbergraph_ABP_DrunksBox(int32_t EntryPoint);
};

