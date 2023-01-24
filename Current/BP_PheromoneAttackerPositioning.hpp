#ifndef UE4SS_SDK_BP_PheromoneAttackerPositioning_HPP
#define UE4SS_SDK_BP_PheromoneAttackerPositioning_HPP

class UBP_PheromoneAttackerPositioning_C : public UEnemyAttackerPositioningComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void OnHit_Event_0(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ExecuteUbergraph_BP_PheromoneAttackerPositioning(int32 EntryPoint);
};

#endif
