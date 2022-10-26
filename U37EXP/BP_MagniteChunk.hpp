#ifndef UE4SS_SDK_BP_MagniteChunk_HPP
#define UE4SS_SDK_BP_MagniteChunk_HPP

class ABP_MagniteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MagniteChunk(int32 EntryPoint);
};

#endif
