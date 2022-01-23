#ifndef UE4SS_SDK_BP_DropPod_Escape_Base_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Base_HPP

class ABP_DropPod_Escape_Base_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UStaticMeshComponent* SM_Light032;
    class UBoxComponent* DepositBank_02;
    class UStaticMeshComponent* SM_Light031;
    class UBoxComponent* DepositBank_01;
    class UStaticMeshComponent* SM_Light03;
    class UBoxComponent* DepositBank;
    class UWidgetComponent* Widget_ExitZoneText;
    class UStaticMeshComponent* FrontPlane3;
    class UStaticMeshComponent* SM_Screen_008;
    class UParticleSystemComponent* P_GasCanister_air_Mule4;
    class UStaticMeshComponent* SM_GasCanister3;
    class UStaticMeshComponent* SM_GasCanister2;
    class UStaticMeshComponent* FrontPlane2;
    class UStaticMeshComponent* SM_Screen_007;
    class UParticleSystemComponent* P_GasCanister_air_Mule3;
    class UStaticMeshComponent* FrontPlane1;
    class UStaticMeshComponent* SM_Screen_006;
    class UParticleSystemComponent* P_GasCanister_air_Mule2;
    class UStaticMeshComponent* SM_GasCanister1;
    class UStaticMeshComponent* SM_GasCanister;
    class UAudioComponent* Oxygen_Leak;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UAudioComponent* Audio;
    class UParticleSystemComponent* Droppod_FallingRocks;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UAudioComponent* AudioDepositing;
    class UActorTrackingComponent* ActorTrackingIcon;
    class UResourceBank* ResourceBank;
    class UBoxComponent* Box1_0;
    class UStaticMeshComponent* ExitZone;
    class USphereComponent* TriggerOnOffOutline;
    class UBoxComponent* AllDwarves_LiftOff_Ready;
    class URadarPointComponent* radarPoint;
    class UOutlineComponent* outline;
    FVector DropPodLandingMarker;
    bool WaitForMule;
    int32 CharactersInsideCount;
    bool TakingOff;
    float HurryCoolDown;
    class ABP_DropPod_LandingZone_C* SpawnedLandingZone;
    class UParticleSystemComponent* SmallRocks;
    class UParticleSystemComponent* ConcSmallRocks;

    void DisableDynamicElements(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue);
    void HandlePhotosentitivity(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void GetFrontLocation(FVector& DoorLocation, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void IsAnyCharacterInEscapePod(bool& EscapePodPopulated, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void LockCharactersInPod(TArray<class APlayerCharacter*> playersInPod, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AGameStats* CallFunc_GetGameStats_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1);
    void UserConstructionScript(const class UPrimitiveComponent* Temp_object_Variable, const class UPrimitiveComponent* Temp_object_Variable_1, const class UPrimitiveComponent* Temp_object_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
    void OnDroppodImpact();
    void OnAllDwavesInsidePod(bool AllInside);
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void OnDonkeyReachedDropShip();
    void OnDeparting();
    void RecieveReturnTimerExpired();
    void OnPrepForTakeOff();
    void OnMuleLoaded();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void HandleHurryShouts();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void RecieveReturnTimerFifteenSecondWarning();
    void ForceTakeoff();
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void OnRepDoorState();
    void OnMuleBayOpenedDispatch_Event_1();
    void ExecuteUbergraph_BP_DropPod_Escape_Base(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Loop_Counter_Variable, FExecuteUbergraph_BP_DropPod_Escape_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_AllInside, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DropPod_LandingZone_C* CallFunc_FinishSpawningActor_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AMolly* CallFunc_GetMule_Donkey, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, FExecuteUbergraph_BP_DropPod_Escape_BaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class APlayerCharacter* K2Node_Event_character_1, class APlayerCharacter* K2Node_Event_character, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AMolly* CallFunc_GetMule_Donkey_1, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class APlayerCharacter* CallFunc_FindNearestPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAnyCharacterInEscapePod_EscapePodPopulated, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AMolly* CallFunc_GetMule_Donkey_2, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool K2Node_ComponentBoundEvent_isActive, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsMutatorActive_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsSingleMission_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, int32 Temp_int_Variable_1, class AMolly* CallFunc_GetMule_Donkey_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, class AMolly* CallFunc_GetMule_Donkey_4, bool CallFunc_IsValid_ReturnValue_8);
};

#endif
