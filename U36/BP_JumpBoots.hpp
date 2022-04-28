#ifndef UE4SS_SDK_BP_JumpBoots_HPP
#define UE4SS_SDK_BP_JumpBoots_HPP

class UBP_JumpBoots_C : public USetCooldownPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_JumpBoots(int32 EntryPoint);
};

#endif
