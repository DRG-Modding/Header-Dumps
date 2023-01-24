#ifndef UE4SS_SDK_BP_Crossbow_PheromoneAttackerPositioning_HPP
#define UE4SS_SDK_BP_Crossbow_PheromoneAttackerPositioning_HPP

class UBP_Crossbow_PheromoneAttackerPositioning_C : public UBP_PheromoneAttackerPositioning_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Crossbow_PheromoneAttackerPositioning(int32 EntryPoint);
};

#endif
