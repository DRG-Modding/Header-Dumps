#ifndef UE4SS_SDK_BP_DirtChunk_HPP
#define UE4SS_SDK_BP_DirtChunk_HPP

class ABP_DirtChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USphereComponent* Sphere;

    void SetMaterial();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DirtChunk(int32 EntryPoint);
};

#endif
