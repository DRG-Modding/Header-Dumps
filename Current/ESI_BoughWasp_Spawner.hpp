#ifndef UE4SS_SDK_ESI_BoughWasp_Spawner_HPP
#define UE4SS_SDK_ESI_BoughWasp_Spawner_HPP

class AESI_BoughWasp_Spawner_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HollowboughWaspNest_02;
    class UParticleSystemComponent* P_InsectSwarm;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ESI_BoughWasp_Spawner(int32 EntryPoint);
};

#endif
