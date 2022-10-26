#ifndef UE4SS_SDK_W_TutorialMineGold_HPP
#define UE4SS_SDK_W_TutorialMineGold_HPP

class UW_TutorialMineGold_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;

    void OnShown();
    void UpdateTaskText();
    void ResourceIncreased(class UCappedResource* Resource, float Amount);
    void UpdateResource();
    void ExecuteUbergraph_W_TutorialMineGold(int32 EntryPoint);
};

#endif
