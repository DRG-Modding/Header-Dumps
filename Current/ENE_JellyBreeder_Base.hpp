#ifndef UE4SS_SDK_ENE_JellyBreeder_Base_HPP
#define UE4SS_SDK_ENE_JellyBreeder_Base_HPP

class AENE_JellyBreeder_Base_C : public AJellyBreeder
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UAudioComponent* JellyBreederDeath_Cue;
    class UAudioComponent* JellyBreederIdle_Cue;
    class UImpactComponent* Impact;
    class UPhysicalAnimationComponent* PhysicalAnimation;
    TArray<FName> BoneNames;
    FName Profile;
    FVector Location;
    float Emission Multiplier;
    float EmissionFlash;
    int32 EmissionID;
    class UFXSystemAsset* deathParticles;

    void SpawnDeathParticles();
    void ToggleBonePhysics(bool BonePhysics);
    void ReceiveBeginPlay();
    void StartFizzle();
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BreedModeFlipped(bool aIsLayingEggs);
    void BndEvt__ENE_JellyBreeder_HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void BndEvt__ENE_JellyBreeder_Base_FrozenImpact_K2Node_ComponentBoundEvent_1_Delegate__DelegateSignature();
    void ExecuteUbergraph_ENE_JellyBreeder_Base(int32 EntryPoint);
};

#endif
