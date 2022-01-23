#ifndef UE4SS_SDK_PRJ_InfectedMuleGrenade_HPP
#define UE4SS_SDK_PRJ_InfectedMuleGrenade_HPP

class APRJ_InfectedMuleGrenade_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Range;
    class UAudioComponent* InfectedMuleGrenadeAlarm;
    class UDamageComponent* Damage;
    class UExplosionComponent* Explosion;
    class UStaticMeshComponent* StaticMesh;
    bool HasExploaded;
    float TimeToExplode;
    class UParticleSystem* ExplosionParticles;
    class USoundBase* ExplosionSound;

    void OnRep_HasExploaded(bool CallFunc_HasAuthority_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void ReceiveBeginPlay();
    void Delayed Sine();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_PRJ_InfectedMuleGrenade(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, const FHitResult K2Node_ComponentBoundEvent_ImpactResult, const FVector K2Node_ComponentBoundEvent_ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class ADeepCSGSection* K2Node_DynamicCast_AsDeep_CSGSection, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
