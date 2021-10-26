// AnimBlueprintGeneratedClass ABP_EyeBase.ABP_EyeBase_C
// Size: 0x481 (Inherited: 0x270)
struct UABP_EyeBase_C : UAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) bool Closed; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void CustomEvent_1(bool IsClosed);
	UFUNCTION(BlueprintCallable) void BlueprintInitializeAnimation();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_EyeBase(int32_t EntryPoint);
};

