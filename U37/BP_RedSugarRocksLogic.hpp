#ifndef UE4SS_SDK_BP_RedSugarRocksLogic_HPP
#define UE4SS_SDK_BP_RedSugarRocksLogic_HPP

class UBP_RedSugarRocksLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SugarRushRank;

    FText GetAdditionalText(int32 Rank);
    void StartLogic(int32 Rank);
    void OnHealedFromCrystal();
    void ExecuteUbergraph_BP_RedSugarRocksLogic(int32 EntryPoint);
};

#endif
