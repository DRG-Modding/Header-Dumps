// AnimBlueprintGeneratedClass ABP_GliderBeast_AnimBlueprint.ABP_GliderBeast_AnimBlueprint_C
// Size: 0x1000 (Inherited: 0x2f0)
struct UABP_GliderBeast_AnimBlueprint_C : UGliderBeastAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RigidBody AnimGraphNode_RigidBody; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_BC0D72494C9ED072EE15DA86E9DF88FB();
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_SequencePlayer_3D6ADBC64EF0B34D6873389D64254D68();
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint_AnimGraphNode_TwoWayBlend_7D1547C14C3333D452753297E1616686();
	UFUNCTION(BlueprintCallable) void BlueprintBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_GliderBeast_AnimBlueprint(int32_t EntryPoint);
};

