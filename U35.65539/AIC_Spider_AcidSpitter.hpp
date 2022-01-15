#ifndef UE4SS_SDK_AIC_Spider_AcidSpitter_HPP
#define UE4SS_SDK_AIC_Spider_AcidSpitter_HPP

class AAIC_Spider_AcidSpitter_C : UAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_AcidSpitter(int32 EntryPoint, APawn* K2Node_Event_PossessedPawn);
}

#endif
