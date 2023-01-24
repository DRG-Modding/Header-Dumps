#ifndef UE4SS_SDK_BP_CroppaChunk_HPP
#define UE4SS_SDK_BP_CroppaChunk_HPP

class ABP_CroppaChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CroppaChunk(int32 EntryPoint);
};

#endif
