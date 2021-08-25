// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0x1090 (Inherited: 0xe10)
struct ABP_PlayerCharacter_C : APlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe10(0x08)
	struct UBP_EnemyControlState_C* BP_EnemyControlState; // 0xe18(0x08)
	struct UPointLightComponent* FilmFaceLight; // 0xe20(0x08)
	struct UBP_PushingState_C* BP_PushingState; // 0xe28(0x08)
	struct UBP_TrackMovementState_C* BP_TrackMovementState; // 0xe30(0x08)
	struct UBP_SelfiePoint_C* SelfieSpringArmPoint; // 0xe38(0x08)
	struct USpringArmComponent* SelfieSpringArm; // 0xe40(0x08)
	struct USceneComponent* Fixed_Selfie_Points; // 0xe48(0x08)
	struct USceneComponent* SelfieCameraSetup; // 0xe50(0x08)
	struct UShieldBoostUsable* ShieldBoostUsable; // 0xe58(0x08)
	struct UBP_AudioControl_C* BP_AudioControl; // 0xe60(0x08)
	struct UBP_AttachedState_C* BP_AttachedState; // 0xe68(0x08)
	struct UBP_PilotingState_C* BP_PilotingState; // 0xe70(0x08)
	struct UBP_DeadState_C* BP_DeadState; // 0xe78(0x08)
	struct UBP_PhotographyState_C* BP_PhotographyState; // 0xe80(0x08)
	struct UBP_PassedOut_C* BP_PassedOut; // 0xe88(0x08)
	struct UBP_IntoxicationComponent_C* BP_IntoxicationComponent; // 0xe90(0x08)
	struct UBP_FrozenState_C* BP_FrozenState; // 0xe98(0x08)
	struct UStaticMeshComponent* ScannerArrow; // 0xea0(0x08)
	struct UBP_GrabbedState_C* BP_GrabbedState; // 0xea8(0x08)
	struct UPointLightComponent* PointLight; // 0xeb0(0x08)
	struct USpotLightComponent* SpotLight; // 0xeb8(0x08)
	struct UPointLightComponent* FP_PointLight_CloseShine_Ground; // 0xec0(0x08)
	struct USceneComponent* ShoulderCamLocation; // 0xec8(0x08)
	struct USpringArmComponent* ShoulderCamArm; // 0xed0(0x08)
	struct UPointLightComponent* DebugPointLight; // 0xed8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint6; // 0xee0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint5; // 0xee8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint4; // 0xef0(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint3; // 0xef8(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint2; // 0xf00(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint1; // 0xf08(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint; // 0xf10(0x08)
	struct UBP_SelfiePoint_C* BP_SelfiePoint8; // 0xf18(0x08)
	struct UStaticMeshComponent* DropShadow; // 0xf20(0x08)
	struct UFragileDebrisCleaner* FragileDebrisCleanerCore; // 0xf28(0x08)
	struct UFragileDebrisCleaner* FragileDebrisCleanerFeet; // 0xf30(0x08)
	struct UParticleSystemComponent* P_Ambient_Dust; // 0xf38(0x08)
	struct UBP_FlyingState_C* BP_FlyingState; // 0xf40(0x08)
	struct USpotLightComponent* TP_SpotLight_shadow; // 0xf48(0x08)
	struct USceneComponent* TP_SpotLight; // 0xf50(0x08)
	struct USpotLightComponent* FP_SpotLight_Light; // 0xf58(0x08)
	struct USceneComponent* FP_SpotLight; // 0xf60(0x08)
	struct UPointLightComponent* EmergencyLight; // 0xf68(0x08)
	struct UPointLightComponent* FP_PointLight_CloseShine; // 0xf70(0x08)
	struct UBP_NoMovementState_C* BP_NoMovementState; // 0xf78(0x08)
	struct UBP_ZipLineState_C* BP_ZipLineState; // 0xf80(0x08)
	struct UBP_UsingState_C* BP_UsingState; // 0xf88(0x08)
	struct UAudioComponent* ShieldRegenAudio; // 0xf90(0x08)
	struct URadarPointComponent* radarPoint; // 0xf98(0x08)
	struct UBP_ParalyzedState_C* BP_ParalyzedState; // 0xfa0(0x08)
	struct UPointLightComponent* PointLight_SpotCloseShine; // 0xfa8(0x08)
	struct UBP_DownedState_C* BP_DownedState; // 0xfb0(0x08)
	struct UBP_FallingState_C* BP_FallingState; // 0xfb8(0x08)
	struct UBP_WalkingState_C* BP_WalkingState; // 0xfc0(0x08)
	struct UStaticMeshComponent* SM_LightCone; // 0xfc8(0x08)
	struct UStaticMeshComponent* Mesh_Lamp_rim; // 0xfd0(0x08)
	struct UStaticMeshComponent* Mesh_Lamp; // 0xfd8(0x08)
	struct USphereComponent* UsableCollision; // 0xfe0(0x08)
	float Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889; // 0xfe8(0x04)
	char Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889; // 0xfec(0x01)
	char UnknownData_FED[0x3]; // 0xfed(0x03)
	struct UTimelineComponent* Emergency Timeline; // 0xff0(0x08)
	float ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61; // 0xff8(0x04)
	float ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61; // 0xffc(0x04)
	char ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61; // 0x1000(0x01)
	char UnknownData_1001[0x7]; // 0x1001(0x07)
	struct UTimelineComponent* ShieldRegenTimeline; // 0x1008(0x08)
	float ShieldRegenTime; // 0x1010(0x04)
	char UnknownData_1014[0x4]; // 0x1014(0x04)
	struct UTextureRenderTarget2D* RenderTarget; // 0x1018(0x08)
	float LastDamageTime; // 0x1020(0x04)
	char UnknownData_1024[0x4]; // 0x1024(0x04)
	struct TArray<struct UBP_SelfiePoint_C*> FixedSelfiePointList; // 0x1028(0x10)
	struct UBP_SelfiePoint_C* ActiveSelfiePoint; // 0x1038(0x08)
	bool WasHUDVisible; // 0x1040(0x01)
	char UnknownData_1041[0x7]; // 0x1041(0x07)
	struct UReverbEffect* PreDownReverb; // 0x1048(0x08)
	struct FScaledEffect MixerConfetti; // 0x1050(0x10)
	struct UParticleSystem* InstantReviveParticles; // 0x1060(0x08)
	struct USoundBase* InstantReviveCue; // 0x1068(0x08)
	bool LeftShiftPressed; // 0x1070(0x01)
	bool LeftCtrPressed; // 0x1071(0x01)
	char UnknownData_1072[0x6]; // 0x1072(0x06)
	struct FTimerHandle SelfieZoomTimer; // 0x1078(0x08)
	struct FTimerHandle SelfieMoveRightTimer; // 0x1080(0x08)
	struct FTimerHandle SelfieMoveUpTimer; // 0x1088(0x08)

	void GotoNextSelfiePoint(bool ForceExitSelfieMode); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint
	void SetActiveSelfiePoint(struct UBP_SelfiePoint_C* InSelfiePoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint
	bool DamageCausesReaction(struct UDamageClass* DamageClass); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction
	struct USceneComponent* GetDownCameraAttachPoint(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
	struct USceneComponent* GetDownCameraRotationPoint(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
	void ChromaEffect(enum class EFSDChromaEffect effect); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
	void CharacterAudioThrottled(struct UDialogDataAsset* Shout); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
	void UpdateHeadLight(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
	void ShieldRegenTimeline__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
	void ShieldRegenTimeline__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
	void Emergency Timeline__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
	void Emergency Timeline__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
	void InpActEvt_P_K2Node_InputKeyEvent_17(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_14(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_13(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13
	void InpActEvt_PageDown_K2Node_InputKeyEvent_12(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
	void InpActEvt_PageDown_K2Node_InputKeyEvent_11(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
	void InpActEvt_PageUp_K2Node_InputKeyEvent_10(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
	void InpActEvt_PageUp_K2Node_InputKeyEvent_9(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
	void InpActEvt_Home_K2Node_InputKeyEvent_8(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8
	void InpActEvt_Home_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7
	void InpActEvt_End_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6
	void InpActEvt_End_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5
	void InpActEvt_Insert_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
	void InpActEvt_Insert_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3
	void InpActEvt_Delete_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2
	void InpActEvt_Delete_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
	void BP_OnControllerReady(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
	void StopRegenAudio(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
	void BP_OnUpdateMeshes(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
	void CharacterState Changed(enum class ECharacterState NewState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	void Init Selfie Cam(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
	void SetDustVisible(bool Visible); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
	void ReceiveOnHeadlightOn(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
	void ResetSaveGameIDInEditor(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
	void On Temporary Buff Changed(struct UTemporaryBuff* buff, struct APlayerCharacter* AffectedPlayer); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
	void MixerClientSpawnConfettii(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii
	void MixerServerSpawnConfettii(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii
	void MixerSpawnConfetti(struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti
	void PrepareForEndScreen(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
	void Activate Temporary buff on server(struct UTemporaryBuff* buff, struct APlayerCharacter* Player); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Activate Temporary buff on server
	void Receive_ShowFieldMedicInstantReviveEffects(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
	void SelfieZoom(float InDelta); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom
	void TickSelfieZoom(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom
	void SelfieMoveUp(float InDirection); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp
	void TickSelfieMoveUp(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp
	void SelfieMoveRight(float InDirection); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight
	void TickSelfieMoveRight(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
};

