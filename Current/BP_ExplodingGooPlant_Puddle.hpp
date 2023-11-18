#ifndef UE4SS_SDK_BP_ExplodingGooPlant_Puddle_HPP
#define UE4SS_SDK_BP_ExplodingGooPlant_Puddle_HPP

class ABP_ExplodingGooPlant_Puddle_C : public AAdicPuddle
{
    class UBoxComponent* BoxTrigger;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* ParticleSystem;

    void UserConstructionScript();
};

#endif
