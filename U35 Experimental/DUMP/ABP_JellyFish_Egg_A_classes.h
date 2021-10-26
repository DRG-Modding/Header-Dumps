// AnimBlueprintGeneratedClass ABP_JellyFish_Egg_A.ABP_JellyFish_Egg_A_C
// Size: 0x8f0 (Inherited: 0x270)
struct UABP_JellyFish_Egg_A_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RigidBody AnimGraphNode_RigidBody; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_JellyFish_Egg_A(int32_t EntryPoint);
};

