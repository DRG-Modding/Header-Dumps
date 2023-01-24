#ifndef UE4SS_SDK_Grenade_BouncyPlasma_HPP
#define UE4SS_SDK_Grenade_BouncyPlasma_HPP

class AGrenade_BouncyPlasma_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    int32 ExplosionCount;
    int32 MaxExplosions;
    float ConcecutiveExplosionsDelay;
    bool Exploded;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnRep_ExplosionCount();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void TriggerExplosion();
    void HideGrenade();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Grenade_BouncyPlasma(int32 EntryPoint);
};

#endif
