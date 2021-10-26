// AnimBlueprintGeneratedClass ABP_RandomFire_Module.ABP_RandomFire_Module_C
// Size: 0xbe0 (Inherited: 0x2a0)
struct UABP_RandomFire_Module_C : URandomFireModuleAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RandomFire_Module_AnimGraphNode_ModifyBone_CCA501D54532588AB65CB98BC544A58D();
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RandomFire_Module_AnimGraphNode_ModifyBone_4F5C9B4F48CB110F446120B9A1CBAF86();
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RandomFire_Module_AnimGraphNode_ModifyBone_4B2AEB804CBD13221B97C881385DA39C();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_RandomFire_Module(int32_t EntryPoint);
};

