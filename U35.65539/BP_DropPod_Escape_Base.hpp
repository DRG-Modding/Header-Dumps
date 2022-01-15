#ifndef UE4SS_SDK_BP_DropPod_Escape_Base_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Base_HPP

class ABP_DropPod_Escape_Base_C : UBP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    UStaticMeshComponent* SM_Light032;
    UBoxComponent* DepositBank_02;
    UStaticMeshComponent* SM_Light031;
    UBoxComponent* DepositBank_01;
    UStaticMeshComponent* SM_Light03;
    UBoxComponent* DepositBank;
    UWidgetComponent* Widget_ExitZoneText;
    UStaticMeshComponent* FrontPlane3;
    UStaticMeshComponent* SM_Screen_008;
    UParticleSystemComponent* P_GasCanister_air_Mule4;
    UStaticMeshComponent* SM_GasCanister3;
    UStaticMeshComponent* SM_GasCanister2;
    UStaticMeshComponent* FrontPlane2;
    UStaticMeshComponent* SM_Screen_007;
    UParticleSystemComponent* P_GasCanister_air_Mule3;
    UStaticMeshComponent* FrontPlane1;
    UStaticMeshComponent* SM_Screen_006;
    UParticleSystemComponent* P_GasCanister_air_Mule2;
    UStaticMeshComponent* SM_GasCanister1;
    UStaticMeshComponent* SM_GasCanister;
    UAudioComponent* Oxygen_Leak;
    UStaticMeshComponent* FrontPlane;
    UStaticMeshComponent* SM_Screen_005;
    UParticleSystemComponent* P_GasCanister_air_Mule1;
    UAudioComponent* Audio;
    UParticleSystemComponent* Droppod_FallingRocks;
    UStaticMeshComponent* TerrainScannerMesh;
    UAudioComponent* AudioDepositing;
    UActorTrackingComponent* ActorTrackingIcon;
    UResourceBank* ResourceBank;
    UBoxComponent* Box1_0;
    UStaticMeshComponent* ExitZone;
    USphereComponent* TriggerOnOffOutline;
    UBoxComponent* AllDwarves_LiftOff_Ready;
    URadarPointComponent* radarPoint;
    UOutlineComponent* outline;
    FVector DropPodLandingMarker;
    bool WaitForMule;
    int32 CharactersInsideCount;
    bool TakingOff;
    float HurryCoolDown;
    ABP_DropPod_LandingZone_C* SpawnedLandingZone;
    UParticleSystemComponent* SmallRocks;
    UParticleSystemComponent* ConcSmallRocks;

    void DisableDynamicElements(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue);
    void HandlePhotosentitivity(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void GetFrontLocation(FVector& DoorLocation, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void IsAnyCharacterInEscapePod(bool& EscapePodPopulated, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void LockCharactersInPod(TArray<UPlayerCharacter*> playersInPod, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UGameStats* CallFunc_GetGameStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1);
    void UserConstructionScript(const UPrimitiveComponent* Temp_object_Variable, const UPrimitiveComponent* Temp_object_Variable_1, const UPrimitiveComponent* Temp_object_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
    void OnDroppodImpact();
    void OnAllDwavesInsidePod(bool AllInside);
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void OnDonkeyReachedDropShip();
    void OnDeparting();
    void RecieveReturnTimerExpired();
    void OnPrepForTakeOff();
    void OnMuleLoaded();
    void OnCharacterEnter(UPlayerCharacter* Character);
    void OnCharacterExit(UPlayerCharacter* Character);
    void HandleHurryShouts();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void RecieveReturnTimerFifteenSecondWarning();
    void ForceTakeoff();
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void OnRepDoorState();
    void OnMuleBayOpenedDispatch_Event_1();
    void ExecuteUbergraph_BP_DropPod_Escape_Base(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Loop_Counter_Variable, OnMuleBayOpenedDispatch__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UPlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_AllInside, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_DropPod_LandingZone_C* CallFunc_FinishSpawningActor_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UMolly* CallFunc_GetMule_Donkey, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, Delegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UPlayerCharacter* K2Node_Event_character_1, UPlayerCharacter* K2Node_Event_character, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UMolly* CallFunc_GetMule_Donkey_1, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UPlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAnyCharacterInEscapePod_EscapePodPopulated, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMolly* CallFunc_GetMule_Donkey_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool K2Node_ComponentBoundEvent_isActive, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsMutatorActive_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsSingleMission_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Variable_1, UMolly* CallFunc_GetMule_Donkey_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UMolly* CallFunc_GetMule_Donkey_4, bool CallFunc_IsValid_ReturnValue_8);
}

#endif
