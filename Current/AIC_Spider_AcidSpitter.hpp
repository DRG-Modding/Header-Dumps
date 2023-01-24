#ifndef UE4SS_SDK_AIC_Spider_AcidSpitter_HPP
#define UE4SS_SDK_AIC_Spider_AcidSpitter_HPP

class AAIC_Spider_AcidSpitter_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_AcidSpitter(int32 EntryPoint);
};

#endif
