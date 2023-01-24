#ifndef UE4SS_SDK_BP_OilShaleChunk_HPP
#define UE4SS_SDK_BP_OilShaleChunk_HPP

class ABP_OilShaleChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OilShaleChunk(int32 EntryPoint);
};

#endif
