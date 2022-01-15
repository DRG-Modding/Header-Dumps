#ifndef UE4SS_SDK_BP_ExplodingGooPlant_Puddle_HPP
#define UE4SS_SDK_BP_ExplodingGooPlant_Puddle_HPP

class ABP_ExplodingGooPlant_Puddle_C : AAdicPuddle
{
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USphereComponent* Sphere3;
    USphereComponent* Sphere2;
    USphereComponent* Sphere1;
    USphereComponent* Sphere;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* ParticleSystem;
}

#endif
