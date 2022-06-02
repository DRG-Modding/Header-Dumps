#ifndef UE4SS_SDK_BP_QuantriteChunk_HPP
#define UE4SS_SDK_BP_QuantriteChunk_HPP

class ABP_QuantriteChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_QuantriteChunk(int32 EntryPoint);
};

#endif
