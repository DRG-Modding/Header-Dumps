#ifndef UE4SS_SDK_BP_OxygenRich_HPP
#define UE4SS_SDK_BP_OxygenRich_HPP

class UBP_OxygenRich_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_OxygenRich(int32 EntryPoint);
};

#endif
