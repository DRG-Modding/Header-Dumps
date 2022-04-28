#ifndef UE4SS_SDK_ESI_InsectSwarm_Spawner_HPP
#define UE4SS_SDK_ESI_InsectSwarm_Spawner_HPP

class AESI_InsectSwarm_Spawner_C : public AEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_InsectSwarm;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ESI_InsectSwarm_Spawner(int32 EntryPoint);
};

#endif
