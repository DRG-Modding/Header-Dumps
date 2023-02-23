#ifndef UE4SS_SDK_BP_ExpertDepositorLogic_HPP
#define UE4SS_SDK_BP_ExpertDepositorLogic_HPP

class UBP_ExpertDepositorLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 MollyEffectRank1;
    class AMolly* Molly;
    float MinDistance;
    int32 MollyEffectRank2;
    TSubclassOf<class UStatusEffect> StatusEffect;
    bool InRange;
    class AFSDMiningHead* MineHead;
    class AFSDRefinery* Refinery;
    class ATeamTransport* DropPod;

    void CheckInRange(const class AActor* OtherActor);
    FText GetAdditionalText(int32 Rank);
    void StartLogic(int32 Rank);
    void CheckMollyDistance();
    void Try start logic();
    void ExecuteUbergraph_BP_ExpertDepositorLogic(int32 EntryPoint);
};

#endif
