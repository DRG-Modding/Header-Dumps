#ifndef UE4SS_SDK_BP_Pipeline_Segment_HPP
#define UE4SS_SDK_BP_Pipeline_Segment_HPP

class ABP_Pipeline_Segment_C : UPipelineSegment
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    UTerrainScannerSplineMesh* TerrainScannerSplineMesh;
    UStaticMeshComponent* ActivateLightCone;
    UPointLightComponent* ActivatePointLight ;
    UParticleSystemComponent* BrokenParticleSystem_Decals;
    UChildActorComponent* ActivateHologram;
    UAudioComponent* PipeLeakingMorkiteSprayingOut_Cue;
    UAudioComponent* PipeLeakingAlarm_Cue;
    UStaticMeshComponent* SM_LightCone_Red;
    UParticleSystemComponent* BrokenParticleSystem 05;
    UParticleSystemComponent* BrokenParticleSystem 04;
    UParticleSystemComponent* BrokenParticleSystem 03;
    UParticleSystemComponent* BrokenParticleSystem 02;
    UChildActorComponent* BP_StatusLamp;
    USceneComponent* BrokenNode;
    USphereComponent* RepairCollider;
    USphereComponent* ActivateSegmentCollider;
    UParticleSystemComponent* ConnectedParticleSystem;
    USphereComponent* NextSegmentCollider;
    USplineDecoratorComponent* RingDecorator;
    UPointLightComponent* PointLight Red;
    UParticleSystemComponent* BrokenParticleSystem 01;
    UTerrainScannerStaticMesh* TerrainScanner_Broken;
    UAudioComponent* AudioActivating;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBP_Pipeline_Movement_C* BP_Pipeline_Movement;
    UArrowComponent* Arrow;
    float Timeline_0_Progress_DAE98DA44362821170C92FBA184208DB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DAE98DA44362821170C92FBA184208DB;
    UTimelineComponent* Timeline_0;
    float BuildTimeline_Progress_6223F38446980B06F3713AAB20D1CEB4;
    TEnumAsByte<ETimelineDirection::Type> BuildTimeline__Direction_6223F38446980B06F3713AAB20D1CEB4;
    UTimelineComponent* BuildTimeline;
    TArray<UMaterialInterface*> MaterialsEndPost;
    UMaterialInterface* MaterialPipe;
    UMaterialInterface* MaterialBlueprintValid;
    UMaterialInterface* MaterialBlueprintInvalid;
    float Scale;
    float Height;
    float MinValidDistance;
    float MaxValidDistance;
    float SplineMeshDistance;
    UAudioComponent* BuildingAudioComponent;
    ETrackBuildPlacementState LastState;
    bool SegmentValid;
    ABP_AttackablePiplinesegmentActor_C* AttackableActor;
    float MaxLightIntensity;
    FSimpleObjectInfoData PipelineObjectInfo;
    FSimpleObjectInfoData PipelineObjectInfoBroken;
    FSimpleObjectInfoData ConnectorObjectInfo;
    FSimpleObjectInfoData ConnectorObjectInfoBroken;

    bool IsPhotosensitiveMode(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void HandlePhotosensitivity(bool CallFunc_IsPhotosensitiveMode_ReturnValue);
    void UpdatePipelineNumber(UMaterialInterface* Material, int32 Temp_int_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APipelineStart* CallFunc_GetPipelineStart_ReturnValue, APipelineStart* CallFunc_GetPipelineStart_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, UMaterialInterface* K2Node_Select_Default);
    void OverrideEndPostMaterial(UMaterialInterface* Material, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UMaterialInterface* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue);
    void UpdateConnectableGFX(bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UMaterialInterface* K2Node_Select_Default, int32 CallFunc_GetMaterialIndex_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* K2Node_Select_Default_1);
    void UpdatePlacementState(ETrackBuildPlacementState InState, bool Finished, UMaterialInterface* BlueprintMaterial, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UMaterialInterface* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsSegmentEndTransformValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_GetIsSegmentEndTransformValid_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, uint8 K2Node_Select_Default_2, UMaterialInterface* K2Node_Select_Default_3);
    void UserConstructionScript(float RelativeScale, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
    void BuildTimeline__FinishedFunc();
    void BuildTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceivPlacementValidChanged(bool InIsValid);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ReversePipelineAnim();
    void BndEvt__SegmentHealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
    void Update Can Undo();
    void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    void ReceivePlacementFinished();
    void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_5_UsableChangedSignature__DelegateSignature(bool CanUse);
    void UpdateCanActivateSegmentGFX();
    void BndEvt__ActivateSegmentUsable_K2Node_ComponentBoundEvent_4_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ScheduleUpdatePlacementState();
    void CarveAroundSegment();
    void ReceiveSegmentActivatedProgress(float InProgress);
    void OnRepaired(UPlayerCharacter* InUser);
    void Hide Endpost Items();
    void SetupPipelineNumber();
    void SegmentBrokenGFX();
    void SegmentBrokenLocalWave();
    void SegmentBrokenLaserpointerInfo();
    void SegmentBrokenAudio();
    void BndEvt__BrokenParticleSystem_Decals_K2Node_ComponentBoundEvent_6_ParticleCollisionSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    void ReceivePlacementBegin();
    void ParticlesOnPlaced();
    void ExecuteUbergraph_BP_Pipeline_Segment(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_InIsValid, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, ETrackBuildPlacementState K2Node_Event_newState, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_ComponentBoundEvent_Amount, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Heal_ReturnValue, bool K2Node_ComponentBoundEvent_canUse_1, bool CallFunc_HasAuthority_ReturnValue_2, bool K2Node_Event_InSegmentBroken, bool K2Node_ComponentBoundEvent_canUse, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_InProgress, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_ArriveTangent, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_LeaveTangent, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_ArriveTangent_1, FVector CallFunc_GetLocationAndTangentsAtSplinePoint_LeaveTangent_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GetIsSegmentActivated_ReturnValue, UPlayerCharacter* K2Node_Event_InUser, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, USceneComponent* CallFunc_Array_Get_Item, FTransform CallFunc_GetSegmentEndTransform_ReturnValue, FTransform CallFunc_GetSegmentEndTransform_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_LocalWaveTrigger_C* CallFunc_FinishSpawningActor_ReturnValue, FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleTime, FVector K2Node_ComponentBoundEvent_location, FVector K2Node_ComponentBoundEvent_Velocity, FVector K2Node_ComponentBoundEvent_Direction, FVector K2Node_ComponentBoundEvent_Normal, FName K2Node_ComponentBoundEvent_boneName, UPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, FVector CallFunc_ComponentToWorldLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, APipelineStart* CallFunc_GetPipelineStart_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_3, UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue, FVector CallFunc_ComponentToWorldLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue, ETrackBuildPlacementState CallFunc_GetPlacementState_ReturnValue_1, bool CallFunc_IsPhotosensitiveMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, float K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, UBP_AttackablePiplinesegmentActor_C* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_Ease_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, UTrackBuilderConnectPoint* CallFunc_GetConnectPoint_ReturnValue_2, float CallFunc_GetDistanceAlongSplineAtSplinePoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float K2Node_Select_Default_1);
}

#endif
