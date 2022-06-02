#ifndef UE4SS_SDK_BP_Extractor_Shell_HPP
#define UE4SS_SDK_BP_Extractor_Shell_HPP

class UBP_Extractor_Shell_C : public UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Release();
    void ExecuteUbergraph_BP_Extractor_Shell(int32 EntryPoint);
};

#endif
