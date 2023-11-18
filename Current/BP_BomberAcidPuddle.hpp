#ifndef UE4SS_SDK_BP_BomberAcidPuddle_HPP
#define UE4SS_SDK_BP_BomberAcidPuddle_HPP

class ABP_BomberAcidPuddle_C : public AAdicPuddle
{
    class UBoxComponent* BoxTrigger;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere4;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class UParticleSystemComponent* ParticleSystem;

    void UserConstructionScript();
};

#endif
