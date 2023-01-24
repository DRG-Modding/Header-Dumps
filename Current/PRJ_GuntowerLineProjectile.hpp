#ifndef UE4SS_SDK_PRJ_GuntowerLineProjectile_HPP
#define UE4SS_SDK_PRJ_GuntowerLineProjectile_HPP

class APRJ_GuntowerLineProjectile_C : public AGuntowerLineProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GunTowerLineProjectile_Cue;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* HitparticleSystem;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnLineDestroy_Event_0(FHitResult Result);
    void ExecuteUbergraph_PRJ_GuntowerLineProjectile(int32 EntryPoint);
};

#endif
