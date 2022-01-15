#ifndef UE4SS_SDK_BP_RewardFrame_HPP
#define UE4SS_SDK_BP_RewardFrame_HPP

class ABP_RewardFrame_C : AEventRewardFrame
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* Sphere;
    UTerrainPlacementComponent* terrainPlacement;
    UBoxComponent* Box;
    UBoxComponent* UseCollider;
    UTerrainDetectComponent* TerrainDetect;
    UDropToTerrainComponent* DropToTerrain;
    USceneComponent* AttentionLightRoot;
    UPointLightComponent* PointLight2;
    USpotLightComponent* SpotLight;
    UPointLightComponent* PointLight;
    UPointLightComponent* PointLight1;
    UStaticMeshComponent* LightCone;
    UOutlineComponent* outline;
    UChildActorComponent* Dispenser4;
    UChildActorComponent* Dispenser3;
    UChildActorComponent* Dispenser2;
    UChildActorComponent* Dispenser1;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    float AttentionLightTimeLine_Progress01_7D9ABF3443AD60E5960D44ADCB060072;
    TEnumAsByte<ETimelineDirection::Type> AttentionLightTimeLine__Direction_7D9ABF3443AD60E5960D44ADCB060072;
    UTimelineComponent* AttentionLightTimeLine;
    AGameEvent* OwningEvent;
    bool EventFinished;
    TArray<AEventRewardDispenser*> DispenserActors;
    bool AttentionLightOn;
    APlayerCharacter* KeyOwner;
    ABP_ReturningPromotionKey_C* Key;
    float HeightAboveGround;
    float Incrementing;
    FMusicHandle MusicHandle;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void GetLocalPlayerDispenser(AEventRewardDispenser*& OutDispenser, AEventRewardDispenser* Dispenser, UPlayerCharacter* Player, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, AEventRewardDispenser* K2Node_DynamicCast_AsEvent_Reward_Dispenser, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOwningPlayer_ReturnValue, UPlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue);
    void AllDispensersFinished(bool& IsFinished, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetDispensRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, AEventRewardDispenser* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetupDispenser(AEventRewardDispenser* Dispenser, OnDispenserFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue, UBP_RewardDispenser_C* K2Node_DynamicCast_AsBP_Reward_Dispenser, bool K2Node_DynamicCast_bSuccess);
    void GetRandomPlayer(UPlayerCharacter*& Output, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item);
    void UpdateLights(bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, AEventRewardDispenser* CallFunc_GetLocalPlayerDispenser_OutDispenser, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AllDispensersFinished_IsFinished, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1);
    void AlignDispensers(FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_2, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_3);
    void StartEventUI(AActor* CallFunc_GetParentActor_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, AGameEvent* K2Node_DynamicCast_AsGame_Event, bool K2Node_DynamicCast_bSuccess, UHUD_GameEvent_Generic_C* CallFunc_Create_ReturnValue, bool CallFunc_GetShowScoreOnHUD_ReturnValue, bool CallFunc_GetShowTimeOnHUD_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, UBP_HUD_C* K2Node_DynamicCast_AsBP_HUD, bool K2Node_DynamicCast_bSuccess_2);
    void UserConstructionScript(float Angle);
    void AttentionLightTimeLine__FinishedFunc();
    void AttentionLightTimeLine__UpdateFunc();
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void ReceiveBeginPlay();
    void BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnEventFinished(bool eventSuccess);
    void OnEventTriggered();
    void BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Toggle Attention Light(bool InVisible);
    void Recall Key();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EnableGravity();
    void Cheat_FinishEvent();
    void ExecuteUbergraph_BP_RewardFrame(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, USoundBase* Temp_object_Variable, USoundBase* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, FMusicHandle CallFunc_Play_ReturnValue, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, float K2Node_Event_Progress, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool K2Node_Event_eventSuccess, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UDialogDataAsset* Temp_object_Variable_2, UPlayerCharacter* CallFunc_Array_Get_Item, float CallFunc_GetDelayUITime_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, AEventRewardDispenser* K2Node_DynamicCast_AsEvent_Reward_Dispenser, bool K2Node_DynamicCast_bSuccess, AEventRewardDispenser* K2Node_DynamicCast_AsEvent_Reward_Dispenser_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, AEventRewardDispenser* K2Node_DynamicCast_AsEvent_Reward_Dispenser_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_5, AEventRewardDispenser* K2Node_DynamicCast_AsEvent_Reward_Dispenser_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_ComponentBoundEvent_canUse, UPlayerCharacter* CallFunc_GetRandomPlayer_Output, bool CallFunc_HasAuthority_ReturnValue_3, bool K2Node_CustomEvent_InVisible, bool CallFunc_NotEqual_BoolBool_ReturnValue, UDialogDataAsset* Temp_object_Variable_3, float K2Node_Select_Default, bool Temp_bool_Variable_2, UDialogDataAsset* K2Node_Select_Default_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, USoundBase* K2Node_Select_Default_2, FVector CallFunc_GetSocketLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_ReturningPromotionKey_C* CallFunc_FinishSpawningActor_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_4);
}

#endif
