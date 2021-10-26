// AnimBlueprintGeneratedClass ABP_ButterFly_Wings.ABP_ButterFly_Wings_C
// Size: 0xad1 (Inherited: 0x270)
struct UABP_ButterFly_Wings_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) bool IsFlying; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void SetFlying(bool SetFlying);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_ButterFly_Wings(int32_t EntryPoint);
};

