// AnimBlueprintGeneratedClass ABP_DestoyedModule.ABP_DestoyedModule_C
// Size: 0x428 (Inherited: 0x290)
struct UABP_DestoyedModule_C : UGunTowerModuleAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RefPose AnimGraphNode_LocalRefPose; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DestoyedModule_AnimGraphNode_ModifyBone_56305503412A48937F0CB9A968487685();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_DestoyedModule(int32_t EntryPoint);
};

