#ifndef UE4SS_SDK_BP_DashActivation_HPP
#define UE4SS_SDK_BP_DashActivation_HPP

class UBP_DashActivation_C : public USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_DashActivation(int32 EntryPoint);
};

#endif
