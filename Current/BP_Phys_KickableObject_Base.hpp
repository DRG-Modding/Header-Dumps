#ifndef UE4SS_SDK_BP_Phys_KickableObject_Base_HPP
#define UE4SS_SDK_BP_Phys_KickableObject_Base_HPP

class ABP_Phys_KickableObject_Base_C : public AFSDPhysicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class UStaticMeshComponent* StaticMesh;
    class USimpleHealthComponent* SimpleHealth;
    class UCapsuleComponent* UseCapsule_ForKicking;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    class APlayerCharacter* KickedBy;
    float KickStrength;
    float DamageImpulseStrength;
    class UAnimMontage* KickMontage;
    class USoundBase* KickSound;
    class USoundBase* ImpactSound;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;
    float ImpactSoundCoolDown;

    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void destroy();
    void Play_Kick(class APlayerCharacter* Kicker);
    void Spawn Bronzehead Effects();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_7_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_8_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void SpawnKickSound();
    void ExecuteUbergraph_BP_Phys_KickableObject_Base(int32 EntryPoint);
};

#endif
