#ifndef UE4SS_SDK_BP_NitraChunk_HPP
#define UE4SS_SDK_BP_NitraChunk_HPP

class ABP_NitraChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NitraChunk(int32 EntryPoint);
};

#endif
