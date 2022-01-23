#ifndef UE4SS_SDK_BP_RedSugarChunk_HPP
#define UE4SS_SDK_BP_RedSugarChunk_HPP

class ABP_RedSugarChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RedSugarChunk(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
};

#endif
