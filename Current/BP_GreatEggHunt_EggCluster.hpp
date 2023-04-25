#ifndef UE4SS_SDK_BP_GreatEggHunt_EggCluster_HPP
#define UE4SS_SDK_BP_GreatEggHunt_EggCluster_HPP

class ABP_GreatEggHunt_EggCluster_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UTexture*> Textures_Eggs;
    TArray<class UStaticMesh*> Meshes;
    FRandomStream RandomStream;
    int32 RandomSeed;

    void OnRep_RandomSeed();
    void OnRep_UsedTextures();
    void OnRep_UsedMesh();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GreatEggHunt_EggCluster(int32 EntryPoint);
};

#endif
