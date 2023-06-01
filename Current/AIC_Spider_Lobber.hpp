#ifndef UE4SS_SDK_AIC_Spider_Lobber_HPP
#define UE4SS_SDK_AIC_Spider_Lobber_HPP

class AAIC_Spider_Lobber_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_Lobber(int32 EntryPoint);
};

#endif
