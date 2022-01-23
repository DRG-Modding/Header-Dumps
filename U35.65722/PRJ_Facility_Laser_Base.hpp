#ifndef UE4SS_SDK_PRJ_Facility_Laser_Base_HPP
#define UE4SS_SDK_PRJ_Facility_Laser_Base_HPP

class APRJ_Facility_Laser_Base_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* Niagara;
    class UParticleSystemComponent* Trail;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* Body;
    class USoundCue* FireSound;
    class USoundCue* ImpactSound;
    class UParticleSystem* ImpactParticles;

    void ReceiveBeginPlay();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_Facility_Laser_Base(int32 EntryPoint, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UFSDPhysicalMaterial* K2Node_DynamicCast_AsFSDPhysical_Material, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, class UFXSystemComponent* CallFunc_SpawnImpactParticlesFromHit_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
};

#endif
