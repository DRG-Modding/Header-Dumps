#ifndef UE4SS_SDK_BP_HollomiteChunk_HPP
#define UE4SS_SDK_BP_HollomiteChunk_HPP

class ABP_HollomiteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HollomiteChunk(int32 EntryPoint);
};

#endif
