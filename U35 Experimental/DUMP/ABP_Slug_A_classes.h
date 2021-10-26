// AnimBlueprintGeneratedClass ABP_Slug_A.ABP_Slug_A_C
// Size: 0xb3c (Inherited: 0x2c0)
struct UABP_Slug_A_C : UEnemyAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) int32_t Picked; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Slug_A_AnimGraphNode_TransitionResult_294DDAB341123081E8C9C3A03F396AFC();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Slug_A(int32_t EntryPoint);
};

