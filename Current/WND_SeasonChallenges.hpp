#ifndef UE4SS_SDK_WND_SeasonChallenges_HPP
#define UE4SS_SDK_WND_SeasonChallenges_HPP

class UWND_SeasonChallenges_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UGridPanel* Grid_Challenges;
    class UITM_Season_ChallengeTimer_C* ChallengeTimer;

    void OnNewChallenge();
    void AddChallengeToGrid(FChallengeInfo ChallengeInfo, bool CanReroll, int32 Column, class UITM_Season_Challenge_C*& W_Challenge);
    void OnReroll(class UITM_Season_Challenge_C* W_Challenge);
    void PreConstruct(bool IsDesignTime);
    void Refresh();
    void ExecuteUbergraph_WND_SeasonChallenges(int32 EntryPoint);
};

#endif
