// AnimBlueprintGeneratedClass ABP_Spider_Boss_Twin.ABP_Spider_Boss_Twin_C
// Size: 0x7a8 (Inherited: 0x410)
struct UABP_Spider_Boss_Twin_C : USpiderAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) float __CustomProperty_MeshScale_2736D6F143DF40E6119A3C80493609FF; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RefPose AnimGraphNode_LocalRefPose; 
	UPROPERTY(BlueprintReadWrite) bool PlayDeath; 
	UPROPERTY(BlueprintReadWrite) UAnimSequenceBase* DeathAnimation; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void SetDeathAnimation(UAnimSequenceBase* Animation);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Spider_Boss_Twin(int32_t EntryPoint);
};

