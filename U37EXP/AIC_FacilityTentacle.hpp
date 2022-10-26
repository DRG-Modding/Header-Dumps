#ifndef UE4SS_SDK_AIC_FacilityTentacle_HPP
#define UE4SS_SDK_AIC_FacilityTentacle_HPP

class AAIC_FacilityTentacle_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_FacilityTentacle_C* Tentacle;
    class UBehaviorTree* Behavior;
    bool IsChildOfOtherTentacle;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void SetPaused(bool IsPaused);
    void ExecuteUbergraph_AIC_FacilityTentacle(int32 EntryPoint);
};

#endif
