#ifndef UE4SS_SDK_ESI_Tank_Ice_HPP
#define UE4SS_SDK_ESI_Tank_Ice_HPP

class AESI_Tank_Ice_C : UESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Tank_Ice(int32 EntryPoint);
}

#endif
