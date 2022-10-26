#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Fire_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_Fire_HPP

class ABP_Crossbow_Projectile_Stuck_Fire_C : public ABP_Crossbow_Projectile_Stuck_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* EffectParticle;
    class USphereComponent* FlammableCollision;
    class UCrossbowStuckProjectileEffectApplication* CrossbowStuckProjectileEffectApplication;
    TArray<class AFSDPawn*> Targets;
    bool IgnoreCollission;

    void BndEvt__PRJ_Crossbow_FireProjectile_FlammableCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Crossbow_Projectile_Stuck_Fire(int32 EntryPoint);
};

#endif
