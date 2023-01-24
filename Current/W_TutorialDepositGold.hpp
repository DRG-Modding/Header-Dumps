#ifndef UE4SS_SDK_W_TutorialDepositGold_HPP
#define UE4SS_SDK_W_TutorialDepositGold_HPP

class UW_TutorialDepositGold_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    float StartAmount;

    void OnShown();
    void UpdateText();
    void FinishedDepositing(class UResourceBank* ResourceBank);
    void ExecuteUbergraph_W_TutorialDepositGold(int32 EntryPoint);
};

#endif
