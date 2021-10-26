// AnimBlueprintGeneratedClass ABP_CactusShooterPlant.ABP_CactusShooterPlant_C
// Size: 0x4f9 (Inherited: 0x270)
struct UABP_CactusShooterPlant_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) bool IsIdle; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void BlueprintBeginPlay();
	UFUNCTION(BlueprintCallable) void OnChangeState(bool IsIdle);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_CactusShooterPlant(int32_t EntryPoint);
};

