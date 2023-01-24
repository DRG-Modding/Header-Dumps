#ifndef UE4SS_SDK_BP_PickaxeRandomizer_HPP
#define UE4SS_SDK_BP_PickaxeRandomizer_HPP

class ABP_PickaxeRandomizer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_BladeFront;
    class UStaticMeshComponent* Mesh_Shaft;
    class UStaticMeshComponent* Mesh_Pommel;
    class UStaticMeshComponent* Mesh_Head;
    class UStaticMeshComponent* Mesh_Handle;
    class UStaticMeshComponent* Mesh_BladeBack;
    class USceneComponent* Scene;
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesToLoad;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesFront;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesBack;
    TArray<TSoftObjectPtr<UStaticMesh>> Heads;
    TArray<TSoftObjectPtr<UStaticMesh>> Shafts;
    TArray<TSoftObjectPtr<UStaticMesh>> Handles;
    TArray<TSoftObjectPtr<UStaticMesh>> Pommels;
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
    TSoftObjectPtr<UMaterialInstance> ChosenMaterial;

    void SetStaticMesh(class UStaticMeshComponent* MeshComponent, int32 Index);
    void SelectRandomMesh(TArray<TSoftObjectPtr<UStaticMesh>>& Array);
    void ReceiveBeginPlay();
    void Loaded();
    void LoadedMaterial();
    void ExecuteUbergraph_BP_PickaxeRandomizer(int32 EntryPoint);
};

#endif
