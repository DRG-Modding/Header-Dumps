#ifndef UE4SS_SDK_BP_TreasureBox_HPP
#define UE4SS_SDK_BP_TreasureBox_HPP

class ABP_TreasureBox_C : public ATreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* UseBox;
    class UBoxComponent* Box;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UAudioComponent* ChestIdle_Cue;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* LightCone;
    class USpotLightComponent* SpotLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UParticleSystemComponent* P_TreasureChest_HolloStreaks;
    class USceneComponent* Minerals Spawn Point;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* BackPlane;
    float TurnDownLight_NewTrack_0_1A0AF79145F35FAD9E2421B320EBDF90;
    TEnumAsByte<ETimelineDirection::Type> TurnDownLight__Direction_1A0AF79145F35FAD9E2421B320EBDF90;
    class UTimelineComponent* TurnDownLight;
    float TurnUpLight_NewTrack_0_7FB98785445BF3786932D7B67BEC0DF8;
    TEnumAsByte<ETimelineDirection::Type> TurnUpLight__Direction_7FB98785445BF3786932D7B67BEC0DF8;
    class UTimelineComponent* TurnUpLight;
    float Grow_Hologram_Y_9A21ED754CE563FC34120DB5BCEE177C;
    float Grow_Hologram_X_9A21ED754CE563FC34120DB5BCEE177C;
    float Grow_Hologram_Z_9A21ED754CE563FC34120DB5BCEE177C;
    TEnumAsByte<ETimelineDirection::Type> Grow_Hologram__Direction_9A21ED754CE563FC34120DB5BCEE177C;
    class UTimelineComponent* Grow Hologram;
    class UParticleSystem* ActivatedParticles;
    class USoundCue* ActivatedSound;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkValueRange;
    FVector2D ChunkCountRange;
    TArray<class UResourceData*> ResourceTypes;
    int32 ResourcesToSpawn;
    bool Hammered;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FColor InsertedBatteriesColor;
    FColor OpenedColor;
    class UAudioComponent* IdleSound;
    bool BatteryInserted;

    void OnRep_BatteryInserted();
    void GetTotalTimePlayed(int32& TotalTimePlayed, class UGameData* CallFunc_GetFSDGameData_ReturnValue, float CallFunc_GetStatCountTotal_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
    void OnRep_Hammered(FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue);
    void Grow Hologram__FinishedFunc();
    void Grow Hologram__UpdateFunc();
    void TurnUpLight__FinishedFunc();
    void TurnUpLight__UpdateFunc();
    void TurnDownLight__FinishedFunc();
    void TurnDownLight__UpdateFunc();
    void OnNotifyEnd_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnNotifyBegin_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnInterrupted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnBlendOut_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void OnCompleted_4D05B8034ED2139CE2AAD8BD828BDF32(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_4_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void SpawnChunks();
    void SetupLoop();
    void BndEvt__HammeringUsable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__CollectUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__RepairUsable_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnLocalPlayerCollectedTreasure(class APlayerCharacter* Player);
    void OnDisableChestLocally();
    void All_PlayMusic();
    void Cheat_ForceRepair();
    void Cheat_ForceHammer();
    void ExecuteUbergraph_BP_TreasureBox(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_1, FExecuteUbergraph_BP_TreasureBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName, FExecuteUbergraph_BP_TreasureBoxK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FName Temp_name_Variable, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URepairableComponent* K2Node_ComponentBoundEvent_Component_2, class URepairableComponent* K2Node_ComponentBoundEvent_Component_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user_3, EInputKeys K2Node_ComponentBoundEvent_key_3, int32 CallFunc_GetResourcesRequired_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_TryRepair_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class URepairableComponent* K2Node_ComponentBoundEvent_Component, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, FName K2Node_CustomEvent_NotifyName_2, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_RandomFloatInRange_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UResourceData* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_1, FResourceSpawner CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, FExecuteUbergraph_BP_TreasureBoxK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_3, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FExecuteUbergraph_BP_TreasureBoxK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FVector CallFunc_Add_VectorVector_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, class APlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key_2, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FExecuteUbergraph_BP_TreasureBoxK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, int32 CallFunc_GetTotalTimePlayed_TotalTimePlayed, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_3, int32 CallFunc_GetTotalTimePlayed_TotalTimePlayed_1, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_5, int32 CallFunc_GetTotalTimePlayed_TotalTimePlayed_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerCharacter* K2Node_Event_player, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_Lerp_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsPlayInEditor_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_4, FVector CallFunc_MakeVector_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_7, FVector CallFunc_Multiply_VectorFloat_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_6, class AResourceChunk* CallFunc_SpawnResource_ReturnValue);
};

#endif
