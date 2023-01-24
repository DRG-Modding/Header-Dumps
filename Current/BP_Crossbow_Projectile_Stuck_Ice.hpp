#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Ice_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Ice_HPP

class ABP_Crossbow_Projectile_Stuck_Ice_C : public ABP_Crossbow_Projectile_Stuck_C
{
    class UNiagaraComponent* EffectParticle;
    class UPointLightComponent* PointLightFire;
    class UCrossbowStuckProjectileEffectApplication* CrossbowStuckProjectileEffectApplication;
    TArray<class AFSDPawn*> Targets;
    bool IgnoreCollission;

};

#endif
