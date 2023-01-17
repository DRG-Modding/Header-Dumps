#ifndef UE4SS_SDK_UI_Bar_PlayerRankWarning_HPP
#define UE4SS_SDK_UI_Bar_PlayerRankWarning_HPP

class UUI_Bar_PlayerRankWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_InfoBoxAppear;
    class UImage* Image_82;
    class UImage* Image_84;
    class UImage* Image_85;
    class UImage* Image_86;
    class USizeBox* PlayerRankToolTip;
    class UTextBlock* TextBlock_90;
    int32 Rank;

    void SetRank(int32 Value);
    void AnimStop();
    void AnimPlay();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Bar_PlayerRankWarning(int32 EntryPoint);
};

#endif
