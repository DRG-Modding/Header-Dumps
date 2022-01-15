#ifndef UE4SS_SDK_BP_DirtChunk_HPP
#define UE4SS_SDK_BP_DirtChunk_HPP

class ABP_DirtChunk_C : UResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh;
    USphereComponent* Sphere;

    void SetMaterial(AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, UMaterialInstance* CallFunc_Array_GetRandom_Item);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DirtChunk(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
}

#endif
