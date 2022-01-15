#ifndef UE4SS_SDK_BP_NetFungus_HPP
#define UE4SS_SDK_BP_NetFungus_HPP

class ABP_NetFungus_C : ABP_PassiveFoliage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NetFungus(int32 EntryPoint);
}

#endif
