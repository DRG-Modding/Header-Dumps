#ifndef UE4SS_SDK_AIC_InsectSwarm_HPP
#define UE4SS_SDK_AIC_InsectSwarm_HPP

class AAIC_InsectSwarm_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName IsAlertedKey;

    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_InsectSwarm(int32 EntryPoint);
};

#endif
