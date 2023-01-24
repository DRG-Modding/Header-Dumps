#ifndef UE4SS_SDK_BP_Azure_VoidBasket_HPP
#define UE4SS_SDK_BP_Azure_VoidBasket_HPP

class ABP_Azure_VoidBasket_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* HollowBall Idle Sound;
    class UPointLightComponent* PointLight;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleHealthComponent* SimpleHealth;
    class UParticleSystemComponent* P_Flower_HollowBall_lightdust;
    class UStaticMeshComponent* SM_LightCone;
    class UStaticMeshComponent* SM_HollowBall;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Azure_VoidBasket(int32 EntryPoint);
};

#endif
