#ifndef UE4SS_SDK_BP_PlagueWormPod_HPP
#define UE4SS_SDK_BP_PlagueWormPod_HPP

class ABP_PlagueWormPod_C : public AWormPod
{
    class UEnemyComponent* enemy;
    class UNiagaraComponent* NS_Plague_WormPod_Burst;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* NS_Spores;
    class USkeletalMeshComponent* SK_Plague_WormBall_01;
    class UOutlineComponent* outline;
    class UTerrainPlacementComponent* terrainPlacement;

};

#endif
