#ifndef UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP
#define UE4SS_SDK_PRJ_Spider_Tank_Boss_Eggshot_HPP

class APRJ_Spider_Tank_Boss_Eggshot_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* Mesh_Egg;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* Particle_Smoke;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;
    class UEnemyDescriptor* EnemyToSpawn;
    int32 SpawnAmount;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Tank_Boss_Eggshot(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
};

#endif
