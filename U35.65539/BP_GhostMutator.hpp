#ifndef UE4SS_SDK_BP_GhostMutator_HPP
#define UE4SS_SDK_BP_GhostMutator_HPP

class UBP_GhostMutator_C : URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void ExecuteUbergraph_BP_GhostMutator(int32 EntryPoint, FVector CallFunc_GetSpawnPointFromLocation_ReturnValue);
}

#endif
