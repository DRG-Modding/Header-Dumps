#ifndef UE4SS_SDK_PRJ_Spider_Boss_Heavy_FireballBallistics_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Heavy_FireballBallistics_HPP

class APRJ_Spider_Boss_Heavy_FireballBallistics_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* ParticleComponent;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;
    float LightIntensity;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Spider_Boss_Heavy_FireballBallistics(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
};

#endif
