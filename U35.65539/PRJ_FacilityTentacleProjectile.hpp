#ifndef UE4SS_SDK_PRJ_FacilityTentacleProjectile_HPP
#define UE4SS_SDK_PRJ_FacilityTentacleProjectile_HPP

class APRJ_FacilityTentacleProjectile_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNiagaraComponent* Niagara;
    UDamageComponent* Damage;
    USoundCue* FireSound;
    USoundCue* ImpactSound;
    UParticleSystem* ImpactParticles;

    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_FacilityTentacleProjectile(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
}

#endif
