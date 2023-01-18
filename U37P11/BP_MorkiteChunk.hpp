#ifndef UE4SS_SDK_BP_MorkiteChunk_HPP
#define UE4SS_SDK_BP_MorkiteChunk_HPP

class ABP_MorkiteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MorkiteChunk(int32 EntryPoint);
};

#endif
