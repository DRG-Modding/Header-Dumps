#ifndef UE4SS_SDK_BP_PhazyoniteChunk_HPP
#define UE4SS_SDK_BP_PhazyoniteChunk_HPP

class ABP_PhazyoniteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PhazyoniteChunk(int32 EntryPoint);
};

#endif
