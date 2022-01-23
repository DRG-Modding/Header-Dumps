#ifndef UE4SS_SDK_PRJ_MicroMissile_HPP
#define UE4SS_SDK_PRJ_MicroMissile_HPP

class APRJ_MicroMissile_C : public AProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Particle_Exhaust;
    class UParticleSystemComponent* Particle_Exhaust_HighVelocity;
    class UPointLightComponent* Light_DistanceIndicator;
    class UPointLightComponent* Light_Exhaust;
    class UParticleSystemComponent* Particle_Trail;
    class UPointLightComponent* UnstableFuelMixIndicator;
    class UAudioComponent* MicroMissileProjectileLoop_Cue;
    class UStaticMeshComponent* MeshRocket;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;
    float Timeline_0_Brightness_243709694A5DDD44F4F9208FBF929C26;
    float Timeline_0_Height_243709694A5DDD44F4F9208FBF929C26;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_243709694A5DDD44F4F9208FBF929C26;
    class UTimelineComponent* Timeline_0;
    float TimeToTarget;
    bool HasNitroglycerinCompound;
    float MaxLifetime;
    float CurrentLifetime;
    bool HasBuckOC;
    bool NoHoming;
    float DeltaSeconds;
    bool BlinkStarted;
    float BlinkInterval;
    bool IsAlive;
    float HomingDelayAmount;
    float NitroglycerinDamageIncrease;
    int32 NitroglycerinMaxIncreaseTicks;

    void StopMissile();
    void IncreaseDamage(float CallFunc_Add_FloatFloat_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void UnstableFuelMixUpdate();
    void StartLightIntensityIncrease();
    void StartBlink();
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void TurnUpLightIndicator();
    void OnInitialized();
    void CountSeconds();
    void Explode(const FHitResult& HitResult);
    void Impact(const FHitResult& HitResult);
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_MicroMissile(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UProjectileUpgradeElement* K2Node_Event_element, bool CallFunc_ElementOf_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_ElementOf_ReturnValue_1, bool CallFunc_ElementOf_ReturnValue_2, bool CallFunc_ElementOf_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FExecuteUbergraph_PRJ_MicroMissileK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const FHitResult K2Node_CustomEvent_HitResult_1, const FHitResult K2Node_CustomEvent_HitResult, FExecuteUbergraph_PRJ_MicroMissileK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_PRJ_MicroMissileK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

#endif
