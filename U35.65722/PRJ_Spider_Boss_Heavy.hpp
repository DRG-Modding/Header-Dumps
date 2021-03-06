#ifndef UE4SS_SDK_PRJ_Spider_Boss_Heavy_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Heavy_HPP

class APRJ_Spider_Boss_Heavy_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class URotatingMovementComponent* RotatingMovement;
    class UDamageComponent* Damage;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    float MaxLevitation;
    float GravityScale;
    FRotator RotationRate;

    void OnRep_RotationRate();
    void OnRep_GravityScale();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_Spider_Boss_Heavy(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_Vector_Normal2D_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, const TArray<class AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_SelectFloat_ReturnValue);
};

#endif
