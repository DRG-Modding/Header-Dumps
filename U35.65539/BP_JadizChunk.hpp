#ifndef UE4SS_SDK_BP_JadizChunk_HPP
#define UE4SS_SDK_BP_JadizChunk_HPP

class ABP_JadizChunk_C : UResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Cube;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_JadizChunk(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
}

#endif