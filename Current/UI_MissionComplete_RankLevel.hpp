#ifndef UE4SS_SDK_UI_MissionComplete_RankLevel_HPP
#define UE4SS_SDK_UI_MissionComplete_RankLevel_HPP

class UUI_MissionComplete_RankLevel_C : public UMissionPlayerAndCharacterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BorderBottom;
    class UImage* BorderCenter;
    class UImage* BorderTop;
    class UICON_Rank_C* ICON_Rank_C_0;
    class UImage* Image_0;
    class UTextBlock* TextBlock_Level;
    class UProgressBar* XP_bar;
    FUI_MissionComplete_RankLevel_CCounterAnimFinished CounterAnimFinished;
    void CounterAnimFinished();
    float StartTime;

    void SetBorderColor(FLinearColor InColorAndOpacity);
    void SetRankStarsAndLevel(int32 Rank, int32 Stars, int32 Level, float LevelProgress);
    void PreConstruct(bool IsDesignTime);
    void Begin(class AFSDPlayerState* PlayerState);
    void Finish(class AFSDPlayerState* PlayerState);
    void PingPlayerRank();
    void UpdateValues(int32 PlayerRank, int32 PlayerStars, int32 CharacterLevel, float CharacterProgress);
    void PingCharacterLevel(int32 Level, int32 Stars);
    void Start Counter(FPlayerProgress PlayerProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressStart, FCharacterProgress CharacterProgressFinish);
    void ExecuteUbergraph_UI_MissionComplete_RankLevel(int32 EntryPoint);
    void CounterAnimFinished__DelegateSignature();
};

#endif
