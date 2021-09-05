// AnimBlueprintGeneratedClass ABP_DrillDozer.ABP_DrillDozer_C
// Size: 0x192c (Inherited: 0x270)
struct UABP_DrillDozer_C : UEscortMuleAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x2a8(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x3b0(0x108)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x4b8(0x20)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x4d8(0x108)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x5e0(0x108)
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x6e8(0xc0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x7a8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x7d0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x7f8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x820(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x848(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x8c0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x8f0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x968(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x998(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0xa10(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xa40(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0xab8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xae8(0xb0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0xb98(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0xbc0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0xbe8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xc10(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xc38(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0xcb0(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xce0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xd58(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xd88(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xe00(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xe30(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xea8(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0xed8(0xb0)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xf88(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xfb0(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xfd8(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1000(0x28)
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1028(0x28)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1050(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x10c8(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x10f8(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1170(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x11a0(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1218(0x30)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1248(0x78)
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x12c0(0x30)
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x12f0(0xb0)
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x13a0(0xc8)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1468(0xa0)
	FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x1508(0x18)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1520(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1598(0x48)
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x15e0(0x18)
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x15f8(0x10)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1608(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x16a8(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1720(0x78)
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1798(0x108)
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x18a0(0x20)
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x18c0(0x20)
	float DeltaTimeX; // 0x18e0(0x04)
	AEscortMule* MULE; // 0x18e8(0x08)
	float RSuspensionAlpha; // 0x18f0(0x04)
	FRotator RTrackRotation; // 0x18f4(0x0c)
	float LSuspensionAlpha; // 0x1900(0x04)
	FRotator LTrackRotation; // 0x1904(0x0c)
	float TraceDistance; // 0x1910(0x04)
	TArray<AActor*> TraceIgnoreActors; // 0x1918(0x10)
	float HammerPosition; // 0x1928(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void ApplyForces(float SuspensionAlpha, FRotator TrackRotator, float TargetDist, FRotator TargetRotation);
	void FindHits(FName FrontSocket, FName CenterSocket, FName BackSocket, int32_t NumberOfHits, float ZDist, FRotator Rotation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrillDozer_AnimGraphNode_ModifyBone_A7305A8D44B2DD313A90ECAD52DB6615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrillDozer_AnimGraphNode_ModifyBone_C91695E7487CC9A6BB4EA5BD0943F9BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrillDozer_AnimGraphNode_ModifyBone_13FD043546687779160898A8F65A71D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrillDozer_AnimGraphNode_ModifyBone_4EC2EAF14F6A06C6251C51AC7BA1E0AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrillDozer_AnimGraphNode_ModifyBone_644B4D324C3487FB1FFBDDB7E60E99BF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void LookAround();
	void StartTimer();
	void OnTookDamage(UHealthComponent* Health);
	void DamageTaken(float amount);
	void ExecuteUbergraph_ABP_DrillDozer(int32_t EntryPoint);
};

