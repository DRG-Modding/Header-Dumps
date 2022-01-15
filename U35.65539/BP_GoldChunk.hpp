#ifndef UE4SS_SDK_BP_GoldChunk_HPP
#define UE4SS_SDK_BP_GoldChunk_HPP

class ABP_GoldChunk_C : UResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh;
    USphereComponent* Sphere;
    UPointLightComponent* PointLight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GoldChunk(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
}

#endif
