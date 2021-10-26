// AnimBlueprintGeneratedClass ABP_Grabber.ABP_Grabber_C
// Size: 0x708 (Inherited: 0x2f0)
struct UABP_Grabber_C : UFlyingLifterAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void SpawnIdleSound();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Grabber(int32_t EntryPoint);
};

