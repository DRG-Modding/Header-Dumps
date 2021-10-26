// AnimBlueprintGeneratedClass ABP_HydraWeed_RegenPod.ABP_HydraWeed_RegenPod_C
// Size: 0x2a8 (Inherited: 0x270)
struct UABP_HydraWeed_RegenPod_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_HydraWeed_RegenPod(int32_t EntryPoint);
};

