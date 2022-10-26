#ifndef UE4SS_SDK_Grenade_Incendiary_HPP
#define UE4SS_SDK_Grenade_Incendiary_HPP

class AGrenade_Incendiary_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    class UAreaSpawnerComponent* AreaSpawner;
    float Radius;
    class UParticleSystem* TriggerEffect;
    class USoundCue* TriggerSound;

    void SpawnFireOnGround();
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DoCustomExplosion();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Grenade_Incendiary(int32 EntryPoint);
};

#endif
