#ifndef UE4SS_SDK_Grenade_Freeze_HPP
#define UE4SS_SDK_Grenade_Freeze_HPP

class AGrenade_Freeze_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    class UParticleSystem* TriggerEffect;
    class USoundCue* TriggerSound;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Grenade_Freeze(int32 EntryPoint);
};

#endif
