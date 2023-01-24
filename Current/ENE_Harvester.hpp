#ifndef UE4SS_SDK_ENE_Harvester_HPP
#define UE4SS_SDK_ENE_Harvester_HPP

class AENE_Harvester_C : public ADeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEnemyComponent* enemy;
    class UBoxComponent* PlayerRideCollision;
    class UBoxComponent* Box;
    class UParticleSystemComponent* P_Harvesting_A;
    class USimpleHealthComponent* SimpleHealth;
    class UAudioComponent* audio;
    class UOutlineComponent* outline;
    class UParticleSystem* DeathParticle;
    float PlayerBeginRideTime;
    int32 EnemiesKilled;
    class UFSDAchievement* FarmerAchievement;
    class UFSDAchievement* CarPoolAchievement;

    void OnRep_Moving();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDamagedEnemy(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    void ExecuteUbergraph_ENE_Harvester(int32 EntryPoint);
};

#endif
