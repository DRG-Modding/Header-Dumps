#ifndef UE4SS_SDK_BP_PlagueWormPod_HPP
#define UE4SS_SDK_BP_PlagueWormPod_HPP

class ABP_PlagueWormPod_C : public AWormPod
{
    class UNiagaraComponent* NS_Spores;
    class UPointLightComponent* PointLight;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    class UTerrainPlacementComponent* terrainPlacement;

};

#endif
