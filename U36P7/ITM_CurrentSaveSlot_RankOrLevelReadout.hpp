#ifndef UE4SS_SDK_ITM_CurrentSaveSlot_RankOrLevelReadout_HPP
#define UE4SS_SDK_ITM_CurrentSaveSlot_RankOrLevelReadout_HPP

class UITM_CurrentSaveSlot_RankOrLevelReadout_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CharacterLevel;
    class UImage* Icon;
    class UImage* Icon_1;
    class USizeBox* LevelHolder;
    class USizeBox* RankHolder;
    bool ToggleRankOrLevel;
    FText Text;

    void SetRankOrLevelIcon(bool Condition);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_CurrentSaveSlot_RankOrLevelReadout(int32 EntryPoint);
};

#endif
