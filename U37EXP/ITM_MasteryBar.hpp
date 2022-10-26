#ifndef UE4SS_SDK_ITM_MasteryBar_HPP
#define UE4SS_SDK_ITM_MasteryBar_HPP

class UITM_MasteryBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* BarSize;
    class UHorizontalBox* MasteryBar;
    class UBorder* MasteryBar_BG;
    class AFSDPlayerState* PlayerState;
    class UItemID* itemClass;
    class UMasteryIconWidget* CurrentMasteryWidget;
    float Height;
    int32 PreviewCurrentMastery;
    int32 PreviewMaxMastery;
    TArray<FMasteryItem> PreviewMasteryLevels;
    FMargin Padding_Border;
    FMargin Padding_Node;
    bool Show Icons;
    FITM_MasteryBar_COnItemRewarded OnItemRewarded;
    void OnItemRewarded(FMasteryItem Reward);

    void SetMasteryData(class AFSDPlayerState* Player, class UItemID* Item, bool& HasMasteryLevels);
    void AddMasteryBox(class UWidget* Content);
    void CreateMasteryLevels(int32 maxMastery, int32 CurrentMastery, class UItemID* Item, TArray<FMasteryItem>& masteryLevels);
    void PreConstruct(bool IsDesignTime);
    void ItemUpgradePurchased();
    void ExecuteUbergraph_ITM_MasteryBar(int32 EntryPoint);
    void OnItemRewarded__DelegateSignature(FMasteryItem Reward);
};

#endif
