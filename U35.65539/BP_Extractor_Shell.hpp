#ifndef UE4SS_SDK_BP_Extractor_Shell_HPP
#define UE4SS_SDK_BP_Extractor_Shell_HPP

class UBP_Extractor_Shell_C : UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Release();
    void ExecuteUbergraph_BP_Extractor_Shell(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1);
}

#endif
