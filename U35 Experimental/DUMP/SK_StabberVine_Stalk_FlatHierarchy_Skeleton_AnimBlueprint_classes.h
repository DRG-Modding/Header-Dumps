// AnimBlueprintGeneratedClass SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint.SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_C
// Size: 0x15e0 (Inherited: 0xc30)
struct USK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint_C : UStabberVineAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ModifyBone AnimGraphNode_ModifyBone; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_SK_StabberVine_Stalk_FlatHierarchy_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

