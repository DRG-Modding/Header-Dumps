// BlueprintGeneratedClass ENE_FacilityCaretaker.ENE_FacilityCaretaker_C
// Size: 0x658 (Inherited: 0x398)
struct AENE_FacilityCaretaker_C : ACaretaker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UPointLightComponent* PointLight8; // 0x3a0(0x08)
	USceneComponent* TopHatches; // 0x3a8(0x08)
	UPointLightComponent* PointLight7; // 0x3b0(0x08)
	USceneComponent* TurretHatchL; // 0x3b8(0x08)
	UPointLightComponent* PointLight6; // 0x3c0(0x08)
	USceneComponent* TurretHatchR; // 0x3c8(0x08)
	UPointLightComponent* PointLight5; // 0x3d0(0x08)
	USceneComponent* TurretHatchF; // 0x3d8(0x08)
	UPointLightComponent* PointLight4; // 0x3e0(0x08)
	USceneComponent* TurretHatchB; // 0x3e8(0x08)
	UStaticMeshComponent* SM_Ear_collider3; // 0x3f0(0x08)
	UStaticMeshComponent* SM_Ear_collider2; // 0x3f8(0x08)
	UStaticMeshComponent* SM_Ear_collider1; // 0x400(0x08)
	UStaticMeshComponent* SM_Ear_collider4; // 0x408(0x08)
	UStaticMeshComponent* SM_Caretaker_Collider; // 0x410(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x418(0x08)
	UBP_Caretaker_AoE_Attack_C* AoE_Attack; // 0x420(0x08)
	UBP_CaretakerShredderAction_C* ShredderAction; // 0x428(0x08)
	UNiagaraComponent* NS_Gravity_Effect; // 0x430(0x08)
	UStaticMeshComponent* PlayerCollisionTop; // 0x438(0x08)
	UStaticMeshComponent* PlayerCollisionBottom; // 0x440(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x448(0x08)
	UPointLightComponent* BossLight; // 0x450(0x08)
	UEnemyBufferComponent* EnemyBuffer; // 0x458(0x08)
	UHealthDamageTracker* StageDamageTracker; // 0x460(0x08)
	UDestructibleSubHealthComponent* WeakpointHealth_04; // 0x468(0x08)
	UDestructibleSubHealthComponent* WeakpointHealth_03; // 0x470(0x08)
	UDestructibleSubHealthComponent* WeakpointHealth_02; // 0x478(0x08)
	UDestructibleSubHealthComponent* WeakpointHealth_01; // 0x480(0x08)
	UCapsuleComponent* Weakpoint_04; // 0x488(0x08)
	UCapsuleComponent* Weakpoint_03; // 0x490(0x08)
	UCapsuleComponent* Weakpoint_02; // 0x498(0x08)
	UCapsuleComponent* Weakpoint_01; // 0x4a0(0x08)
	UPointLightComponent* PointLight; // 0x4a8(0x08)
	UPointLightComponent* PointLight3; // 0x4b0(0x08)
	UPointLightComponent* PointLight2; // 0x4b8(0x08)
	UPointLightComponent* PointLight1; // 0x4c0(0x08)
	UAudioComponent* FacilityBossEyeOpen_Cue; // 0x4c8(0x08)
	UBP_CaretakerDroneAction_UNUSED_C* droneAction; // 0x4d0(0x08)
	UBP_CaretakerMortarAction_C* MortarAction; // 0x4d8(0x08)
	UBP_CaretakerTurretAction_C* TurretAction; // 0x4e0(0x08)
	USpotLightComponent* SpotLight3; // 0x4e8(0x08)
	USpotLightComponent* SpotLight2; // 0x4f0(0x08)
	USpotLightComponent* SpotLight1; // 0x4f8(0x08)
	USpotLightComponent* SpotLight; // 0x500(0x08)
	UDamageComponent* EndExpolsionDamage; // 0x508(0x08)
	UStaticMeshComponent* SM_LightCone003; // 0x510(0x08)
	UStaticMeshComponent* SM_LightCone004; // 0x518(0x08)
	UStaticMeshComponent* SM_LightCone002; // 0x520(0x08)
	UStaticMeshComponent* SM_LightCone001; // 0x528(0x08)
	UOutlineComponent* outline; // 0x530(0x08)
	UEnemyComponent* enemy; // 0x538(0x08)
	float TopLight_Intensity_39A7A1AF482156613F7234B9DF15400A; // 0x540(0x04)
	enum class ETimelineDirection TopLight__Direction_39A7A1AF482156613F7234B9DF15400A; // 0x544(0x01)
	UTimelineComponent* TopLight; // 0x548(0x08)
	float HatchLights_Intensity_FCD392DB40C72D74165F7DA7BA20EA50; // 0x550(0x04)
	enum class ETimelineDirection HatchLights__Direction_FCD392DB40C72D74165F7DA7BA20EA50; // 0x554(0x01)
	UTimelineComponent* HatchLights; // 0x558(0x08)
	float Timeline_0_PointLight_1EE58BD34489027A6F9C488828BDFD2D; // 0x560(0x04)
	enum class ETimelineDirection Timeline_0__Direction_1EE58BD34489027A6F9C488828BDFD2D; // 0x564(0x01)
	UTimelineComponent* Timeline_1; // 0x568(0x08)
	float FadeEyeLights_PointLight_AE68C0994C370ED22D4F1E9A5F7F676B; // 0x570(0x04)
	enum class ETimelineDirection FadeEyeLights__Direction_AE68C0994C370ED22D4F1E9A5F7F676B; // 0x574(0x01)
	UTimelineComponent* FadeEyeLights; // 0x578(0x08)
	FMulticastInlineDelegate OnStageChangedEvent; // 0x580(0x10)
	bool Initialized; // 0x590(0x01)
	float OpenEyeLightIntensity; // 0x594(0x04)
	float ClosedEyeLightIntensity; // 0x598(0x04)
	float OpenEyePointLightIntensity; // 0x59c(0x04)
	TMap<UDestructibleSubHealthComponent*, UNiagaraComponent*> WeakpontParticles; // 0x5a0(0x50)
	TArray<int32_t> RandomIndicies; // 0x5f0(0x10)
	bool CanOpenEyes; // 0x600(0x01)
	bool Cheat_SkipWakup; // 0x601(0x01)
	TMap<UDestructibleSubHealthComponent*, int32_t> HealthToGlow; // 0x608(0x50)

	AActor* GetBossActor();
	UBossFightWidget* GetWidgetClass();
	bool IsStillValid();
	void Begin Opening Eyes();
	void DeactivateWeakpointParticle(UDestructibleSubHealthComponent* Key);
	void ActivateRandomAction(UCaretakerActionComponent* Output_Get);
	void GetRandomStageActions(TArray<UCaretakerActionComponent*> Array);
	void TurnOffWeakpointParticles();
	void GetFacility(ABP_MainFacility_DataVault_C* mainFacility);
	int32_t GetNumDeadWeakpoints();
	void ToggleWeakpoints(bool Active);
	void ToggleWeakpoint(UDestructibleSubHealthComponent* Health, bool Active);
	bool AreWeapointsDead();
	void GetEyeLights(USkeletalMeshComponent* eye, UStaticMeshComponent* LightCone, UMaterialInstanceDynamic* LightConeMaterial, USpotLightComponent* SpotLight, UPointLightComponent* PoiintLight);
	void GetWaveTimer(float BaseTime, float PerPlayerTime, float totalTime);
	void UserConstructionScript();
	void FadeEyeLights__FinishedFunc();
	void FadeEyeLights__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void HatchLights__FinishedFunc();
	void HatchLights__UpdateFunc();
	void TopLight__FinishedFunc();
	void TopLight__UpdateFunc();
	void OnNotifyEnd_71A60B5C44F91C6FC6CCF3AE4CA1C54C(FName NotifyName);
	void OnNotifyBegin_71A60B5C44F91C6FC6CCF3AE4CA1C54C(FName NotifyName);
	void OnInterrupted_71A60B5C44F91C6FC6CCF3AE4CA1C54C(FName NotifyName);
	void OnBlendOut_71A60B5C44F91C6FC6CCF3AE4CA1C54C(FName NotifyName);
	void OnCompleted_71A60B5C44F91C6FC6CCF3AE4CA1C54C(FName NotifyName);
	void OnNotifyEnd_F46CBEE74DCE50E0AA03D7BBC8E1F1CF(FName NotifyName);
	void OnNotifyBegin_F46CBEE74DCE50E0AA03D7BBC8E1F1CF(FName NotifyName);
	void OnInterrupted_F46CBEE74DCE50E0AA03D7BBC8E1F1CF(FName NotifyName);
	void OnBlendOut_F46CBEE74DCE50E0AA03D7BBC8E1F1CF(FName NotifyName);
	void OnCompleted_F46CBEE74DCE50E0AA03D7BBC8E1F1CF(FName NotifyName);
	void OnEyeOpened(USkeletalMeshComponent* eye);
	void OnEyeClosed(USkeletalMeshComponent* eye);
	void StageTransition();
	void CreateBossFIght();
	void BndEvt__Health_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void OnSecondStage();
	void OnThirdStage();
	void OnNewStage(int32_t stageIndex);
	void BndEvt__WeakpointHealth_01_K2Node_ComponentBoundEvent_0_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void BndEvt__WeakpointHealth_02_K2Node_ComponentBoundEvent_1_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void BndEvt__WeakpointHealth_03_K2Node_ComponentBoundEvent_2_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void BndEvt__WeakpointHealth_04_K2Node_ComponentBoundEvent_4_SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
	void OnFirstStage();
	void BndEvt__DamageTracker_K2Node_ComponentBoundEvent_6_DamageSig__DelegateSignature(float Amount);
	void FourthStage();
	void EndFirstStage();
	void EndSecondStage();
	void EndThirdStage();
	void EndFourthStage();
	void OnFithStage();
	void EndFithStage();
	void Stage_7();
	void End_Stage_7();
	void Stage_8();
	void Stage_9();
	void All_Scream();
	void Scream_Local();
	void End_Stage_8();
	void Cheat_SpawnTurrets();
	void Cheat_Trigger();
	void Cheat_Kill();
	void BndEvt__AoE_Attack_K2Node_ComponentBoundEvent_8_OnChargeCountChanged__DelegateSignature(int32_t ChargeCount);
	void Start Spawn Stage();
	void StartWeakspot Stage();
	void BndEvt__Health_K2Node_ComponentBoundEvent_7_HealthSegmentChange__DelegateSignature(int32_t currSegment, int32_t prevSegment);
	void TurnOnHatchLights();
	void TurnOffHatchLights();
	void TurnOnTopLight();
	void TurnOffTopLight();
	void Play_EyesWakeup();
	void ExecuteUbergraph_ENE_FacilityCaretaker(int32_t EntryPoint);
	void OnStageChangedEvent__DelegateSignature(int32_t NewParam);
};

