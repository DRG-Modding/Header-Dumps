#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Chemical_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Chemical_HPP

class ABP_Crossbow_Projectile_Stuck_Chemical_C : public ABP_Crossbow_Projectile_Stuck_C
{
    class UNiagaraComponent* ChemicalParticles;
    class UCrossbowStuckProjectileEffectExploding* EffectExploding;
    class UProjectileExplosion* ProjectileExplosion;
    class UDamageComponent* Damage;

    void UserConstructionScript();
};

#endif
