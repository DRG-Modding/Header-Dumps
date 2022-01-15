#ifndef UE4SS_SDK_ENE_FacilityCaretaker_HPP
#define UE4SS_SDK_ENE_FacilityCaretaker_HPP

class AENE_FacilityCaretaker_C : UCaretaker
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* EndKillAllEnemiesDamageNoKnockBack;
    UPointLightComponent* PointLight8;
    USceneComponent* TopHatches;
    UPointLightComponent* PointLight7;
    USceneComponent* TurretHatchL;
    UPointLightComponent* PointLight6;
    USceneComponent* TurretHatchR;
    UPointLightComponent* PointLight5;
    USceneComponent* TurretHatchF;
    UPointLightComponent* PointLight4;
    USceneComponent* TurretHatchB;
    UStaticMeshComponent* SM_Ear_collider3;
    UStaticMeshComponent* SM_Ear_collider2;
    UStaticMeshComponent* SM_Ear_collider1;
    UStaticMeshComponent* SM_Ear_collider4;
    UStaticMeshComponent* SM_Caretaker_Collider;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    UBP_Caretaker_AoE_Attack_C* AoE_Attack;
    UBP_CaretakerShredderAction_C* ShredderAction;
    UNiagaraComponent* NS_Gravity_Effect;
    UStaticMeshComponent* PlayerCollisionTop;
    UStaticMeshComponent* PlayerCollisionBottom;
    UWeakpointGlowComponent* WeakpointGlow;
    UPointLightComponent* BossLight;
    UEnemyBufferComponent* EnemyBuffer;
    UHealthDamageTracker* StageDamageTracker;
    UDestructibleSubHealthComponent* WeakpointHealth_04;
    UDestructibleSubHealthComponent* WeakpointHealth_03;
    UDestructibleSubHealthComponent* WeakpointHealth_02;
    UDestructibleSubHealthComponent* WeakpointHealth_01;
    UCapsuleComponent* Weakpoint_04;
    UCapsuleComponent* Weakpoint_03;
    UCapsuleComponent* Weakpoint_02;
    UCapsuleComponent* Weakpoint_01;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UAudioComponent* FacilityBossEyeOpen_Cue;
    UBP_CaretakerDroneAction_UNUSED_C* droneAction;
    UBP_CaretakerMortarAction_C* MortarAction;
    UBP_CaretakerTurretAction_C* TurretAction;
    USpotLightComponent* SpotLight3;
    USpotLightComponent* SpotLight2;
    USpotLightComponent* SpotLight1;
    USpotLightComponent* SpotLight;
    UDamageComponent* EndExpolsionDamage;
    UStaticMeshComponent* SM_LightCone003;
    UStaticMeshComponent* SM_LightCone004;
    UStaticMeshComponent* SM_LightCone002;
    UStaticMeshComponent* SM_LightCone001;
    UOutlineComponent* outline;
    UEnemyComponent* enemy;
    float TopLight_Intensity_39A7A1AF482156613F7234B9DF15400A;
    TEnumAsByte<ETimelineDirection::Type> TopLight__Direction_39A7A1AF482156613F7234B9DF15400A;
    UTimelineComponent* TopLight;
    float HatchLights_Intensity_FCD392DB40C72D74165F7DA7BA20EA50;
    TEnumAsByte<ETimelineDirection::Type> HatchLights__Direction_FCD392DB40C72D74165F7DA7BA20EA50;
    UTimelineComponent* HatchLights;
    float Timeline_0_PointLight_1EE58BD34489027A6F9C488828BDFD2D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1EE58BD34489027A6F9C488828BDFD2D;
    UTimelineComponent* Timeline_0;
    float FadeEyeLights_PointLight_AE68C0994C370ED22D4F1E9A5F7F676B;
    TEnumAsByte<ETimelineDirection::Type> FadeEyeLights__Direction_AE68C0994C370ED22D4F1E9A5F7F676B;
    UTimelineComponent* FadeEyeLights;
    FENE_FacilityCaretaker_COnStageChangedEvent OnStageChangedEvent;
    void OnStageChangedEvent(int32 NewParam);
    bool Initialized;
    float OpenEyeLightIntensity;
    float ClosedEyeLightIntensity;
    float OpenEyePointLightIntensity;
    TMap<UDestructibleSubHealthComponent*, UNiagaraComponent*> WeakpontParticles;
    TArray<int32> RandomIndicies;
    bool CanOpenEyes;
    bool Cheat_SkipWakup;
    TMap<UDestructibleSubHealthComponent*, int32> HealthToGlow;
    bool IsLastStage;

    AActor* GetBossActor();
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
    void CheckIfOnlyOnePlayerIsAllive(int32 AlivePlayers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, UGM_Facility_C* K2Node_DynamicCast_AsGM_Facility, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsAlive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void Begin Opening Eyes(bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void DeactivateWeakpointParticle(const UDestructibleSubHealthComponent*& Key, UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue);
    void ActivateRandomAction(UCaretakerActionComponent*& Output_Get, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UCaretakerActionComponent* CallFunc_Array_Get_Item);
    void GetRandomStageActions(TArray<UCaretakerActionComponent*>& Array, TArray<UCaretakerActionComponent*> LocalActions, TArray<UCaretakerActionComponent*>& K2Node_MakeArray_Array);
    void TurnOffWeakpointParticles();
    void GetFacility(UBP_MainFacility_DataVault_C*& mainFacility, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UGM_Facility_C* K2Node_DynamicCast_AsGM_Facility, bool K2Node_DynamicCast_bSuccess);
    int32 GetNumDeadWeakpoints(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool Temp_bool_Variable_3, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_3, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3);
    void ToggleWeakpoints(bool Active, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void ToggleWeakpoint(UDestructibleSubHealthComponent* Health, bool Active, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
    bool AreWeapointsDead(bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
    void GetEyeLights(USkeletalMeshComponent* eye, UStaticMeshComponent*& LightCone, UMaterialInstanceDynamic*& LightConeMaterial, USpotLightComponent*& SpotLight, UPointLightComponent*& PoiintLight, UPointLightComponent* Local_PointLight, USpotLightComponent* Local_SpotLight, USceneComponent* CallFunc_GetChildComponent_ReturnValue, UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumChildrenComponents_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 Temp_int_Variable, USceneComponent* CallFunc_GetChildComponent_ReturnValue_1, UPointLightComponent* K2Node_DynamicCast_AsPoint_Light_Component, bool K2Node_DynamicCast_bSuccess_1, USpotLightComponent* K2Node_DynamicCast_AsSpot_Light_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void GetWaveTimer(float BaseTime, float PerPlayerTime, float& totalTime, int32 CallFunc_GetNumPlayers_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void UserConstructionScript(int32 CallFunc_GetMaterialIndex_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue_1, int32 CallFunc_GetMaterialIndex_ReturnValue_2, int32 CallFunc_GetMaterialIndex_ReturnValue_3, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_1, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_2, int32 CallFunc_SetUpWeakPointGlowOnMesh_ReturnValue_3);
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
    void OnNewStage(int32 stageIndex);
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
    void Stage_6();
    void End_Stage_6();
    void Stage_7();
    void Stage_8();
    void All_Scream();
    void Scream_Local();
    void End_Stage_7();
    void Cheat_SpawnTurrets();
    void Cheat_Trigger();
    void Cheat_Kill();
    void BndEvt__AoE_Attack_K2Node_ComponentBoundEvent_8_OnChargeCountChanged__DelegateSignature(int32 ChargeCount);
    void Start Spawn Stage();
    void StartWeakspot Stage();
    void BndEvt__Health_K2Node_ComponentBoundEvent_7_HealthSegmentChange__DelegateSignature(int32 currSegment, int32 prevSegment);
    void TurnOnHatchLights();
    void TurnOffHatchLights();
    void TurnOnTopLight();
    void TurnOffTopLight();
    void Play_EyesWakeup();
    void SpawnPatrolBots();
    void KillAllEnemiesInArea();
    void CheckForLastPlayerStanding();
    void ExecuteUbergraph_ENE_FacilityCaretaker(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, int32 Temp_int_Array_Index_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, USkeletalMeshComponent* K2Node_Event_eye_1, USkeletalMeshComponent* K2Node_Event_eye, UStaticMeshComponent* CallFunc_GetEyeLights_LightCone, UMaterialInstanceDynamic* CallFunc_GetEyeLights_LightConeMaterial, USpotLightComponent* CallFunc_GetEyeLights_SpotLight, UPointLightComponent* CallFunc_GetEyeLights_PoiintLight, UStaticMeshComponent* CallFunc_GetEyeLights_LightCone_1, UMaterialInstanceDynamic* CallFunc_GetEyeLights_LightConeMaterial_1, USpotLightComponent* CallFunc_GetEyeLights_SpotLight_1, UPointLightComponent* CallFunc_GetEyeLights_PoiintLight_1, USimpleBossFight* CallFunc_SpawnObject_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FBossFight K2Node_MakeStruct_BossFight, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_MakeLiteralFloat_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_7, int32 K2Node_Event_stageIndex, bool K2Node_SwitchInteger_CmpSuccess, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_3, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_2, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth_1, UDestructibleSubHealthComponent* K2Node_ComponentBoundEvent_subHealth, bool CallFunc_AreWeapointsDead_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetNumDeadWeakpoints_ReturnValue, float K2Node_ComponentBoundEvent_Amount, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable_2, InterfaceProperty CallFunc_RegisterBossFight_BossFight_CastInput, TArray<UCaretakerActionComponent*>& CallFunc_GetRandomStageActions_Array, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Get_Item, UPlayerCharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item_2, UPlayerCharacter* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue, int32 K2Node_ComponentBoundEvent_ChargeCount, bool CallFunc_HasAuthority_ReturnValue_3, UCaretakerActionComponent* CallFunc_ActivateRandomAction_Output_Get, UBP_CaretakerActionBase_C* K2Node_DynamicCast_AsBP_Caretaker_Action_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetEstimatedStartDuration_StartDuration, TArray<UFacilityTurret*>& CallFunc_GetAllActorsOfClass_OutActors, UFacilityTurret* CallFunc_Array_Get_Item_4, FVector CallFunc_GetSocketLocation_ReturnValue_1, UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_2, int32 K2Node_ComponentBoundEvent_currSegment, int32 K2Node_ComponentBoundEvent_prevSegment, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_4, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_5, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_6, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsShippingBuild_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Montage_Play_ReturnValue, USkeletalMeshComponent* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, UBP_MainFacility_DataVault_C* CallFunc_GetFacility_MainFacility_7, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_6, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
    void OnStageChangedEvent__DelegateSignature(int32 NewParam);
}

#endif