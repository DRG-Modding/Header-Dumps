// AnimBlueprintGeneratedClass ABP_Spider_Boss_Heavy.ABP_Spider_Boss_Heavy_C
// Size: 0x1079 (Inherited: 0x410)
struct UABP_Spider_Boss_Heavy_C : USpiderAnimInstance {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Root AnimGraphNode_Root; 
	UPROPERTY(BlueprintReadWrite) float __CustomProperty_MeshScale_E54DA08D4BFB3BD45690D29CEB143D0E; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_Slot AnimGraphNode_Slot; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateResult AnimGraphNode_StateResult; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	UPROPERTY(BlueprintReadWrite) FAnimNode_RefPose AnimGraphNode_LocalRefPose; 
	UPROPERTY(BlueprintReadWrite) bool ArmorOpen; 
	UPROPERTY(BlueprintReadWrite) bool WeakSpot_L_Open; 
	UPROPERTY(BlueprintReadWrite) bool WeakSpot_R_Open; 
	UPROPERTY(BlueprintReadWrite) bool WeakSpot_C_Open; 
	UPROPERTY(BlueprintReadWrite) UAnimSequenceBase* DeathAnimation; 
	UPROPERTY(BlueprintReadWrite) bool PlayDeath; 

	UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink AnimGraph);
	UFUNCTION(BlueprintCallable) void SetDeathAnimation(UAnimSequenceBase* Animation);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ABP_Spider_Boss_Heavy(int32_t EntryPoint);
};

