#ifndef UE4SS_SDK_ITM_Grenade_Base_HPP
#define UE4SS_SDK_ITM_Grenade_Base_HPP

class AITM_Grenade_Base_C : public AGrenade
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_GrenadeTrail;
    class UUpgradableGearComponent* UpgradableGear;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class APlayerCharacter* Character;
    class UDialogDataAsset* Grenade warning;
    float GrenadeLifetimeAfterExplosion;
    float DebugRadius;
    class UParticleSystem* DelayedDestructionParticles;
    float InViewTime;
    float InitialAngularVelocityScale;
    class USoundMix* ExplosionMixModifier;
    float ExplosionDuckingTime;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;
    class UDialogDataAsset* OutOfGrenadesShout;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    float GetCooldownTime();
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void OnExploded();
    void OnBeginPlay();
    void ExecuteUbergraph_ITM_Grenade_Base(int32 EntryPoint);
};

#endif
