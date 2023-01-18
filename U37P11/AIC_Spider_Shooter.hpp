#ifndef UE4SS_SDK_AIC_Spider_Shooter_HPP
#define UE4SS_SDK_AIC_Spider_Shooter_HPP

class AAIC_Spider_Shooter_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_Shooter(int32 EntryPoint);
};

#endif
