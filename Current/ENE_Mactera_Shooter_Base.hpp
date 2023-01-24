#ifndef UE4SS_SDK_ENE_Mactera_Shooter_Base_HPP
#define UE4SS_SDK_ENE_Mactera_Shooter_Base_HPP

class AENE_Mactera_Shooter_Base_C : public AAFlyingBug
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDashPoints* DashPoints;
    class UWeakpointGlowComponent* WeakpointGlowComponent;
    TEnumAsByte<MacteraDeathTypes::Type> DeathType;
    class USoundCue* deathSound;
    class UParticleSystem* ChemExplosionParticles;
    class UAnimMontage* ChemExplosionAnim;

    void FindChemicalArrow(class ABP_Crossbow_Projectile_Stuck_Chemical_C*& ChemcialArrow);
    void GetDeathType(FDamageData& DamageData, const TArray<class UDamageTag*>& Tags, TEnumAsByte<MacteraDeathTypes::Type>& DeathType);
    void SetCookMaterialSettings();
    void SetBurnMaterialSettings();
    void Death_Explode();
    bool ShouldExplode(TArray<class UDamageTag*>& Tags);
    void Death Normal();
    void Death_Weakpoint();
    void OnRep_DeathType();
    void UserConstructionScript();
    void Receive_Alerted();
    void All_PlayAlertedSound();
    void OnFrozen(class AActor* Source);
    void MakeElite();
    void Death_Corrosive();
    void FadeMaterials();
    void OnMessageAI(FName TriggerName);
    void All_BreakLimb(uint8 BoneIndex);
    void Death_Burned();
    void Cooked Death();
    void ReceiveBeginPlay();
    void BndEvt__ENE_Mactera_Shooter_Base_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void Death_ChemicalExplosion();
    void ExecuteUbergraph_ENE_Mactera_Shooter_Base(int32 EntryPoint);
};

#endif
