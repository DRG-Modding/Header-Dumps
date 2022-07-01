#ifndef UE4SS_SDK_ITM_CommunityGoalResult_ConsoleScreenV1_HPP
#define UE4SS_SDK_ITM_CommunityGoalResult_ConsoleScreenV1_HPP

class UITM_CommunityGoalResult_ConsoleScreenV1_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* BronzeImage;
    class UOverlay* GoldImage;
    class UImage* Icon;
    class UImage* ImageB;
    class UImage* ImageG;
    class UImage* ImageNT;
    class UImage* Images;
    class UOverlay* NoTierImage;
    class UOverlay* SilverImage;
    class UTextBlock* TierTextBlock;
    class UTextBlock* TitleTextBlock;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_267;
    FText Title;
    int32 TitleSize;
    FSlateBrush IconImage;
    class UCommunityGoalFaction* Faction;
    FVector2D TierIconSize;

    void UpdateTitle();
    void UpdateIcon();
    void SetFaction(class UCommunityGoalFaction* Faction);
    void PreConstruct(bool IsDesignTime);
    void SetResult(int32 Score, int32 Tier);
    void ExecuteUbergraph_ITM_CommunityGoalResult_ConsoleScreenV1(int32 EntryPoint);
};

#endif
