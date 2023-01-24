#ifndef UE4SS_SDK_BP_BismorChunk_HPP
#define UE4SS_SDK_BP_BismorChunk_HPP

class ABP_BismorChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BismorChunk(int32 EntryPoint);
};

#endif
