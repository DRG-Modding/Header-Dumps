#ifndef UE4SS_SDK_BP_Tentacle_Part_HPP
#define UE4SS_SDK_BP_Tentacle_Part_HPP

class ABP_Tentacle_Part_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMesh*> Meshes;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Tentacle_Part(int32 EntryPoint);
};

#endif
