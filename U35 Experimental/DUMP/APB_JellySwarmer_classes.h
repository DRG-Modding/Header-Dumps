// AnimBlueprintGeneratedClass APB_JellySwarmer.APB_JellySwarmer_C
// Size: 0x560 (Inherited: 0x2c0)
struct UAPB_JellySwarmer_C : UJellyFishAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void BlueprintUpdateAnimation(float DeltaTimeX);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_APB_JellySwarmer(int32_t EntryPoint);
};

