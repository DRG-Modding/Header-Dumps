#ifndef UE4SS_SDK_BP_UmaniteChunk_HPP
#define UE4SS_SDK_BP_UmaniteChunk_HPP

class ABP_UmaniteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_UmaniteChunk(int32 EntryPoint);
};

#endif
