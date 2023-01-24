#ifndef UE4SS_SDK_BP_EnorChunk_HPP
#define UE4SS_SDK_BP_EnorChunk_HPP

class ABP_EnorChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_EnorChunk(int32 EntryPoint);
};

#endif
