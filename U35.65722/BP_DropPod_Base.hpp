#ifndef UE4SS_SDK_BP_DropPod_Base_HPP
#define UE4SS_SDK_BP_DropPod_Base_HPP

class ABP_DropPod_Base_C : public AMiningPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAutoCarverComponent* AutoCarverArm;
    class UAudioComponent* Audio_Molly_Loadbeam;
    class USkeletalMeshComponent* SK_DropPod_DroneBay;
    class USkeletalMeshComponent* SK_DropPod_MuleBay;
    class UBoxComponent* Ramp_DwarfDetector;
    class UPathfinderCollisionComponent* PathfinderWalkable;
    class UPathfinderCollisionComponent* PathfinderBlockerDrill_Walk;
    class UPathfinderCollisionComponent* PathfinderBlockerDrill_Block;
    class UStaticMeshComponent* Monitor_Right;
    class UStaticMeshComponent* Monitor_Left;
    class UStaticMeshComponent* DrillBlocker;
    class UPointLightComponent* light_filler2;
    class UPointLightComponent* light_filler1;
    class UChildActorComponent* Widget_RandomCode6;
    class UChildActorComponent* Widget_RandomCode5;
    class UChildActorComponent* Widget_RandomCode4;
    class UChildActorComponent* Widget_RandomCode3;
    class UChildActorComponent* Widget_RandomCode1;
    class UPointLightComponent* light_readySign1;
    class USceneComponent* RedLights;
    class UStaticMeshComponent* StaticMesh17;
    class UPointLightComponent* light_display4;
    class UPointLightComponent* light_display3;
    class UStaticMeshComponent* SM_DropPod_ClimbTread;
    class UStaticMeshComponent* SM_DropPod_ClimbTread3;
    class UStaticMeshComponent* SM_DropPod_ClimbTread2;
    class UStaticMeshComponent* SM_DropPod_ClimbTread1;
    class USkeletalMeshComponent* OreBox_Left;
    class USkeletalMeshComponent* OreBox_Right;
    class USkeletalMeshComponent* OreBox_Back;
    class UChildActorComponent* BP_TruckerBalls1;
    class UChildActorComponent* BP_TruckerBalls;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UPointLightComponent* PointLight15;
    class UPointLightComponent* PointLight14;
    class UPointLightComponent* PointLight13;
    class UPointLightComponent* PointLight12;
    class UPointLightComponent* PointLight11;
    class UPointLightComponent* PointLight10;
    class UPointLightComponent* PointLight9;
    class UPointLightComponent* PointLight8;
    class UPointLightComponent* PointLight7;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UBoxComponent* InSidePodArea;
    class UOxygenSourceComponent* OxygenSource;
    class UChildActorComponent* Widget_RandomCode2;
    class UChildActorComponent* Widget_RandomCode;
    class UChildActorComponent* Widget_MissionData;
    class UChildActorComponent* Widget_CaveData;
    class UChildActorComponent* Widget_DangerLevel2;
    class UChildActorComponent* Widget_DangerLevel;
    class UChildActorComponent* Widget_ResourceScreen2;
    class UChildActorComponent* Widget_ResourceScreen;
    class UAudioComponent* AudioCenter;
    class UAudioComponent* AudioBack;
    class UAudioComponent* AudioFront;
    class UAudioComponent* AudioRight;
    class UAudioComponent* AudioLeft;
    class UAutoCarverComponent* PrettyCarver;
    class UChildActorComponent* Widget_CountDown02;
    class UChildActorComponent* Widget_CountDown01;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* KillSphere;
    class UBoxComponent* DwarfChecker;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UPathfinderCollisionComponent* PathfinderBlocker;
    class UBoxComponent* Box;
    class USceneComponent* DonkeyReturnDropPosition;
    class USceneComponent* DonkeySpawnPosition;
    class USkeletalMeshComponent* Ramp;
    class UChildActorComponent* BP_Drop_CamShake;
    class UChildActorComponent* Spawn2;
    class UChildActorComponent* Spawn1;
    class UChildActorComponent* Spawn4;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class UWidgetComponent* Widget_SeatMonitorRight;
    class UWidgetComponent* Widget_SeatMonitorLeft;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class USceneComponent* floorCollision;
    class UStaticMeshComponent* Spot2;
    class UStaticMeshComponent* Spot1;
    class USceneComponent* hull;
    class USceneComponent* seats;
    class USceneComponent* lights_interior;
    class USkeletalMeshComponent* SK_DropPod_Airlock;
    class UChildActorComponent* Spawn3;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cone2;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* Cone1;
    class UStaticMeshComponent* SM_DropPod_Hull;
    class UStaticMeshComponent* SM_DropPod_Hull_NoCol;
    class UStaticMeshComponent* Seat_Empty4;
    class UStaticMeshComponent* Seat_Empty3;
    class UStaticMeshComponent* Seat_Empty2;
    class UStaticMeshComponent* Seat_Empty1;
    class UPointLightComponent* light_display2;
    class UPointLightComponent* light_display1;
    float Timeline_1_LerpDelay_3C91DA044E3AE316CFE9988822F28BC8;
    float Timeline_1_Lerp_3C91DA044E3AE316CFE9988822F28BC8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3C91DA044E3AE316CFE9988822F28BC8;
    class UTimelineComponent* Timeline_1;
    float Timeline_5_LerpDelay_BD4E08A7452DF28657A134A2565D0A25;
    float Timeline_5_Lerp_BD4E08A7452DF28657A134A2565D0A25;
    TEnumAsByte<ETimelineDirection::Type> Timeline_5__Direction_BD4E08A7452DF28657A134A2565D0A25;
    class UTimelineComponent* Timeline_5;
    float Timeline_0_RedLightIntensity_2F2B1CD4469260DD2E665FA77E175746;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2F2B1CD4469260DD2E665FA77E175746;
    class UTimelineComponent* Timeline_0;
    float light_readysign_intensity;
    class UAudioComponent* DrillSound;
    class AMULE* MuleInstance;
    FTransform MuleTransform;
    bool MuleSequenceComplete;
    bool OpenDoorsOnLanding;
    bool UnloadMule;
    FTimerHandle CarverRotationTimer;
    bool ShouldTurnOnHeadlight;
    bool CanControlHeadlight;
    TEnumAsByte<DroppodDoorState::Type> DoorState;
    class UMaterialInstanceDynamic* LightFlickerMaterial;
    class UParticleSystemComponent* MulebayParticle;
    FBP_DropPod_Base_CDoorStateChanged DoorStateChanged;
    void DoorStateChanged(TEnumAsByte<DroppodDoorState::Type> DoorState);
    FTransform MuleUnloadTransform;
    bool MuleBayOpen;
    FBP_DropPod_Base_COnMuleBayOpenedDispatch OnMuleBayOpenedDispatch;
    void OnMuleBayOpenedDispatch();
    TArray<class AMULE*> MulesToCollect;
    bool CarvingComplete;
    bool MuleWasLoaded;

    void OnRep_MuleSequenceComplete();
    void CollectMule(class AMULE* MULE, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
    void OnRep_MuleUnloadTransform();
    void GetMuleUnloadTarget(class AMULE*& MULE, FTransform& RelativeTransform, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool Temp_bool_Variable, const FVector K2Node_Select_Default, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue, FQuat CallFunc_CalcPathfinderOrientation_ReturnValue, FRotator CallFunc_QuatToRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_ConvertTransformToRelative_ReturnValue);
    void EnableMulebay();
    void OnRep_DoorState();
    float OperateMuleBay(bool Openclass UAnimMontage*& Montage, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable, class UAnimMontage* K2Node_Select_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
    bool AnyPlayersOnRamp(TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void HandleRampPhotosensitivity(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void SetPathBlockersEnabled(bool Enable);
    void DestroyIfClose(TArray<class AActor*>& Actors, float DistanceSQ, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void RemoveDangerousCaveItems(float Distance, float DistanceSQ, float CallFunc_Square_ReturnValue, TArray<class ABP_Geyser_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors);
    void SetAllPlayersAnsel(bool Active, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue_1, TArray<class ABP_PlayerControllerBase_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerControllerBase_C* CallFunc_Array_Get_Item, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1);
    FVector GetDonkeyReturnPickupLocation(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void SetDoorState(TEnumAsByte<DroppodDoorState::Type> DoorState, bool CallFunc_HasAuthority_ReturnValue);
    void GetCountDown(bool First, class ABP_Widget_DropPod_AltitudeMeter_C*& AsBP Count Down Actor, bool Temp_bool_Variable, class AActor* K2Node_Select_Default, class ABP_Widget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsBP_Widget_Drop_Pod_Altitude_Meter, bool K2Node_DynamicCast_bSuccess);
    void OnRep_MuleInstance(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnMuleLoaded();
    void GetMule(class AMolly*& Donkey, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void SetStandingDown(bool IsStandingDown, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void CloseRamp(bool CallFunc_HasAuthority_ReturnValue);
    void OpenRamp(bool CallFunc_HasAuthority_ReturnValue);
    void OnAllPlayersLeftPod();
    void SetPreferredCharacter(class UChildActorComponent* Spawn, class UPlayerCharacterID* Class, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerStart_C* K2Node_DynamicCast_AsBP_Player_Start, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
    void UserConstructionScript(class ABP_Widget_DropPod_AltitudeMeter_C* K2Node_DynamicCast_AsBP_Widget_Drop_Pod_Altitude_Meter, bool K2Node_DynamicCast_bSuccess);
    void Timeline_5__FinishedFunc();
    void Timeline_5__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void StartDeparture();
    void OnDroppodImpact();
    void Start Donkey Unload Sequence();
    void Unload Donkey();
    void OnDrillingStarted();
    void Load Donkey(class AMULE* MULE);
    void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DrillRotate();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void SetMuleInstance(class AMolly* Donkey);
    void DropPodSetAnsel(bool Active);
    void AllSetAnsel(bool Active);
    void BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MakeTruckerDicesMove();
    void OnRep_RampState();
    void OnFirstPlayerLeftPod();
    void ReceiveDestroyed();
    void OnRepDoorState();
    void LowerMuleToGround();
    void OpenMuleBay();
    void OnMuleBayOpenedDispatch_Event_0();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_BP_DropPod_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, FExecuteUbergraph_BP_DropPod_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_6, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_7, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class AMULE* K2Node_CustomEvent_Mule, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, FTransform CallFunc_GetRelativeTransform_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_4, class AActor* K2Node_ComponentBoundEvent_OtherActor_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_4, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_4, bool K2Node_ComponentBoundEvent_bFromSweep_2, const FHitResult K2Node_ComponentBoundEvent_SweepResult_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_IsValid_ReturnValue, class APipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess_4, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayerHealthComponent* K2Node_DynamicCast_AsPlayer_Health_Component, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, class APlayerCharacter* K2Node_CustomEvent_character_1, class APlayerCharacter* K2Node_CustomEvent_character, bool CallFunc_IsLocallyControlled_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue, class AMolly* K2Node_Event_donkey, bool K2Node_CustomEvent_Active_1, bool K2Node_CustomEvent_Active, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class ABP_PlayerControllerBase_C* K2Node_DynamicCast_AsBP_Player_Controller_Base, bool K2Node_DynamicCast_bSuccess_6, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class ABP_TruckerBalls_C* K2Node_DynamicCast_AsBP_Trucker_Balls, bool K2Node_DynamicCast_bSuccess_7, class ABP_TruckerBalls_C* K2Node_DynamicCast_AsBP_Trucker_Balls_1, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TEnumAsByte<ECollisionEnabled::Type> Temp_byte_Variable_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, TSubclassOf<class AMolly> CallFunc_GetMuleClass_ReturnValue, TEnumAsByte<ECollisionEnabled::Type> K2Node_Select_Default, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AMolly* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_OperateMuleBay_ReturnValue, class UAnimMontage* CallFunc_OperateMuleBay_Montage, FVector CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_OperateMuleBay_ReturnValue_1, class UAnimMontage* CallFunc_OperateMuleBay_Montage_1, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, FTransform CallFunc_GetMuleUnloadTarget_RelativeTransform, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, FVector CallFunc_Vector_One_ReturnValue, float CallFunc_OperateMuleBay_ReturnValue_2, class UAnimMontage* CallFunc_OperateMuleBay_Montage_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, FExecuteUbergraph_BP_DropPod_BaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class AMULE* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FExecuteUbergraph_BP_DropPod_BaseK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Ease_ReturnValue, FVector CallFunc_VEase_ReturnValue, FRotator CallFunc_REase_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, bool Temp_bool_Has_Been_Initd_Variable_3, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABP_Widget_DropPod_AltitudeMeter_C* CallFunc_GetCountDown_AsBP_Count_Down_Actor, class ABP_Widget_DropPod_AltitudeMeter_C* CallFunc_GetCountDown_AsBP_Count_Down_Actor_1, FLinearColor K2Node_MakeStruct_LinearColor, FLinearColor K2Node_MakeStruct_LinearColor_1, bool Temp_bool_IsClosed_Variable_3, FVector CallFunc_VEase_ReturnValue_1, FRotator CallFunc_REase_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, FTransform CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_IsDeepDive_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
    void OnMuleBayOpenedDispatch__DelegateSignature();
    void DoorStateChanged__DelegateSignature(TEnumAsByte<DroppodDoorState::Type> DoorState);
};

#endif
