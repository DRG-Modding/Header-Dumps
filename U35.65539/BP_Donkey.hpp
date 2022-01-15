#ifndef UE4SS_SDK_BP_Donkey_HPP
#define UE4SS_SDK_BP_Donkey_HPP

class ABP_Donkey_C : UMolly
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* TerrainScannerMesh;
    USphereComponent* Sphere;
    UAudioComponent* Oxygen_Leak;
    UStaticMeshComponent* SM_Screen_007;
    UStaticMeshComponent* FrontPlane1;
    UStaticMeshComponent* SM_Screen_005;
    UStaticMeshComponent* FrontPlane;
    UParticleSystemComponent* P_GasCanister_air_Mule1;
    UParticleSystemComponent* P_GasCanister_air_Mule;
    UStaticMeshComponent* SM_GasCanister1;
    UStaticMeshComponent* SM_GasCanister;
    UOxygenSourceComponent* OxygenSource;
    UCapsuleComponent* PlayerRideCapsule;
    UAudioComponent* AudioDepositing;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* SM_Donkey_Button;
    UStaticMeshComponent* EscapeButton;
    UWidgetComponent* Widget;
    UBoxComponent* UseBox_ResourceBank;
    USphereComponent* UseSphere_Return;
    USingleUsableComponent* ReturnToMissionUsable;
    UBoxComponent* Box1;
    UActorTrackingComponent* ActorTracking;
    UStaticMeshComponent* LightCone;
    USpotLightComponent* SpotLight;
    USceneComponent* FloodLight;
    UBoxComponent* Box;
    URadarPointComponent* radarPoint;
    bool IsTrayOpen;
    FName DestinationKeyName;
    ABP_DonkeyDestinationMarker_C* DonkeyMarker;
    FName ControlledKeyName;
    FName DropShipPosKey;
    FName GotoDropshipKey;
    FName BeingDepositedToName;
    bool HeadingForDropShip;
    int32 OverlapsPlayer;
    FBP_Donkey_CPlayerOverlapsChanged PlayerOverlapsChanged;
    void PlayerOverlapsChanged(int32 OverlapCount);
    FTimerHandle BreadCrumbTimer;
    float PlayerStartRideTime;
    UFSDAchievement* MollyRiderAchievement;
    ADonkey_BreadCrumb_C* LastCrumb;
    FTimerHandle TimeoutHandle;
    TSubclassOf<ADonkey_BreadCrumb_C> BreadCrumpClass;
    TArray<APlayerState*> Users;
    float ShowButtonDelay;

    UDialogDataAsset* GetCallingShout();
    void UpdateStopCallRequests(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void HandlePhotosensitivity(UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void OnRep_IsTrayOpen(bool CallFunc_IsValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Donkey_C* K2Node_DynamicCast_AsABP_Donkey, bool K2Node_DynamicCast_bSuccess);
    void GotoDropship(FVector Pos, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void Set Controlled by Drop Ship(bool Control, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, TArray<UBP_DropPod_Escape_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, UBP_DropPod_Escape_Base_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetFrontLocation_DoorLocation, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* K2Node_Select_Default, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void SetDestination(FVector Destination, UPlayerCharacter* InCalledBy, bool CallFunc_HasAuthority_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDonkeyCalled(FVector Position, UPlayerCharacter* requester);
    void SetDonkeyPos(FVector Pos);
    void On Goto Dropship();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void SpawnBreadCrumb();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Update Button State();
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void EnableButton();
    void OnRep_IsDown();
    void SetControlledByDropShip(bool Control);
    void OnPlayerLeft(UFSDPlayerState* PlayerState);
    void SetGotoDropShip(const FVector& Location);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_Donkey(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_4, int32 Temp_int_Variable, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UFSDGameMode* K2Node_DynamicCast_AsFSDGame_Mode, bool K2Node_DynamicCast_bSuccess, FVector K2Node_CustomEvent_position, UPlayerCharacter* K2Node_CustomEvent_requester, FVector K2Node_CustomEvent_Pos, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_DonkeyDestinationMarker_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool CallFunc_IsValid_ReturnValue_2, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key, bool K2Node_ComponentBoundEvent_canUse, const FTransform CallFunc_GetTransform_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_3, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, bool K2Node_ComponentBoundEvent_isActive, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsMutatorActive_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool Temp_bool_IsClosed_Variable, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, CallDonkey__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, ADonkey_BreadCrumb_C* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_GetArrowPoint_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Donkey_C* K2Node_DynamicCast_AsABP_Donkey, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_Event_Control, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, bool CallFunc_Array_RemoveItem_ReturnValue_1, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, const FVector K2Node_Event_location, bool K2Node_ComponentBoundEvent_Success);
    void PlayerOverlapsChanged__DelegateSignature(int32 OverlapCount);
}

#endif
