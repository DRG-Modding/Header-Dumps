#ifndef UE4SS_SDK_ESI_InsectSwarm_Spawner_HPP
#define UE4SS_SDK_ESI_InsectSwarm_Spawner_HPP

class AESI_InsectSwarm_Spawner_C : UEnemyShowroomItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_InsectSwarm;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ESI_InsectSwarm_Spawner(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
}

#endif
