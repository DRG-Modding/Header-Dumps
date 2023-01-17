#ifndef UE4SS_SDK_ITM_Grenade_HE_Base_HPP
#define UE4SS_SDK_ITM_Grenade_HE_Base_HPP

class AITM_Grenade_HE_Base_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class UExplosionComponent* Explosion;
    class UParticleSystem* ExplosionParticles;
    class USoundBase* ExplosionSound;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void ExecuteUbergraph_ITM_Grenade_HE_Base(int32 EntryPoint);
};

#endif
