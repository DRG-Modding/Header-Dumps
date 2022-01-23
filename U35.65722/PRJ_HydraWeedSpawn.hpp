#ifndef UE4SS_SDK_PRJ_HydraWeedSpawn_HPP
#define UE4SS_SDK_PRJ_HydraWeedSpawn_HPP

class APRJ_HydraWeedSpawn_C : public AHydraWeedSpawnProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class UParticleSystemComponent* ParticleSystem;
    class UParticleSystem* SeedImpactParticles;
    class USoundBase* SeedImpactSound;

    bool NewFunction_0(float NewDistance, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue);
    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_HydraWeedSpawn(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

#endif
