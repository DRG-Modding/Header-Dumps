#ifndef UE4SS_SDK_BP_MarathonGuy_SprintBoost_HPP
#define UE4SS_SDK_BP_MarathonGuy_SprintBoost_HPP

class UBP_MarathonGuy_SprintBoost_C : UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_MarathonGuy_SprintBoost(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
}

#endif