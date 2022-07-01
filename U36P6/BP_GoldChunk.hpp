#ifndef UE4SS_SDK_BP_GoldChunk_HPP
#define UE4SS_SDK_BP_GoldChunk_HPP

class ABP_GoldChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GoldChunk(int32 EntryPoint);
};

#endif
