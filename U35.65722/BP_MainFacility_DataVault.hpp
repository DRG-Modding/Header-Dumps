#ifndef UE4SS_SDK_BP_MainFacility_DataVault_HPP
#define UE4SS_SDK_BP_MainFacility_DataVault_HPP

class ABP_MainFacility_DataVault_C : public ATetherStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch4;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch3;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch2;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch1;
    class UPathfinderCollisionComponent* PathfinderCollision_Hatch;
    class UPointLightComponent* ShieldEmitterPointLight;
    class USpotLightComponent* SpotLight_MainBelowGlow;
    class UStaticMeshComponent* ShieldCol;
    class UPathfinderCollisionComponent* PathfinderCollision_Bottom;
    class UPathfinderCollisionComponent* PathfinderCollision_Top;
    class UCapsuleComponent* Capsule;
    class UChildActorComponent* ShieldEmitter;
    class UStaticMeshComponent* MiddleCarver;
    class UStaticMeshComponent* UpLight_4;
    class UStaticMeshComponent* UpLight_3;
    class UStaticMeshComponent* UpLight_2;
    class UStaticMeshComponent* UpLight_1;
    class USceneComponent* UpLights;
    class UAudioComponent* FacilityBossShield_Cue;
    class UChildActorComponent* TentacleSpawn3;
    class UChildActorComponent* TentacleSpawn2;
    class UChildActorComponent* TentacleSpawn1;
    class UChildActorComponent* TentacleSpawn;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* ShieldPFCollision;
    class UDamageComponent* Damage;
    class UBP_FacilityElectricAttack_C* BP_FacilityElectricAttack;
    class UStaticMeshComponent* Shield;
    class USceneComponent* Center;
    class UStaticMeshComponent* GunTower_Carver01;
    class UStaticMeshComponent* TerrainScannerBase;
    class USphereComponent* Sphere1;
    class UOutlineComponent* outline;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class URoomCarverComponent* RoomCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    float FadeShield_NewTrack_0_1149055647097FB37A48EA8DF4A2DB45;
    TEnumAsByte<ETimelineDirection::Type> FadeShield__Direction_1149055647097FB37A48EA8DF4A2DB45;
    class UTimelineComponent* FadeShield;
    int32 NumberOfActivations;
    int32 ActivationsRequired;
    int32 spawned;
    FBP_MainFacility_DataVault_CFacilityActivated FacilityActivated;
    void FacilityActivated();
    FBP_MainFacility_DataVault_CFacilityDestroyed FacilityDestroyed;
    void FacilityDestroyed();
    FBP_MainFacility_DataVault_CFacilityDamaged FacilityDamaged;
    void FacilityDamaged();
    class UMaterialInstanceDynamic* LightMaterial;
    bool Found;
    TArray<FTransform> TentacleSpawnTransforms;
    float MeleeAttackMaxDistance;
    float AttackTimer;
    FTimerHandle AttackTimerRef;
    bool IsBusy;
    float WeakpointHideTime;
    float WeakpointShowTime;
    float WeakpointShowMaxTime;
    float WeakpointShowMinTime;
    bool HideWeakpoint;
    class UObject* WeakpointBP;
    int32 NumConsecutiveShots;
    int32 shotCount;
    int32 RangedAttackTentacleIndex;
    TArray<class APlayerCharacter*> PlayerArray2;
    bool CanShoot;
    bool PlayingMusic;
    FMusicHandle MusicHandle;
    int32 LastWeakpointPositionIndex;
    float TentaclesRegrowthPause;
    TArray<class ABP_MainShieldActvator_C*> ShieldActivators;
    class AENE_FacilityTentacle_C* CurrentTentacle;
    bool IsBossfightActive;
    bool AutoStart;
    float ElectricAttacCooldown;
    int32 PlayersInTrigger;
    FTimerHandle ElectricAttackTimer;
    TArray<class APlayerCharacter*> PlayersInsideTrigger;
    class AENE_FacilityCaretaker_C* Caretaker;
    class UMaterialInstanceDynamic* RimlightMaterial;
    class UStaticMeshComponent* NewVar_1;
    TArray<class ABP_FacilityTentacleManager_C*> TentacleSpawners;
    bool ShieldGeneratorDeactivated;
    FSimpleObjectInfoData ForceFieldInfo;
    FBP_MainFacility_DataVault_CFacilityFound FacilityFound;
    void FacilityFound();

    void UpdateLookAtShouts();
    void FadeInLightBelow();
    void Open Hatch(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPathfinderCollisionComponent*>& K2Node_MakeArray_Array, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPathfinderCollisionComponent* CallFunc_Array_Get_Item, class UABP_MainFacility_C* K2Node_DynamicCast_AsABP_Main_Facility, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void BouncePlayer(class AActor* InActor, FHitResult InHit, float DotUp, class UCharacterMovementComponent* Movement, bool Temp_bool_Variable, FVector Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, FVector K2Node_Select_Default, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Dot_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_1);
    void OnRep_Caretaker(bool CallFunc_IsValid_ReturnValue);
    void AnyAlivePlayersInTrigger(bool& Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Setup Patrol Drone(class APatrolBot* Drone, FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void OnRep_ChangingFaze();
    void GetTentacles(TArray<class AENE_FacilityTentacle_C*>& Tentacles, TArray<class AENE_FacilityTentacle_C*> ActiveTentacles, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array, int32 CallFunc_Array_Length_ReturnValue, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    class AENE_FacilityTentacle_C* GetRandomTentacle(TArray<class AENE_FacilityTentacle_C*> AvailableTentacles, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AENE_FacilityTentacle_C* Temp_object_Variable, bool Temp_bool_Variable, class AENE_FacilityTentacle_C* CallFunc_Array_GetRandom_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class AENE_FacilityTentacle_C* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetTentacleSpawners(TArray<class ABP_FacilityTentacleManager_C*>& Array, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_FacilityTentacleManager_C* K2Node_DynamicCast_AsBP_Facility_Tentacle_Manager, bool K2Node_DynamicCast_bSuccess, class ABP_FacilityTentacleManager_C* K2Node_DynamicCast_AsBP_Facility_Tentacle_Manager_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_FacilityTentacleManager_C* K2Node_DynamicCast_AsBP_Facility_Tentacle_Manager_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_FacilityTentacleManager_C* K2Node_DynamicCast_AsBP_Facility_Tentacle_Manager_3, bool K2Node_DynamicCast_bSuccess_3, TArray<class ABP_FacilityTentacleManager_C*>& K2Node_MakeArray_Array);
    void FindClosestWeakspotLocation(FVector TargetLocaton, FTransform& ClosestWeakpointTransform, float SelectedWeakpointDistance, FTransform SelectedWeakpointLocation, bool NewLocalVar_0, int32 Temp_int_Array_Index_Variable, TArray<FTransform>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void Disable Shield();
    void FindValidRangedTarget(class AENE_FacilityTentacle_C* TentacleRef, float MinDistance, bool NeedLoS, class AActor*& TargetPlayer, class AActor* Target, TArray<class APlayerCharacter*> PlayerArray, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetPlayersInRange_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void TryStartMeleeAttack(class AENE_FacilityTentacle_C* NearestTentacle, float NearestDist, float Dist, class AENE_FacilityTentacle_C* tentacle, class APlayerCharacter* Player);
    void OnRep_Found(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnRep_HasActivated();
    void SetActivationsRequired(int32 activations);
    void ActivatorEnganged(int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array_1, FVector CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void FadeShield__FinishedFunc();
    void FadeShield__UpdateFunc();
    void ReceiveBeginPlay();
    void Cheat_TeleportPlayer();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnActivated();
    void OnGeneratorsReady();
    void BndEvt__ActivateUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void StartFinalFight();
    void FinalFightOver();
    void RegrowTentacles();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TryElectricAttack();
    void DroneSpawned(class APawn* enemy);
    void CaretakerDefeated(class UHealthComponentBase* HealthComponent);
    void OnCaretakerSpawned(class AENE_FacilityCaretaker_C* Caretaker);
    void DisableShields();
    void OnBatteriesExtracted();
    void Cheat_DisableShieldEmitter();
    void LeftCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void RightCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    void PreventSpawning();
    void KillTentacles();
    void PauseTentacles(float Duration);
    void ExecuteUbergraph_BP_MainFacility_DataVault(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FacilityCore_DataRack_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_HasAuthority_ReturnValue_6, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_7, FMusicHandle CallFunc_PlayLibrary_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array_1, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_9, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_HasAuthority_ReturnValue_10, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BooleanAND_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_11, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_K2_TimerExistsHandle_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class APawn* K2Node_CustomEvent_enemy, class APatrolBot* K2Node_DynamicCast_AsPatrol_Bot, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_AnyAlivePlayersInTrigger_Result, bool CallFunc_BooleanAND_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess_4, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class AENE_FacilityCaretaker_C* K2Node_CustomEvent_caretaker, FTransform CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AENE_FacilityCaretaker_C* CallFunc_FinishSpawningActor_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* K2Node_DynamicCast_AsBP_Mainfacility_Shield_Emitter_Force_Field_Projector, bool K2Node_DynamicCast_bSuccess_5, FTransform CallFunc_GetConnectorPoints_ConnectorL, FTransform CallFunc_GetConnectorPoints_ConnectorR, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective_1, bool K2Node_DynamicCast_bSuccess_6, class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* K2Node_DynamicCast_AsBP_Mainfacility_Shield_Emitter_Force_Field_Projector_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanAND_ReturnValue_2, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_3, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue_2, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective_2, bool K2Node_DynamicCast_bSuccess_8, class AActor* CallFunc_Array_Get_Item_2, class ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C* K2Node_DynamicCast_AsBP_Mainfacility_Shield_Emitter_Force_Field_Projector_2, bool K2Node_DynamicCast_bSuccess_9, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base, bool K2Node_DynamicCast_bSuccess_10, TArray<FTransform>& CallFunc_GetConnectorPoint_OutTransform, class AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_DynamicCast_AsBP_Facility_Power_Station_Generator_Base_1, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FTransform>& CallFunc_GetConnectorPoint_OutTransform_1, class AFacilityGeneratorLine* CallFunc_SpawnGeneratorLines_outLineL, class AFacilityGeneratorLine* CallFunc_SpawnGeneratorLines_outLineR, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator_1, class ABP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array_2, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_4, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_GetMaterialIndex_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue_1, int32 CallFunc_GetMaterialIndex_ReturnValue_2, int32 CallFunc_GetMaterialIndex_ReturnValue_3, TArray<int32>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float K2Node_CustomEvent_Duration, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class ABP_FacilityTentacleManager_C*>& CallFunc_GetTentacleSpawners_Array_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_FacilityTentacleManager_C* CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, FExecuteUbergraph_BP_MainFacility_DataVaultK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_IsClosed_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_3);
    void FacilityFound__DelegateSignature();
    void FacilityDamaged__DelegateSignature();
    void FacilityDestroyed__DelegateSignature();
    void FacilityActivated__DelegateSignature();
};

#endif