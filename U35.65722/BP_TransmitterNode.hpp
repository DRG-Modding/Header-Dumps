#ifndef UE4SS_SDK_BP_TransmitterNode_HPP
#define UE4SS_SDK_BP_TransmitterNode_HPP

class ABP_TransmitterNode_C : public ATether
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* TetherConnectionCollider;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* TetherCreateConnection_Cue;
    class UAudioComponent* TetherIdle_Cue;
    class UTetherComponent* Tether;
    class UStaticMeshComponent* RangeSphere;
    class UTerrainDetectComponent* TerrainDetect;
    FVector throwForce;
    float ConnectionDelay;
    bool Disabled;
    bool HasDeployed;
    float RangeScaleConversion;
    float HackingPower;
    bool KillInitalized;
    class APlayerCharacter* holder;
    FVector OldLocation;
    bool RangeIndicatorVisible;

    void OnRep_RangeIndicatorVisible(bool CallFunc_Not_PreBool_ReturnValue);
    void InitKill(bool CallFunc_HasAuthority_ReturnValue);
    void OnRep_KillInitalized();
    void OnRep_HackingPower();
    void DropAndThrowForce(FVector throwForce, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carry_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carry_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__PysicalCollision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Throw(FVector force);
    void TryConnecting();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_5_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_6_TetherConnectionChanged_Deletage__DelegateSignature(class UTetherComponent* frontConnection, class UTetherComponent* backConnection);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_7_TeherMessage_Delegate__DelegateSignature(const FName& Message);
    void destroy();
    void OnDroneDrop();
    void OnDronePickup();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_8_PointRemovedEvent__DelegateSignature();
    void StartDetection();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_2_TetherRangeChanged__DelegateSignature(float range);
    void Cheat_Kill();
    void EnablePhys();
    void ExecuteUbergraph_BP_TransmitterNode(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_PickupItem_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FRotator CallFunc_MakeRotFromZ_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, FVector K2Node_Event_force, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ConnectToTetherLine_ReturnValue, bool K2Node_ComponentBoundEvent_hasPower, class UTetherComponent* K2Node_ComponentBoundEvent_frontConnection, class UTetherComponent* K2Node_ComponentBoundEvent_backConnection, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEndOfLine_ReturnValue, FVector CallFunc_GetConnectionPoint_ReturnValue, bool CallFunc_IsEndOfLine_ReturnValue_1, const FName K2Node_ComponentBoundEvent_message, bool K2Node_SwitchName_CmpSuccess, FVector CallFunc_GetSocketLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class UDialogDataAsset* Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_GetConnectionPoint_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool Temp_bool_Has_Been_Initd_Variable, class UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, const TArray<class AActor*>& Temp_object_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, float K2Node_ComponentBoundEvent_range, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess_1, FRotator CallFunc_GetBaseAimRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool Temp_bool_Variable, class UDialogDataAsset* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Vector_DistanceSquared_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue_2, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_HasAuthority_ReturnValue_6, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4);
};

#endif
