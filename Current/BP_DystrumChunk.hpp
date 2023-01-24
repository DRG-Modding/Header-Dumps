#ifndef UE4SS_SDK_BP_DystrumChunk_HPP
#define UE4SS_SDK_BP_DystrumChunk_HPP

class ABP_DystrumChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DystrumChunk(int32 EntryPoint);
};

#endif
