#ifndef UE4SS_SDK_BP_LowGravity_HPP
#define UE4SS_SDK_BP_LowGravity_HPP

class UBP_LowGravity_C : public URunningMissionBP
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLogic();
    void ExecuteUbergraph_BP_LowGravity(int32 EntryPoint);
};

#endif
