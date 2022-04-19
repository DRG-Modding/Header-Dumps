#ifndef UE4SS_SDK_ENE_LootBug_Gold_HPP
#define UE4SS_SDK_ENE_LootBug_Gold_HPP

class AENE_LootBug_Gold_C : public AENE_LootBug_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* ParticleSystem;

    void OnLootBugDeath();
    void ExecuteUbergraph_ENE_LootBug_Gold(int32 EntryPoint);
};

#endif
