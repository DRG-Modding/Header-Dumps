#ifndef UE4SS_SDK_PRJ_Crossbow_Projectile_HPP
#define UE4SS_SDK_PRJ_Crossbow_Projectile_HPP

class APRJ_Crossbow_Projectile_C : public ACrossbowProjectileBase
{
    class UBP_RecallableArrow_Component_C* BP_RecallableArrow_Component;
    class UBP_BansheeModule_Component_C* BP_BansheeModule_Component;
    class UBP_RicochetArrow_Component_C* BP_RicochetArrow_Component;
    class UBP_MagneticArrow_Component_C* BP_MagneticArrow_Component;
    class UPointLightComponent* PointLight;
    class USceneComponent* HomingTarget;
    class UNiagaraComponent* BansheePulse;
    class UNiagaraComponent* NS_Trail;
    class USphereComponent* UseableCollision;
    class UParticleSystemComponent* P_Crossbow_Trail;
    class UInstantUsable* InstantUsable;
    class UDamageComponent* Damage;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* mesh_front;
    class UBoxComponent* Box;

};

#endif
