// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0x1090 (Inherited: 0xe10)
struct ABP_PlayerCharacter_C : APlayerCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe10(0x08)
	UBP_EnemyControlState_C* BP_EnemyControlState; // 0xe18(0x08)
	UPointLightComponent* FilmFaceLight; // 0xe20(0x08)
	UBP_PushingState_C* BP_PushingState; // 0xe28(0x08)
	UBP_TrackMovementState_C* BP_TrackMovementState; // 0xe30(0x08)
	UBP_SelfiePoint_C* SelfieSpringArmPoint; // 0xe38(0x08)
	USpringArmComponent* SelfieSpringArm; // 0xe40(0x08)
	USceneComponent* Fixed_Selfie_Points; // 0xe48(0x08)
	USceneComponent* SelfieCameraSetup; // 0xe50(0x08)
	UShieldBoostUsable* ShieldBoostUsable; // 0xe58(0x08)
	UBP_AudioControl_C* BP_AudioControl; // 0xe60(0x08)
	UBP_AttachedState_C* BP_AttachedState; // 0xe68(0x08)
	UBP_PilotingState_C* BP_PilotingState; // 0xe70(0x08)
	UBP_DeadState_C* BP_DeadState; // 0xe78(0x08)
	UBP_PhotographyState_C* BP_PhotographyState; // 0xe80(0x08)
	UBP_PassedOut_C* BP_PassedOut; // 0xe88(0x08)
	UBP_IntoxicationComponent_C* BP_IntoxicationComponent; // 0xe90(0x08)
	UBP_FrozenState_C* BP_FrozenState; // 0xe98(0x08)
	UStaticMeshComponent* ScannerArrow; // 0xea0(0x08)
	UBP_GrabbedState_C* BP_GrabbedState; // 0xea8(0x08)
	UPointLightComponent* PointLight; // 0xeb0(0x08)
	USpotLightComponent* SpotLight; // 0xeb8(0x08)
	UPointLightComponent* FP_PointLight_CloseShine_Ground; // 0xec0(0x08)
	USceneComponent* ShoulderCamLocation; // 0xec8(0x08)
	USpringArmComponent* ShoulderCamArm; // 0xed0(0x08)
	UPointLightComponent* DebugPointLight; // 0xed8(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint6; // 0xee0(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint5; // 0xee8(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint4; // 0xef0(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint3; // 0xef8(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint2; // 0xf00(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint1; // 0xf08(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint; // 0xf10(0x08)
	UBP_SelfiePoint_C* BP_SelfiePoint8; // 0xf18(0x08)
	UStaticMeshComponent* DropShadow; // 0xf20(0x08)
	UFragileDebrisCleaner* FragileDebrisCleanerCore; // 0xf28(0x08)
	UFragileDebrisCleaner* FragileDebrisCleanerFeet; // 0xf30(0x08)
	UParticleSystemComponent* P_Ambient_Dust; // 0xf38(0x08)
	UBP_FlyingState_C* BP_FlyingState; // 0xf40(0x08)
	USpotLightComponent* TP_SpotLight_shadow; // 0xf48(0x08)
	USceneComponent* TP_SpotLight; // 0xf50(0x08)
	USpotLightComponent* FP_SpotLight_Light; // 0xf58(0x08)
	USceneComponent* FP_SpotLight; // 0xf60(0x08)
	UPointLightComponent* EmergencyLight; // 0xf68(0x08)
	UPointLightComponent* FP_PointLight_CloseShine; // 0xf70(0x08)
	UBP_NoMovementState_C* BP_NoMovementState; // 0xf78(0x08)
	UBP_ZipLineState_C* BP_ZipLineState; // 0xf80(0x08)
	UBP_UsingState_C* BP_UsingState; // 0xf88(0x08)
	UAudioComponent* ShieldRegenAudio; // 0xf90(0x08)
	URadarPointComponent* radarPoint; // 0xf98(0x08)
	UBP_ParalyzedState_C* BP_ParalyzedState; // 0xfa0(0x08)
	UPointLightComponent* PointLight_SpotCloseShine; // 0xfa8(0x08)
	UBP_DownedState_C* BP_DownedState; // 0xfb0(0x08)
	UBP_FallingState_C* BP_FallingState; // 0xfb8(0x08)
	UBP_WalkingState_C* BP_WalkingState; // 0xfc0(0x08)
	UStaticMeshComponent* SM_LightCone; // 0xfc8(0x08)
	UStaticMeshComponent* Mesh_Lamp_rim; // 0xfd0(0x08)
	UStaticMeshComponent* Mesh_Lamp; // 0xfd8(0x08)
	USphereComponent* UsableCollision; // 0xfe0(0x08)
	float Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889; // 0xfe8(0x04)
	enum class ETimelineDirection Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889; // 0xfec(0x01)
	UTimelineComponent* Emergency Timeline; // 0xff0(0x08)
	float ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61; // 0xff8(0x04)
	float ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61; // 0xffc(0x04)
	enum class ETimelineDirection ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61; // 0x1000(0x01)
	UTimelineComponent* ShieldRegenTimeline; // 0x1008(0x08)
	float ShieldRegenTime; // 0x1010(0x04)
	UTextureRenderTarget2D* RenderTarget; // 0x1018(0x08)
	float LastDamageTime; // 0x1020(0x04)
	TArray<UBP_SelfiePoint_C*> FixedSelfiePointList; // 0x1028(0x10)
	UBP_SelfiePoint_C* ActiveSelfiePoint; // 0x1038(0x08)
	bool WasHUDVisible; // 0x1040(0x01)
	UReverbEffect* PreDownReverb; // 0x1048(0x08)
	FScaledEffect MixerConfetti; // 0x1050(0x10)
	UParticleSystem* InstantReviveParticles; // 0x1060(0x08)
	USoundBase* InstantReviveCue; // 0x1068(0x08)
	bool LeftShiftPressed; // 0x1070(0x01)
	bool LeftCtrPressed; // 0x1071(0x01)
	FTimerHandle SelfieZoomTimer; // 0x1078(0x08)
	FTimerHandle SelfieMoveRightTimer; // 0x1080(0x08)
	FTimerHandle SelfieMoveUpTimer; // 0x1088(0x08)

	void GotoNextSelfiePoint(bool ForceExitSelfieMode);
	void SetActiveSelfiePoint(UBP_SelfiePoint_C* InSelfiePoint);
	bool DamageCausesReaction(UDamageClass* DamageClass);
	USceneComponent* GetDownCameraAttachPoint();
	USceneComponent* GetDownCameraRotationPoint();
	void ChromaEffect(enum class EFSDChromaEffect effect);
	void CharacterAudioThrottled(UDialogDataAsset* Shout);
	void UpdateHeadLight();
	void ShieldRegenTimeline__FinishedFunc();
	void ShieldRegenTimeline__UpdateFunc();
	void Emergency Timeline__FinishedFunc();
	void Emergency Timeline__UpdateFunc();
	void InpActEvt_P_K2Node_InputKeyEvent_17(FKey Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16(FKey Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(FKey Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_14(FKey Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Home_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Home_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_End_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_End_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Insert_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Insert_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Delete_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Delete_K2Node_InputKeyEvent_1(FKey Key);
	void BP_OnControllerReady();
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float amount);
	void StopRegenAudio();
	void BP_OnUpdateMeshes();
	void CharacterState Changed(enum class ECharacterState NewState);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float amount);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount);
	void Init Selfie Cam();
	void SetDustVisible(bool Visible);
	void ReceiveOnHeadlightOn();
	void ResetSaveGameIDInEditor();
	void On Temporary Buff Changed(UTemporaryBuff* buff, APlayerCharacter* AffectedPlayer);
	void MixerClientSpawnConfettii(FVector Location, FRotator Rotation);
	void MixerServerSpawnConfettii(FVector Location, FRotator Rotation);
	void MixerSpawnConfetti(FVector Location, FRotator Rotation);
	void PrepareForEndScreen();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void Activate Temporary buff on server(UTemporaryBuff* buff, APlayerCharacter* Player);
	void Receive_ShowFieldMedicInstantReviveEffects();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void SelfieZoom(float InDelta);
	void TickSelfieZoom();
	void SelfieMoveUp(float InDirection);
	void TickSelfieMoveUp();
	void SelfieMoveRight(float InDirection);
	void TickSelfieMoveRight();
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);
};

