#ifndef UE4SS_SDK_AIC_TerminatorTentacle_HPP
#define UE4SS_SDK_AIC_TerminatorTentacle_HPP

class AAIC_TerminatorTentacle_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_TerminatorTentacle_C* tentacle;
    class UBehaviorTree* Behavior;
    bool IsChildOfOtherTentacle;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void SetPaused(bool IsPaused);
    void ExecuteUbergraph_AIC_TerminatorTentacle(int32 EntryPoint);
};

#endif
