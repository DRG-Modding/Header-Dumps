// AnimBlueprintGeneratedClass ABP_LaserStarter.ABP_LaserStarter_C
// Size: 0x740 (Inherited: 0x270)
struct UABP_LaserStarter_C : UEventStarterAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_LaserStarter(int32_t EntryPoint);
};

