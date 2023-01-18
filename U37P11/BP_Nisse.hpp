#ifndef UE4SS_SDK_BP_Nisse_HPP
#define UE4SS_SDK_BP_Nisse_HPP

class ABP_Nisse_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SK_Sideburns_Rig_A_Braided;
    class UNiagaraComponent* NS_Xmas_Nisse_SnowTrail;
    class USkeletalMeshComponent* SK_Vanity_Beard006_Prospector;
    class USkeletalMeshComponent* SK_Moustache_Rig_A_003;
    class UParticleSystemComponent* Trail;
    class UAudioComponent* AudioScaredLoop;
    class USceneComponent* NisseSpawnPoint;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SK_Xmas_CandyCane_01;
    class UStaticMeshComponent* DropShadow;
    class UCapsuleComponent* Capsule;
    class UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker;
    class UEnemyComponent* enemy;
    class UPawnSensingComponent* PawnSensing;
    class UOutlineComponent* outline;
    class UPawnStatsComponent* PawnStats;
    class USkeletalMeshComponent* SK_Vanity_Head002;
    class USkeletalMeshComponent* SK_Vanity_Head001;
    FTimerHandle RunTimer;
    float RunSpeedMod;

    void UserConstructionScript();
    void BndEvt__BP_Nisse_PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void ResetRunTimer();
    void TimerElapsed();
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_2_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__BP_Nisse_HealthComponent_K2Node_ComponentBoundEvent_3_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_BP_Nisse(int32 EntryPoint);
};

#endif
