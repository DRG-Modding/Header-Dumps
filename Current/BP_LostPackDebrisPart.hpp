#ifndef UE4SS_SDK_BP_LostPackDebrisPart_HPP
#define UE4SS_SDK_BP_LostPackDebrisPart_HPP

class ABP_LostPackDebrisPart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* DebrisMesh;
    class USphereComponent* Sphere;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* DefaultSceneRoot;
    int32 Version;

    void OnRep_Version();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LostPackDebrisPart(int32 EntryPoint);
};

#endif
