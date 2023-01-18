#ifndef UE4SS_SDK_BP_DreadnoughtEgg_HPP
#define UE4SS_SDK_BP_DreadnoughtEgg_HPP

class ABP_DreadnoughtEgg_C : public ABP_SpiderEgg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UBillboardComponent* BranchCarver2;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBillboardComponent* BranchCArver3;
    class UStaticMeshComponent* OrganicMaterialExtra3;
    class UStaticMeshComponent* OrganicMaterialExtra2;
    class UStaticMeshComponent* OrganicMaterialExtra1;
    class UBillboardComponent* BranchCarver1;
    class UStaticMeshComponent* OrganicMaterialCarver;
    class UAudioComponent* audio;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Carver;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* EggWhole;
    float LightIntensity_NewTrack_0_9A4595314256D1AF580CF3A2C59CC406;
    TEnumAsByte<ETimelineDirection::Type> LightIntensity__Direction_9A4595314256D1AF580CF3A2C59CC406;
    class UTimelineComponent* LightIntensity;
    TArray<class AFSDPawn*> spawnedEnemies;

    void Carve();
    void LightIntensity__FinishedFunc();
    void LightIntensity__UpdateFunc();
    void OnEggBroken();
    void ReceiveBeginPlay();
    void OnMatchStarted();
    void SpawnCustom();
    void spawned(class APawn* enemy);
    void SpawnedTwins(class APawn* enemy);
    void Cheat_Break();
    void ExecuteUbergraph_BP_DreadnoughtEgg(int32 EntryPoint);
};

#endif
