#ifndef UE4SS_SDK_ESI_Tank_Radioactive_HPP
#define UE4SS_SDK_ESI_Tank_Radioactive_HPP

class AESI_Tank_Radioactive_C : UESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Tank_Radioactive(int32 EntryPoint);
}

#endif
