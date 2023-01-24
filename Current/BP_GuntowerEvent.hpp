#ifndef UE4SS_SDK_BP_GuntowerEvent_HPP
#define UE4SS_SDK_BP_GuntowerEvent_HPP

class ABP_GuntowerEvent_C : public AGuntowerEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* StarterButton4;
    class UChildActorComponent* StarterButton3;
    class UChildActorComponent* StarterButton2;
    class UChildActorComponent* StarterButton1;
    class UStaticMeshComponent* SM_Pillar_Machine_A2B;
    class UStaticMeshComponent* SM_Pillar_Machine_A1B;
    class UStaticMeshComponent* SM_Pillar_Machine_A0B;
    class UStaticMeshComponent* SM_Pillar_Machine_A2;
    class UStaticMeshComponent* SM_Pillar_Machine_A1;
    class UStaticMeshComponent* SM_Pillar_Machine_A0;
    class UParticleSystemComponent* P_GunTower_Base_Smoke;
    class UChildActorComponent* ActivationPad3;
    class UChildActorComponent* ActivationPad2;
    class UChildActorComponent* ActivationPad1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* StaticMesh;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    TArray<class ABP_GuntowerActivationPlatfrom_C*> ActivationPlatforms;

    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void OnModuleExploded(class AGuntowerModule* explodedModule);
    void OnModulesSpawned();
    void OnEventBooted();
    void ExecuteUbergraph_BP_GuntowerEvent(int32 EntryPoint);
};

#endif
