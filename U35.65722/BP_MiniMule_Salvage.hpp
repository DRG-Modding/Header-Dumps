#ifndef UE4SS_SDK_BP_MiniMule_Salvage_HPP
#define UE4SS_SDK_BP_MiniMule_Salvage_HPP

class ABP_MiniMule_Salvage_C : public AMiniMule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DistressSphere;
    class UAudioComponent* DistressCall;
    class UAudioComponent* AudioScanning;
    class USphereComponent* TutorialTrigger;
    class UBP_Tutorial_Hint_BrokenMiniMule_C* BP_Tutorial_Hint_BrokenMiniMule;
    class UParticleSystemComponent* P_MiniMuleScanner_Activated;
    class USingleUsableComponent* UsableScan;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UWidgetComponent* BuildWidget;
    class UOutlineComponent* outline;
    class UPointLightComponent* Needs RepairPointLight;
    class URepairableUsable* UsableAttachLegs;
    class UBoxComponent* ImpactBox;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* FrontLight;
    class USingleUsableComponent* UsableRepair;
    class USphereComponent* EnemyTrigger;
    class UPointLightComponent* PointLight;
    class UActorTrackingComponent* ActorTracking;
    class UBoxComponent* Box;
    class URepairableComponent* repairable;
    float Sphere_Timeline_Alpha_F8822EE14FEEA3F10146E8A0CB21A6AE;
    float Sphere_Timeline_Scale_F8822EE14FEEA3F10146E8A0CB21A6AE;
    TEnumAsByte<ETimelineDirection::Type> Sphere_Timeline__Direction_F8822EE14FEEA3F10146E8A0CB21A6AE;
    class UTimelineComponent* Sphere Timeline;
    float Intensity_Intensity_5AC148CB47D091780A7015BD47B62D4E;
    TEnumAsByte<ETimelineDirection::Type> Intensity__Direction_5AC148CB47D091780A7015BD47B62D4E;
    class UTimelineComponent* Intensity;
    class UMaterialInstanceDynamic* Sphere Material;
    float DistressLightIntensity ;
    TArray<FName> Legs;
    TMap<UResourceData*, int32> ResourcesToGive;
    FRandRange CraftingMaterialAmount;
    class UFSDAchievement* MiniMuleFixerAchievement;
    bool DetectingLostLegs;
    FName ControlledKeyName;
    class ABP_DropPod_Base_C* TargetDropPod;

    void GetNeedsLegs(bool& OutNeedsLegs);
    void Set Detect Lost Legs(bool InDetect, TArray<class ABP_MuleLeg_C*> AllLegs, class ABP_MuleLeg_C* MuleLeg, int32 count, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, TArray<class ABP_MuleLeg_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_MuleLeg_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void PlayDistressAudio(bool CarryingLeg, class APlayerCharacter* Character, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCarriedItem_ReturnValue, float Temp_float_Variable, class ABP_MuleLeg_C* K2Node_DynamicCast_AsBP_Mule_Leg, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable_1, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default);
    void TryDestroyComponent(class UActorComponent* Component, bool CallFunc_IsValid_ReturnValue);
    void GetState(TEnumAsByte<MiniMule_State::Type>& NewParam, FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, uint8 CallFunc_GetValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
    void SetState(TEnumAsByte<MiniMule_State::Type> EnumValue, bool CallFunc_HasAuthority_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
    void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Sphere Timeline__FinishedFunc();
    void Sphere Timeline__UpdateFunc();
    void Intensity__FinishedFunc();
    void Intensity__UpdateFunc();
    void GotoDropPod(class ABP_DropPod_Base_C* DropPod);
    void Cheat_TeleportPlayer();
    void ReceiveBeginPlay();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Stop Beacon();
    void Cheat_Repair(class APlayerCharacter* User);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnMessageAI(FName TriggerName);
    void OnFallToTerrainStateChanged(bool IsFalling);
    void OnLegsSetVisible();
    void BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse);
    void PingFX();
    void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature(float Progress);
    void SetControlledByDropShip(bool Control);
    void OnRep_IsDown();
    void ExecuteUbergraph_BP_MiniMule_Salvage(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, class ABP_DropPod_Base_C* K2Node_CustomEvent_Droppod, class AController* CallFunc_GetController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, TEnumAsByte<MiniMule_State::Type> CallFunc_GetState_NewParam, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key_2, class UEWC_Salvage_Ambush_C* CallFunc_TriggerWave_ReturnValue, bool CallFunc_TryRepair_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class APlayerCharacter* K2Node_CustomEvent_User, class URepairableComponent* K2Node_ComponentBoundEvent_Component_2, class URepairableComponent* K2Node_ComponentBoundEvent_Component_1, class URepairableComponent* K2Node_ComponentBoundEvent_Component, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, TArray<class UResourceData*>& CallFunc_Map_Keys_Keys, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FResourceSpawner CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UCappedResource* CallFunc_GetResource_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Add_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, bool CallFunc_TryRepair_ReturnValue_1, FName K2Node_Event_triggerName, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsBoneHiddenByName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool K2Node_CustomEvent_IsFalling, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UResourceData* CallFunc_Array_Get_Item_1, class UCappedResource* CallFunc_GetResource_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_5, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_HasAuthority_ReturnValue_6, bool K2Node_ComponentBoundEvent_canUse, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_ComponentBoundEvent_progress, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_7, bool K2Node_Event_Control, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FVector CallFunc_GetDonkeyReturnPickupLocation_ReturnValue, FExecuteUbergraph_BP_MiniMule_SalvageK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AAIController* CallFunc_GetAIController_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_MiniMule_C* K2Node_DynamicCast_AsABP_Mini_Mule, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_Vector_Forward_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_RotateAngleAxis_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_SnapToGrid_ReturnValue);
};

#endif
