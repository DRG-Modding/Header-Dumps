#ifndef UE4SS_SDK_ITM_TopBar_PlayerRank_HPP
#define UE4SS_SDK_ITM_TopBar_PlayerRank_HPP

class UITM_TopBar_PlayerRank_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UTextBlock* DataRank;
    class UBorder* ICON_BG;
    class UBorder* Icon_Center;
    class UBorder* Icon_Left;
    class UBorder* Icon_Right;
    class UBorder* Icon_Top;
    int32 NewVar_0;

    void FromPlayerState(class APlayerState* PlayerState);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetRankAndStars(int32 Rank, int32 Stars);
    void OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, FPlayerProgress Progress);
    void ExecuteUbergraph_ITM_TopBar_PlayerRank(int32 EntryPoint);
};

#endif
