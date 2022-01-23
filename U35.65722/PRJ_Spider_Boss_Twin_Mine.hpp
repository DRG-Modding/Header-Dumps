#ifndef UE4SS_SDK_PRJ_Spider_Boss_Twin_Mine_HPP
#define UE4SS_SDK_PRJ_Spider_Boss_Twin_Mine_HPP

class APRJ_Spider_Boss_Twin_Mine_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_Twins_Mine_Trail;
    class UAudioComponent* Twin_B_ProjectileBarrage_Cue;
    class UStaticMeshComponent* Mesh_Range_hidden;
    class UDamageComponent* Damage;
    class UFirstPersonStaticMeshComponent* ProjectileMesh;
    class UPointLightComponent* AreaLight;
    FPRJ_Spider_Boss_Twin_Mine_CNewEventDispatcher_0_0 NewEventDispatcher_0_0;
    void NewEventDispatcher_0_0();
    bool HasExploded;
    class UParticleSystem* Explosion Particles;
    class USoundBase* ExplosionSound;
    float TimeToExplode;
    class USoundBase* ImpactSound;
    class USoundBase* WarningLoopCue;

    void OnRep_HasExploded(bool CallFunc_HasAuthority_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void All_Impact(FVector_NetQuantize Location);
    void ExecuteUbergraph_PRJ_Spider_Boss_Twin_Mine(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_HasAuthority_ReturnValue_1, FVector_NetQuantize K2Node_CustomEvent_Location, FHitResult CallFunc_MakeHitResult_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
    void NewEventDispatcher_0_0__DelegateSignature();
};

#endif
