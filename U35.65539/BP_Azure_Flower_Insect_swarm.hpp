#ifndef UE4SS_SDK_BP_Azure_Flower_Insect_swarm_HPP
#define UE4SS_SDK_BP_Azure_Flower_Insect_swarm_HPP

class ABP_Azure_Flower_Insect_swarm_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* ParticleSystem;
    UPointLightComponent* PointLight;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_Flower_Insect_swarm(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
