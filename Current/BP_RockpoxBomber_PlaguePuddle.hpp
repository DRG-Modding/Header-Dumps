#ifndef UE4SS_SDK_BP_RockpoxBomber_PlaguePuddle_HPP
#define UE4SS_SDK_BP_RockpoxBomber_PlaguePuddle_HPP

class ABP_RockpoxBomber_PlaguePuddle_C : public AAdicPuddle
{
    class UBoxComponent* BoxTrigger;
    class UNiagaraComponent* NS_Plague_Goo_Puddle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere4;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class UParticleSystemComponent* ParticleSystem;

    void UserConstructionScript();
};

#endif
