#ifndef UE4SS_SDK_AIC_Spider_Hoarder_HPP
#define UE4SS_SDK_AIC_Spider_Hoarder_HPP

class AAIC_Spider_Hoarder_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Hoarder(int32 EntryPoint);
};

#endif
