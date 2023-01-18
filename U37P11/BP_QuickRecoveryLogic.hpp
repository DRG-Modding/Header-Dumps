#ifndef UE4SS_SDK_BP_QuickRecoveryLogic_HPP
#define UE4SS_SDK_BP_QuickRecoveryLogic_HPP

class UBP_QuickRecoveryLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DisperseEnemiesRank;
    float DispersionRadius;
    bool FoundAliveEnemies;

    FText GetAdditionalText(int32 Rank);
    void StartLogic(int32 Rank);
    void RevivedOther();
    void PlayFleeEffect();
    void ExecuteUbergraph_BP_QuickRecoveryLogic(int32 EntryPoint);
};

#endif
