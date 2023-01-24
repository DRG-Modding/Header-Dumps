#ifndef UE4SS_SDK_ESI_Tank_Rock_HPP
#define UE4SS_SDK_ESI_Tank_Rock_HPP

class AESI_Tank_Rock_C : public AESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_Tank_Rock(int32 EntryPoint);
};

#endif
