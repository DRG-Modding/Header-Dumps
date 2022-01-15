#ifndef UE4SS_SDK_ESI_Tank_HPP
#define UE4SS_SDK_ESI_Tank_HPP

class AESI_Tank_C : UESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Tank(int32 EntryPoint);
}

#endif
