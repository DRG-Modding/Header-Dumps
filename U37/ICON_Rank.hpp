#ifndef UE4SS_SDK_ICON_Rank_HPP
#define UE4SS_SDK_ICON_Rank_HPP

class UICON_Rank_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataRank;
    class UBorder* ICON_BG;
    class UBorder* Icon_Center;
    class UBorder* Icon_Left;
    class UBorder* Icon_Right;
    class UBorder* Icon_Top;
    class UImage* RankIcon;
    bool HideBorder;
    bool ShowIcon;

    void Construct();
    void Update(class AFSDPlayerState* PlayerState);
    void PreConstruct(bool IsDesignTime);
    void SetRankAndStars(int32 Rank, int32 Stars);
    void ExecuteUbergraph_ICON_Rank(int32 EntryPoint);
};

#endif
