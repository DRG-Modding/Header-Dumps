// AnimBlueprintGeneratedClass ABP_Harvester.ABP_Harvester_C
// Size: 0x570 (Inherited: 0x2f0)
struct UABP_Harvester_C : USimpleMovingEnemyAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HarvestingSound; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void AnimNotify_EnterAlive();
	UFUNCTION(BlueprintCallable) void AnimNotify_ExitAlive();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Harvester(int32_t EntryPoint);
};

