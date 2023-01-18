#ifndef UE4SS_SDK_BP_PlayerCharacter_HPP
#define UE4SS_SDK_BP_PlayerCharacter_HPP

class ABP_PlayerCharacter_C : public APlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Lamp;
    class UBP_InfectedState_C* BP_InfectedState;
    class USingleUsableComponent* BeastMasterUsable;
    class UBP_EnemyControlState_C* BP_EnemyControlState;
    class UPointLightComponent* FilmFaceLight;
    class UBP_PushingState_C* BP_PushingState;
    class UBP_TrackMovementState_C* BP_TrackMovementState;
    class UBP_SelfiePoint_C* SelfieSpringArmPoint;
    class USpringArmComponent* SelfieSpringArm;
    class USceneComponent* Fixed_Selfie_Points;
    class USceneComponent* SelfieCameraSetup;
    class UShieldBoostUsable* ShieldBoostUsable;
    class UBP_AudioControl_LowHealth_C* BP_AudioControl;
    class UBP_AttachedState_C* BP_AttachedState;
    class UBP_PilotingState_C* BP_PilotingState;
    class UBP_DeadState_C* BP_DeadState;
    class UBP_PhotographyState_C* BP_PhotographyState;
    class UBP_PassedOut_C* BP_PassedOut;
    class UBP_IntoxicationComponent_C* BP_IntoxicationComponent;
    class UBP_FrozenState_C* BP_FrozenState;
    class UStaticMeshComponent* ScannerArrow;
    class UBP_GrabbedState_C* BP_GrabbedState;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UPointLightComponent* FP_PointLight_CloseShine_Ground;
    class USceneComponent* ShoulderCamLocation;
    class USpringArmComponent* ShoulderCamArm;
    class UPointLightComponent* DebugPointLight;
    class UBP_SelfiePoint_C* BP_SelfiePoint6;
    class UBP_SelfiePoint_C* BP_SelfiePoint5;
    class UBP_SelfiePoint_C* BP_SelfiePoint4;
    class UBP_SelfiePoint_C* BP_SelfiePoint3;
    class UBP_SelfiePoint_C* BP_SelfiePoint2;
    class UBP_SelfiePoint_C* BP_SelfiePoint1;
    class UBP_SelfiePoint_C* BP_SelfiePoint;
    class UBP_SelfiePoint_C* BP_SelfiePoint8;
    class UStaticMeshComponent* DropShadow;
    class UFragileDebrisCleaner* FragileDebrisCleanerCore;
    class UFragileDebrisCleaner* FragileDebrisCleanerFeet;
    class UParticleSystemComponent* P_Ambient_Dust;
    class UBP_FlyingState_C* BP_FlyingState;
    class USpotLightComponent* TP_SpotLight_shadow;
    class USceneComponent* TP_SpotLight;
    class USpotLightComponent* FP_SpotLight_Light;
    class USceneComponent* FP_SpotLight;
    class UPointLightComponent* EmergencyLight;
    class UPointLightComponent* FP_PointLight_CloseShine;
    class UBP_NoMovementState_C* BP_NoMovementState;
    class UBP_ZipLineState_C* BP_ZipLineState;
    class UBP_UsingState_C* BP_UsingState;
    class UAudioComponent* ShieldRegenAudio;
    class URadarPointComponent* radarPoint;
    class UBP_ParalyzedState_C* BP_ParalyzedState;
    class UPointLightComponent* PointLight_SpotCloseShine;
    class UBP_DownedState_C* BP_DownedState;
    class UBP_FallingState_C* BP_FallingState;
    class UBP_WalkingState_C* BP_WalkingState;
    class UStaticMeshComponent* SM_LightCone;
    class UStaticMeshComponent* Mesh_Lamp_rim;
    class USphereComponent* UsableCollision;
    float Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889;
    TEnumAsByte<ETimelineDirection::Type> Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889;
    class UTimelineComponent* Emergency Timeline;
    float ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61;
    float ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61;
    TEnumAsByte<ETimelineDirection::Type> ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61;
    class UTimelineComponent* ShieldRegenTimeline;
    float ShieldRegenTime;
    float LastDamageTime;
    TArray<class UBP_SelfiePoint_C*> FixedSelfiePointList;
    class UBP_SelfiePoint_C* ActiveSelfiePoint;
    bool WasHUDVisible;
    class UReverbEffect* PreDownReverb;
    FScaledEffect MixerConfetti;
    class UParticleSystem* InstantReviveParticles;
    class USoundBase* InstantReviveCue;
    bool LeftShiftPressed;
    bool LeftCtrPressed;
    FTimerHandle SelfieZoomTimer;
    FTimerHandle SelfieMoveRightTimer;
    FTimerHandle SelfieMoveUpTimer;

    class UUsableComponent* GetBeastMasterUsableComponent();
    void GotoNextSelfiePoint(bool ForceExitSelfieMode);
    void SetActiveSelfiePoint(class UBP_SelfiePoint_C* InSelfiePoint);
    bool DamageCausesReaction(class UDamageClass* DamageClass);
    class USceneComponent* GetDownCameraAttachPoint();
    class USceneComponent* GetDownCameraRotationPoint();
    void ChromaEffect(uint8 Effect);
    void CharacterAudioThrottled(class UDialogDataAsset* Shout);
    void UpdateHeadLight();
    void ShieldRegenTimeline__FinishedFunc();
    void ShieldRegenTimeline__UpdateFunc();
    void Emergency Timeline__FinishedFunc();
    void Emergency Timeline__UpdateFunc();
    void InpActEvt_P_K2Node_InputKeyEvent_16(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_15(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_PageDown_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_PageDown_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_PageUp_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_PageUp_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Home_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Home_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_End_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_End_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Insert_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Insert_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Delete_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Delete_K2Node_InputKeyEvent_0(FKey Key);
    void BP_OnControllerReady();
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount);
    void StopRegenAudio();
    void BP_OnUpdateMeshes();
    void CharacterState Changed(ECharacterState NewState);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void Init Selfie Cam();
    void SetDustVisible(bool Visible);
    void ReceiveOnHeadlightOn();
    void ResetSaveGameIDInEditor();
    void On Temporary Buff Changed(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void MixerClientSpawnConfettii(FVector Location, FRotator Rotation);
    void MixerServerSpawnConfettii(FVector Location, FRotator Rotation);
    void MixerSpawnConfetti(FVector Location, FRotator Rotation);
    void PrepareForEndScreen();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void Activate Temporary buff on server(class UTemporaryBuff* buff, class APlayerCharacter* Player);
    void Receive_ShowFieldMedicInstantReviveEffects();
    void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
    void SelfieZoom(float InDelta);
    void TickSelfieZoom();
    void SelfieMoveUp(float InDirection);
    void TickSelfieMoveUp();
    void SelfieMoveRight(float InDirection);
    void TickSelfieMoveRight();
    void ReceivePossessed(class AController* NewController);
    void Cheat_Medical();
    void ExecuteUbergraph_BP_PlayerCharacter(int32 EntryPoint);
};

#endif
