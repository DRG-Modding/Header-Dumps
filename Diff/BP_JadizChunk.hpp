#ifndef UE4SS_SDK_BP_JadizChunk_HPP
#define UE4SS_SDK_BP_JadizChunk_HPP

class ABP_JadizChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_JadizChunk(int32 EntryPoint);
};

#endif
