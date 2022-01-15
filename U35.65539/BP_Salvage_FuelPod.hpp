#ifndef UE4SS_SDK_BP_Salvage_FuelPod_HPP
#define UE4SS_SDK_BP_Salvage_FuelPod_HPP

class ABP_Salvage_FuelPod_C : USalvageFuelPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainScannerStaticMesh* TerrainScannerFuelConnection;
    UTerrainScannerStaticMesh* TerrainScannerPod;
    UWidgetComponent* WidgetActivate;
    UChildActorComponent* FuelLineConnector;
    UTerrainDetectComponent* TerrainDetect;
    UDropToTerrainComponent* DropToTerrain;
    UOxygenSourceComponent* OxygenSource;
    UTerrainPlacementComponent* terrainPlacement;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* FuelCell;
    UAudioComponent* FuelCellCharge_Cue;
    URadarPointComponent* radarPoint;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* DistressSphere;
    USingleUsableComponent* UsableActivate;
    UBoxComponent* Usable;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* Audio1;
    UPathfinderCollisionComponent* PathfinderCollision;
    UOutlineComponent* outline;
    UAutoCarverComponent* AutoCarver;
    float LightIntensity;
    UAudioComponent* DrillAudio;
    bool FuelLineConnected;
    AFuelLineSegment* FirstFuelLineSegment;

    void UpdateDistressSphere(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFailed();
    void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
    void ReceiveBeginPlay();
    void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void SignalFuelLineStart();
    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    void ReceiveFirstFuelLineSegment(UFuelLineSegment* InFirstSegment);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_Salvage_FuelPod(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, float K2Node_Event_DeltaSeconds, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UGameModeBase* CallFunc_GetGameMode_ReturnValue, UGM_Salvage_C* K2Node_DynamicCast_AsGM_Salvage, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_ComponentBoundEvent_progress, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_1, bool K2Node_DynamicCast_bSuccess_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_2, bool K2Node_DynamicCast_bSuccess_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_3, bool K2Node_DynamicCast_bSuccess_4, AFuelLineEndPoint* K2Node_Event_InFuelLine, bool K2Node_ComponentBoundEvent_canUse, TArray<UBP_FuelLine_StartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, UBP_FuelLine_StartPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_InFuelLineStarted, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, UFuelLineSegment* K2Node_Event_InFirstSegment, bool K2Node_ComponentBoundEvent_IsFalling, bool CallFunc_IsValid_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue);
}

#endif
