#ifndef UE4SS_SDK_BP_Azure_VoidBasket_HPP
#define UE4SS_SDK_BP_Azure_VoidBasket_HPP

class ABP_Azure_VoidBasket_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* HollowBall Idle Sound;
    UPointLightComponent* PointLight;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleHealthComponent* SimpleHealth;
    UParticleSystemComponent* P_Flower_HollowBall_lightdust;
    UStaticMeshComponent* SM_LightCone;
    UStaticMeshComponent* SM_HollowBall;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_VoidBasket(int32 EntryPoint, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
