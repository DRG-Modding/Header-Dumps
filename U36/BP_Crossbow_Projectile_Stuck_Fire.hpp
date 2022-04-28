#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Fire_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Fire_HPP

class ABP_Crossbow_Projectile_Stuck_Fire_C : public ABP_Crossbow_Projectile_Stuck_C
{
    class UNiagaraComponent* EffectParticle;
    class UCrossbowStuckProjectileEffectApplication* CrossbowStuckProjectileEffectApplication;
    TArray<class AFSDPawn*> Targets;
    bool IgnoreCollission;

};

#endif
