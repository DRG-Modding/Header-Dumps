#ifndef UE4SS_SDK_UI_MissionComplete_CombinedRewardLine_HPP
#define UE4SS_SDK_UI_MissionComplete_CombinedRewardLine_HPP

class UUI_MissionComplete_CombinedRewardLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCount;
    class UTextBlock* AmountLabel;
    class UTextBlock* DescriptionLabel;
    class UImage* IconImage;
    FText Description;
    bool Uppercase Description;
    int32 Amount;
    class UTexture2D* Icon;
    FLinearColor IconTint;
    float CountProgress;
    int32 PreviousAmount;
    class UUI_MissionComplete_RewardColumn_C* Column;
    int32 currentAmount;
    int32 Size;

    void GetAmount(int32& Amount);
    void SetIcon(class UTexture2D* Texture, FLinearColor TextureTint);
    void SetAmount(int32 Value);
    void SetDescription(const FText& InText, bool InUpperCase);
    void PreConstruct(bool IsDesignTime);
    void BeginCount(class UUI_MissionComplete_RewardColumn_C* InColumn, float Duration);
    void SetCountProgress(float InProgress);
    void ExecuteUbergraph_UI_MissionComplete_CombinedRewardLine(int32 EntryPoint);
};

#endif
