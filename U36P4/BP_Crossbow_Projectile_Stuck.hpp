#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_HPP

class ABP_Crossbow_Projectile_Stuck_C : public ACrossbowProjectileStuck
{
    class UOutlineComponent* outline;
    class USphereComponent* LaserCollision;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box1;
    class UPointLightComponent* PointLight1;
    class UNiagaraComponent* BansheePulse1;
    class USphereComponent* UseableTrigger1;
    class UStaticMeshComponent* Mesh_Front;
    class UTerrainDetectComponent* TerrainDetect;
    class UInstantUsable* InstantUsable;
    float LightIntensity_Point;
    float LightIntensity_Spot;

    void UserConstructionScript();
};

#endif
