#ifndef UE4SS_SDK_BP_ImpactCompensators_HPP
#define UE4SS_SDK_BP_ImpactCompensators_HPP

class UBP_ImpactCompensators_C : public USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_ImpactCompensators(int32 EntryPoint);
};

#endif
