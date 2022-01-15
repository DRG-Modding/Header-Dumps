#ifndef UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP
#define UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP

class APRJ_Spider_Tank_Boss_Eggshot_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    URotatingMovementComponent* RotatingMovement;
    UStaticMeshComponent* Mesh_Egg;
    UDamageComponent* Damage;
    UProjectileExplosion* ProjectileExplosion;
    UParticleSystemComponent* Particle_Smoke;
    UAudioComponent* Audio;
    UPointLightComponent* PointLight;
    UEnemyDescriptor* EnemyToSpawn;
    int32 SpawnAmount;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
}

#endif
