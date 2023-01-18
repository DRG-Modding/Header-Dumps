#ifndef UE4SS_SDK_BP_Azure_Flower_Insect_swarm_HPP
#define UE4SS_SDK_BP_Azure_Flower_Insect_swarm_HPP

class ABP_Azure_Flower_Insect_swarm_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* ParticleSystem;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_Flower_Insect_swarm(int32 EntryPoint);
};

#endif
