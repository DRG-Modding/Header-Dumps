#ifndef UE4SS_SDK_Grenade_StickyMine_HPP
#define UE4SS_SDK_Grenade_StickyMine_HPP

class AGrenade_StickyMine_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* UseSphere;
    class USingleUsableComponent* SingleUsable;
    class USkeletalMeshComponent* SM_MineGround;
    class UStaticMeshComponent* TriggerAreaDisplay;
    class UExplosionComponent* Explosion;
    class UDamageComponent* Damage;
    class USphereComponent* Sphere;
    float RingPulse_Scale_1486413F4ABF9550B6797DBA3F0A55DB;
    TEnumAsByte<ETimelineDirection::Type> RingPulse__Direction_1486413F4ABF9550B6797DBA3F0A55DB;
    class UTimelineComponent* RingPulse;
    bool Triggered;
    float ArmingDelay;
    bool Armed;
    class USoundCue* ExplosionSound;
    class UParticleSystem* ExplosionParticles;
    class UMaterialInstanceDynamic* TriggerAreaDynamicMat;
    FLinearColor TriggerAreaColor;
    bool Exploded;
    class UMaterialInterface* Not Blinking Dynamic Material;
    int32 MaxExplosions;
    int32 ExplosionCount;
    bool Over;
    class UMaterialInstanceDynamic* GrenadeLightsDynamicMat;
    FLinearColor TriggeredLightsColour;
    float LifespanAfterFirstTrigger;
    bool Dead;

    void OnRep_Dead();
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnRep_Armed();
    void OnRep_Triggered();
    void UserConstructionScript();
    void RingPulse__FinishedFunc();
    void RingPulse__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TriggerExplosion();
    void GetArmed();
    void DoTriggerAreaPulse();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void DisarmMine(class AThrownGrenadeItem* ThrownGrenadeItem);
    void KillMine();
    void ExplodeLast();
    void ExecuteUbergraph_Grenade_StickyMine(int32 EntryPoint);
};

#endif
