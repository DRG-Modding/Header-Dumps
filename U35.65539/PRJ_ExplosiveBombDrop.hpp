#ifndef UE4SS_SDK_PRJ_ExplosiveBombDrop_HPP
#define UE4SS_SDK_PRJ_ExplosiveBombDrop_HPP

class APRJ_ExplosiveBombDrop_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UExplosionComponent* Explosion;
    UDamageComponent* Damage;
    UStaticMeshComponent* StaticMesh;
    USoundBase* Impact Sound;
    UParticleSystem* Impact particles;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_ExplosiveBombDrop(int32 EntryPoint, const FTransform CallFunc_GetTransform_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif
