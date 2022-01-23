#ifndef UE4SS_SDK_PRJ_Grenade_StickySmall_HPP
#define UE4SS_SDK_PRJ_Grenade_StickySmall_HPP

class APRJ_Grenade_StickySmall_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UExplosionComponent* Explosion;
    class UDamageComponent* BoomDamage;
    class UDamageComponent* SpikeDamage;
    class URotatingMovementComponent* RotatingMovement;
    class UParticleSystemComponent* Trail;
    class UStaticMeshComponent* mesh_front;
    float ExplosionDelay;
    class USoundBase* ExplosionSound;
    class UParticleSystem* ExplosionParticles;
    FTimerHandle BeepTimer;
    class AActor* StickyTarget;
    class UPrimitiveComponent* StickyTargetHitComponent;
    class USoundMix* ExplosionMixModifier;
    float ExplosionDuckingTime;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;
    FStickeyAttach StickyAttach;

    void OnRep_Stick(bool CallFunc_HasAuthority_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ReceiveBeginPlay();
    void Boom();
    void Beep();
    void ExecuteUbergraph_PRJ_Grenade_StickySmall(int32 EntryPoint, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, FExecuteUbergraph_PRJ_Grenade_StickySmallK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FStickeyAttach K2Node_MakeStruct_StickeyAttach, bool CallFunc_K2_AttachToComponent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1);
};

#endif
