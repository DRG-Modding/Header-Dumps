#ifndef UE4SS_SDK_BP_IronChunk_HPP
#define UE4SS_SDK_BP_IronChunk_HPP

class ABP_IronChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_IronChunk(int32 EntryPoint);
};

#endif
