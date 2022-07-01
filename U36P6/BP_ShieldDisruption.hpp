#ifndef UE4SS_SDK_BP_ShieldDisruption_HPP
#define UE4SS_SDK_BP_ShieldDisruption_HPP

class UBP_ShieldDisruption_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void PlayerSpawned(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_BP_ShieldDisruption(int32 EntryPoint);
};

#endif
