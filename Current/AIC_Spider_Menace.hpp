#ifndef UE4SS_SDK_AIC_Spider_Menace_HPP
#define UE4SS_SDK_AIC_Spider_Menace_HPP

class AAIC_Spider_Menace_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ExecuteUbergraph_AIC_Spider_Menace(int32 EntryPoint);
};

#endif
