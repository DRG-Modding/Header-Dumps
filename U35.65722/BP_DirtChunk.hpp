#ifndef UE4SS_SDK_BP_DirtChunk_HPP
#define UE4SS_SDK_BP_DirtChunk_HPP

class ABP_DirtChunk_C : public AResourceChunk
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USphereComponent* Sphere;

    void SetMaterial(class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class UMaterialInstance* CallFunc_Array_GetRandom_Item);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DirtChunk(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue);
};

#endif
