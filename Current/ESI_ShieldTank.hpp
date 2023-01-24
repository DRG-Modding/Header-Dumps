#ifndef UE4SS_SDK_ESI_ShieldTank_HPP
#define UE4SS_SDK_ESI_ShieldTank_HPP

class AESI_ShieldTank_C : public AESI_Spider_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ESI_ShieldTank(int32 EntryPoint);
};

#endif
