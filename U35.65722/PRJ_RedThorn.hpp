#ifndef UE4SS_SDK_PRJ_RedThorn_HPP
#define UE4SS_SDK_PRJ_RedThorn_HPP

class APRJ_RedThorn_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UParticleSystemComponent* P_CactusSpikeTrail1;
    class UStaticMeshComponent* SM_CactusSpikeProjectile;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_RedThorn(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UHealthComponentBase* Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class ITargetable> K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess_1, class UHealthComponentBase* CallFunc_GetTargetHealthComponent_ReturnValue);
};

#endif
