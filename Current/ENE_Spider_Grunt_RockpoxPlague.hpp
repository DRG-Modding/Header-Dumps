#ifndef UE4SS_SDK_ENE_Spider_Grunt_RockpoxPlague_HPP
#define UE4SS_SDK_ENE_Spider_Grunt_RockpoxPlague_HPP

class AENE_Spider_Grunt_RockpoxPlague_C : public AENE_Spider_Grunt_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileThrowerAttack* ProjectileThrowerAttack;
    class UBillboardComponent* ProjectileOrigin;
    class UAudioComponent* PlagueInfectedGlyphidIdle_Cue;
    class UStaticMeshComponent* InfectionPoint8;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UMeleeAttackComponent* MeleeAttackComponent;
    class UInfectionMasterComponent* InfectionMaster;
    class UStaticMeshComponent* InfectionPoint9;
    class UStaticMeshComponent* InfectionPoint7;
    class UStaticMeshComponent* InfectionPoint6;
    class UStaticMeshComponent* InfectionPoint5;
    class UStaticMeshComponent* InfectionPoint3;
    class UStaticMeshComponent* InfectionPoint2;
    class UStaticMeshComponent* InfectionPoint1;
    int32 InfectionPointsDestroyed;
    int32 InfectionPoints;
    TSubclassOf<class UStatusEffect> DeathDoTSTE;
    TSubclassOf<class UStatusEffect> InfectionSTE;
    TSubclassOf<class AActor> AcidCloudClass;

    void BndEvt__ENE_Spider_Grunt_TentacleInfection_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void ReceiveBeginPlay();
    void PopAllWeakPoints(class UHealthComponentBase* HealthComponent);
    void DeathDetailedBase(float Amount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void ExecuteUbergraph_ENE_Spider_Grunt_RockpoxPlague(int32 EntryPoint);
};

#endif
