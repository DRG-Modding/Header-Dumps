#ifndef UE4SS_SDK_BP_LaserEventStarter_HPP
#define UE4SS_SDK_BP_LaserEventStarter_HPP

class ABP_LaserEventStarter_C : public AEventStarterButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeshCarverComponent* MeshCarver;
    class UStaticMeshComponent* Beam01_Detail03;
    class UStaticMeshComponent* Beam01;
    class UStaticMeshComponent* Beam01_Detail04;
    class USceneComponent* Beam1;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* LaserWarmUp;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* BatteryInserter;
    class UAudioComponent* LaserSound;
    class UStaticMeshComponent* StaticMesh Laser Beam;
    class USkeletalMeshComponent* SkeletalMesh;
    class UMaterialInstanceDynamic* LightMaterial;
    class AGameEvent* OwningEvent;
    class UParticleSystemComponent* LaserParticles;
    FVector2D OriginalEmissivaValues;
    class UMaterialInstanceDynamic* BatteryMaterial;
    float OriginalBatteryEmissive;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void UsedEffects();
    void UserConstructionScript();
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void OnOpenedForUse(bool wasOpened);
    void OnEventFinished(bool eventSuccess);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserEventStarter(int32 EntryPoint);
};

#endif
