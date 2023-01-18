#ifndef UE4SS_SDK_BP_MarathonGuy_SprintBoost_HPP
#define UE4SS_SDK_BP_MarathonGuy_SprintBoost_HPP

class UBP_MarathonGuy_SprintBoost_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_MarathonGuy_SprintBoost(int32 EntryPoint);
};

#endif
