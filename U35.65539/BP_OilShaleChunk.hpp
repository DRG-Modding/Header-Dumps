#ifndef UE4SS_SDK_BP_OilShaleChunk_HPP
#define UE4SS_SDK_BP_OilShaleChunk_HPP

class ABP_OilShaleChunk_C : UResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OilShaleChunk(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
}

#endif