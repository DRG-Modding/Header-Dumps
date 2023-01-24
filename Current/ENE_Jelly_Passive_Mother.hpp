#ifndef UE4SS_SDK_ENE_Jelly_Passive_Mother_HPP
#define UE4SS_SDK_ENE_Jelly_Passive_Mother_HPP

class AENE_Jelly_Passive_Mother_C : public AENE_Jelly_Passive_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class UBoxComponent* Box1;

    void OnDeath();
    void ExecuteUbergraph_ENE_Jelly_Passive_Mother(int32 EntryPoint);
};

#endif
