#ifndef UE4SS_SDK_BP_Salvage_FuelPod_HPP
#define UE4SS_SDK_BP_Salvage_FuelPod_HPP

class ABP_Salvage_FuelPod_C : public ASalvageFuelPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainScannerStaticMesh* TerrainScannerFuelConnection;
    class UTerrainScannerStaticMesh* TerrainScannerPod;
    class UWidgetComponent* WidgetActivate;
    class UChildActorComponent* FuelLineConnector;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UOxygenSourceComponent* OxygenSource;
    class UTerrainPlacementComponent* terrainPlacement;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* FuelCell;
    class UAudioComponent* FuelCellCharge_Cue;
    class URadarPointComponent* radarPoint;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* DistressSphere;
    class USingleUsableComponent* UsableActivate;
    class UBoxComponent* Usable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* Audio1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    float LightIntensity;
    class UAudioComponent* DrillAudio;
    bool FuelLineConnected;
    class AFuelLineSegment* FirstFuelLineSegment;

    void UpdateDistressSphere(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFailed();
    void ReceiveFuelLineConnected(class AFuelLineEndPoint* InFuelLine);
    void ReceiveBeginPlay();
    void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void SignalFuelLineStart();
    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    void ReceiveFirstFuelLineSegment(class AFuelLineSegment* InFirstSegment);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_Salvage_FuelPod(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, float K2Node_Event_DeltaSeconds, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGM_Salvage_C* K2Node_DynamicCast_AsGM_Salvage, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_ComponentBoundEvent_progress, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_1, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_2, bool K2Node_DynamicCast_bSuccess_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UABP_FuelCell_C* K2Node_DynamicCast_AsABP_Fuel_Cell_3, bool K2Node_DynamicCast_bSuccess_4, class AFuelLineEndPoint* K2Node_Event_InFuelLine, bool K2Node_ComponentBoundEvent_canUse, TArray<class ABP_FuelLine_StartPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_FuelLine_StartPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_InFuelLineStarted, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, class AFuelLineSegment* K2Node_Event_InFirstSegment, bool K2Node_ComponentBoundEvent_IsFalling, bool CallFunc_IsValid_ReturnValue_2, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue);
};

#endif
