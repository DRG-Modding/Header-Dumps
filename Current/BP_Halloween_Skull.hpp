#ifndef UE4SS_SDK_BP_Halloween_Skull_HPP
#define UE4SS_SDK_BP_Halloween_Skull_HPP

class ABP_Halloween_Skull_C : public AHalloweenSkull
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USphereComponent* ColdSphere_Close;
    class USphereComponent* ColdSphere_Far;
    class UPointLightComponent* PointLight_Far;
    class UStatusEffectTriggerComponent* ColdStatusEffectTrigger_Close;
    class UStatusEffectTriggerComponent* ColdStatusEffectTrigger_Far;
    class UNiagaraComponent* NS_Fire_SkullFlame_WS;
    class USphereComponent* Sphere;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UPawnStatsComponent* PawnStats;
    class UFSDAudioComponent* AudioLoop;
    class UNiagaraComponent* NS_Fire_SkullFlame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Flame01;
    float Timeline_0_Scale_7E993DAF452B4981CFEA5EB3782B00C8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7E993DAF452B4981CFEA5EB3782B00C8;
    class UTimelineComponent* Timeline_0;
    float ScaleUpFlames_Scale_CB5B71854578ACB0C2D4FE8EA4D7C476;
    TEnumAsByte<ETimelineDirection::Type> ScaleUpFlames__Direction_CB5B71854578ACB0C2D4FE8EA4D7C476;
    class UTimelineComponent* ScaleUpFlames;
    float RunSpeedMod;
    FTimerHandle RunTimer;
    float LastMoveSpeed;
    float AudioUpdateTime;

    void UserConstructionScript();
    void ScaleUpFlames__FinishedFunc();
    void ScaleUpFlames__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_Nisse_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void TimerElapsed();
    void ResetRunTimer();
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_2_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__BP_Halloween_Skull_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ReceiveBeginPlay();
    void OnJawClosed();
    void UpdateSpeedForAudio();
    void ExecuteUbergraph_BP_Halloween_Skull(int32 EntryPoint);
};

#endif
