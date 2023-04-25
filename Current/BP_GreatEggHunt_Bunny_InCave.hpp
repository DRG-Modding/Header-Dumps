#ifndef UE4SS_SDK_BP_GreatEggHunt_Bunny_InCave_HPP
#define UE4SS_SDK_BP_GreatEggHunt_Bunny_InCave_HPP

class ABP_GreatEggHunt_Bunny_InCave_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* BunnyAlarmedEnd;
    class UAudioComponent* BunnyScaredStart;
    class UFSDAudioComponent* BunnyIdle;
    class UPointLightComponent* PointLight1;
    class UNiagaraComponent* NS_Bunny_Trail;
    class UParticleSystemComponent* Trail;
    class USceneComponent* NisseSpawnPoint;
    class UStaticMeshComponent* DropShadow;
    class UCapsuleComponent* Capsule;
    class UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UOutlineComponent* outline;
    class UPawnStatsComponent* PawnStats;
    FTimerHandle RunTimer;
    float RunSpeedMod;

    void BndEvt__BP_Nisse_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void ResetRunTimer();
    void TimerElapsed();
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_2_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GreatEggHunt_Bunny_InCave(int32 EntryPoint);
};

#endif
