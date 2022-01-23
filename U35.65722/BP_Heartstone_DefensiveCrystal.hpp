#ifndef UE4SS_SDK_BP_Heartstone_DefensiveCrystal_HPP
#define UE4SS_SDK_BP_Heartstone_DefensiveCrystal_HPP

class ABP_Heartstone_DefensiveCrystal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* FillLight;
    class UPointLightComponent* PointLight;
    class UTerrainDetectComponent* TerrainDetect3;
    class UAudioComponent* AudioChargeUp;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* AudioGrow;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* Spike_SM;
    class UTerrainDetectComponent* TerrainDetect2;
    class UAudioComponent* AudioBeam;
    class UStaticMeshComponent* Beam;
    class USceneComponent* BeamRoot;
    class UBillboardComponent* AttackOrigin;
    class UDamageComponent* Damage;
    class USceneComponent* DefaultSceneRoot;
    float GrowLight_SoundVolume_AB5D1D304F66D83F8F0760B4A43F79FC;
    float GrowLight_LightIntensity_AB5D1D304F66D83F8F0760B4A43F79FC;
    TEnumAsByte<ETimelineDirection::Type> GrowLight__Direction_AB5D1D304F66D83F8F0760B4A43F79FC;
    class UTimelineComponent* GrowLight;
    class AActor* JEB;
    FTimerHandle DamageTimer;
    bool IsAttackingJEB;
    float LightIntensity;
    class ABP_EscortDestination_C* Heartstone;
    bool FinishedCarving;
    bool DoGrow;
    int32 NumPointsRemoved;
    float LightStartIntensity;
    FVector LaserImpactLocation;
    class UParticleSystemComponent* LaserImpactParticles;

    void OnRep_NumPointsRemoved(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDestroyed_isDestoyed);
    void IsDestroyed(bool& isDestoyed, bool CallFunc_Less_IntInt_ReturnValue);
    void OnRep_DoGrow();
    void OnRep_FinishedCarving();
    void OnRep_IsAttackingJEB();
    void CheckLOStoJEB(bool& HaveLOStoJEB, const TArray<class AActor*>& Temp_object_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void GrowLight__FinishedFunc();
    void GrowLight__UpdateFunc();
    void ReceiveBeginPlay();
    void CheckIfCanAttackJEB();
    void DamageJEB();
    void Grow();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void TurnOnBeamDamage();
    void MoveMesh();
    void ShootBeam();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ReceiveDestroyed();
    void StopBeam();
    void DisableBeamer();
    void ExecuteUbergraph_BP_Heartstone_DefensiveCrystal(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FExecuteUbergraph_BP_Heartstone_DefensiveCrystalK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue_4, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckLOStoJEB_HaveLOStoJEB, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_EscortDestination_C* CallFunc_GetActorOfClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_MakeLiteralFloat_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetPlayersInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class ABP_EscortMule_C* CallFunc_GetActorOfClass_ReturnValue_1, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsDestroyed_isDestoyed, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDestroyed_isDestoyed_1, bool CallFunc_IsDestroyed_isDestoyed_2);
};

#endif
