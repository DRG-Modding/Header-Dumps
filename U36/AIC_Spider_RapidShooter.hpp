#ifndef UE4SS_SDK_AIC_Spider_RapidShooter_HPP
#define UE4SS_SDK_AIC_Spider_RapidShooter_HPP

class AAIC_Spider_RapidShooter_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_RapidShooter(int32 EntryPoint);
};

#endif
