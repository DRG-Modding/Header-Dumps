#ifndef UE4SS_SDK_BP_Crossbow_Projectile_Stuck_HPP
#define UE4SS_SDK_BP_Crossbow_Projectile_Stuck_HPP

class ABP_Crossbow_Projectile_Stuck_C : public ACrossbowProjectileStuck
{
    class UBP_RecallableArrow_Component_C* BP_RecallableArrow_Component;
    class UBP_BansheeModule_Component_C* BP_BansheeModule_Component;
    class UOutlineComponent* outline;
    class USphereComponent* LaserCollision;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box1;
    class UPointLightComponent* PointLight1;
    class UNiagaraComponent* BansheePulse;
    class USphereComponent* UseableTrigger1;
    class UStaticMeshComponent* mesh_front;
    class UTerrainDetectComponent* TerrainDetect;
    class UInstantUsable* InstantUsable;
    float LightIntensity_Point;
    float LightIntensity_Spot;

    void UserConstructionScript();
};

#endif
