#ifndef UE4SS_SDK_BP_MarathonGuy_SprintBoostTime_HPP
#define UE4SS_SDK_BP_MarathonGuy_SprintBoostTime_HPP

class UBP_MarathonGuy_SprintBoostTime_C : public UFloatPerkActivation
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
    void ExecuteUbergraph_BP_MarathonGuy_SprintBoostTime(int32 EntryPoint, class APlayerCharacter* K2Node_Event_character, float K2Node_Event_value);
};

#endif
