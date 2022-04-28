#ifndef UE4SS_SDK_BP_HackerJunk_Base_HPP
#define UE4SS_SDK_BP_HackerJunk_Base_HPP

class ABP_HackerJunk_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* BoxCollision;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMesh*> Meshes;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HackerJunk_Base(int32 EntryPoint);
};

#endif
