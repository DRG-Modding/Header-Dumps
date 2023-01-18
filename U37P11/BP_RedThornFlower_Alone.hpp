#ifndef UE4SS_SDK_BP_RedThornFlower_Alone_HPP
#define UE4SS_SDK_BP_RedThornFlower_Alone_HPP

class ABP_RedThornFlower_Alone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* SM_LightCone001;
    class UCapsuleComponent* CapsuleCollision;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_RedVinesFlower_Body_01;
    class UStaticMeshComponent* SM_RedVinesFlower_Head_01;
    class USceneComponent* Flower;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    FRandomStream Random Seed Stream;
    FRotator Spike Direction;
    FVector Spike Origin;
    float Spike Distribution Angle;
    int32 NumSpikes;
    float Spike Origin Height;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
    void ExecuteUbergraph_BP_RedThornFlower_Alone(int32 EntryPoint);
};

#endif
